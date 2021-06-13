#include "authmanager.h"

AuthManager::AuthManager(QObject *parent)
	: QObject(parent)
{
	manager = new QNetworkAccessManager(this);

}

AuthManager::~AuthManager()
{

}

void AuthManager::authenricate_login(QString email, QString password)
{
	this->email = email;
	this->password = password;
	/*Send post request*/
	QJsonObject  post_parameters;
	post_parameters["email"]= email;
	post_parameters["password"]=password;

	QJsonObject doc_obj = this->__post_resquest(API_AUTH_LOGIN, post_parameters);
	if (this->error_happened)
	{
		/*Handle errors*/
		int status_code = this->reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
		emit this->handle_error(doc_obj, status_code);


	}
	else
	{
		QString token= doc_obj.value(QString("token")).toString();
		/*To be used in any other case*/
		this->auth_token = token;
		this->authenticated = true;
		emit this->handle_auth_success(doc_obj);

	}
}

QJsonObject AuthManager::__post_resquest(QString url, QJsonObject  params)
{
	QNetworkRequest request;
	QJsonObject doc_obj;
	
	request.setUrl(url);
	if (this->authenticated) {/*pass for now,*/ }
	else
	{
		request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
	}
	// sending the request
	QJsonDocument request_doc(params);
	QByteArray request_body= request_doc.toJson();

	reply = this->manager->post(request, request_body);
	// catching the reply (synchrounsly, because we need to wait, also, we are on separate thread so no problem )
	//

	QEventLoop loop;
	//QObject::connect(reply, &QNetworkReply::finished, this, &AuthManager::got_reply);
	//loop.connect(this->manager, &QNetworkReply::finished, loop, &QEventLoop::quit);
	//loop.connect(networkManager, SIGNAL(finished(QNetworkReply*)), SLOT(quit()));
	loop.connect(this->manager, SIGNAL(finished(QNetworkReply*)), SLOT(quit()));
	loop.exec();
	if (reply == nullptr) {return doc_obj;}
	else if(reply->error())
	{
		this->error_happened = true;

	}
	QString data = reply->readAll();
	QJsonDocument doc = QJsonDocument::fromJson(data.toUtf8());
	doc_obj = doc.object();
	return doc_obj;
	
}

