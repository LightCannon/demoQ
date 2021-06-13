#ifndef DEMOQ_H
#define DEMOQ_H

#include <QtWidgets/QMainWindow>

#include <QtCore\qjsondocument.h>
#include <QtCore\qjsonobject.h>
#include <qthread.h>

#include "ui_demoq.h"
#include "authmanager.h"

#include "demoq_main.h"


class demoQ : public QMainWindow
{
	Q_OBJECT

public:
	demoQ(QWidget *parent = 0);
	~demoQ();

signals:
	void request_login(QString email, QString password);

private:
	Ui::demoQClass ui;
	AuthManager* authman;
	QThread* network_thread;

	demoQ_main main_screen;

	void render_error(QJsonObject error_dict, int status_code);
	void proceed_to_main(QJsonObject info_dict);
};

#endif // DEMOQ_H
