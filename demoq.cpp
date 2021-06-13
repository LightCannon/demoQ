#include "demoq.h"

demoQ::demoQ(QWidget *parent)
	: QMainWindow(parent), main_screen{parent}
{
	this->setWindowFlags(Qt::FramelessWindowHint | Qt::WindowMinimizeButtonHint);
	ui.setupUi(this);
	ui.text_email->set_placeholder("Email");
	ui.text_password->set_placeholder("Password");


	authman = new AuthManager(parent);
	network_thread = new QThread(parent);

	/*Doing some connections*/

	connect(this->ui.title_x, &QPushButton::clicked, this, &demoQ::close);

	//authman request login (ui to network auth manager)
	connect(this, &demoQ::request_login, this->authman, &AuthManager::authenricate_login);

	connect(this->ui.pushButton, &QLoading_PushButton::clicked,
		[=]() {
				emit request_login(this->ui.text_email->text(), this->ui.text_password->text() );
			  }
		);

	// error handlers (network auth manager to ui)
	connect(this->authman, &AuthManager::handle_error, this, &demoQ::render_error);
	connect(this->authman, &AuthManager::handle_auth_success, this, &demoQ::proceed_to_main);


	// Moving network logic to separate thread (since we chose to wait for reply to be ready  sync.
	authman->moveToThread(this->network_thread);
	this->network_thread->start();
}

demoQ::~demoQ()
{

}


void demoQ::render_error(QJsonObject error_dict,int status_code)
{
	// Handling/Rendering all errors 
	if (417 == status_code)
	{
		QJsonObject first_err = error_dict.value(QString("first_errors")).toObject();
		if (first_err.contains(QString("email")))
		{
			QString err_string = first_err.value(QString("email")).toString();
			ui.text_email->set_error(err_string);
		}
		else if (first_err.contains(QString("password")))
		{
			QString err_string = first_err.value(QString("password")).toString();
			ui.text_password->set_error(err_string);
		}

	}


	ui.pushButton->reset();
}

void demoQ::proceed_to_main(QJsonObject info_dict)
{
	this->main_screen.set_info(info_dict);
	this->main_screen.render_info();
	this->main_screen.show();
	this->hide();

}
