#ifndef DEMOQ_MAIN_H
#define DEMOQ_MAIN_H

#include <QMainWindow>
#include <QtCore\qjsondocument.h>
#include <QtCore\qjsonobject.h>

#include "ui_demoqmain.h"

class demoQ_main : public QMainWindow
{
	Q_OBJECT

public:
	demoQ_main(QWidget *parent);
	~demoQ_main();
	void set_info(QJsonObject info_dict);
	void render_info();
private:
	Ui::demoQClass_main ui;
	QJsonObject info_dict;
};

#endif // DEMOQ_MAIN_H
