#ifndef AUTHMANAGER_H
#define AUTHMANAGER_H

#include <QObject>
#include "apis.h"
#include <qstring.h>
#include <QtNetwork\qnetworkaccessmanager.h>
#include <QtNetwork\qnetworkreply.h>
#include <QtCore\qjsondocument.h>
#include <QtCore\qjsonobject.h>
#include <QtCore\qurl.h>
#include <QtCore\qurlquery.h>
#include <QEventLoop>

class AuthManager : public QObject
{
	Q_OBJECT

public:
	AuthManager(QObject *parent);
	~AuthManager();


	void authenricate_login(QString email, QString password);


signals:
	void handle_error(QJsonObject error_dict,int status_code);
	void handle_auth_success(QJsonObject info_dict);

private:
	bool authenticated = false;
	bool error_happened = false;
	QString error_value = "";
	QString error_description = "";

	/*email and passoword*/
	QString email, password;
	/*auth token which will return from the request if success*/
	QString auth_token;
	/*qt network manager which is required to make requests*/
	QNetworkAccessManager * manager;
	QNetworkReply *reply;

	/*Functions*/
	QJsonObject __post_resquest(QString url, QJsonObject  params);


};

#endif // AUTHMANAGER_H
