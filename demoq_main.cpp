#include "demoq_main.h"

demoQ_main::demoQ_main(QWidget *parent)
	: QMainWindow(parent)
{
	this->ui.setupUi(this);
	this->setWindowFlags(Qt::FramelessWindowHint | Qt::WindowMinimizeButtonHint);
	connect(this->ui.title_x, &QPushButton::clicked, this, &demoQ_main::close);
}

demoQ_main::~demoQ_main()
{

}

void demoQ_main::set_info(QJsonObject info_dict)
{
	this->info_dict = info_dict;
}

void demoQ_main::render_info()
{
	/*This function should handle rendering from information dict coming from api*/
}

