#include "qloading_pushbutton.h"

QLoading_PushButton::QLoading_PushButton(QWidget *parent)
	: QPushButton(parent)
{

	this->setIconSize(QSize(50, 50));
	frame_no = 0;
	this->tick_timer = new QTimer(this);
	this->tick_timer->setInterval(20);
	//this->movie->setFileName(":/demoQ/Resources/images/loading.gif");
	connect(this, &QLoading_PushButton::clicked, this, &QLoading_PushButton::display_loading);
	connect(this->tick_timer, &QTimer::timeout, this, &QLoading_PushButton::update_frame);
}

QLoading_PushButton::~QLoading_PushButton()
{

}

void QLoading_PushButton::reset()
{
	//Stop animation
	this->setIcon(QIcon());
	this->tick_timer->stop();

	// Restore text
	this->setText(this->text_);
	// reset latched text
	this->text_ = QString("");
	
}

void QLoading_PushButton::display_loading()
{
	// Latching text
	this->text_ = text();
	// hide original text
	this->setText("");
	// show animation
	QString rsrc_name = ":/demoQ/Resources/images/tile" + QString::number(this->frame_no) + ".png";
	this->setIcon(QIcon(rsrc_name));

	this->tick_timer->start();
	this->frame_no = 0;
}

void QLoading_PushButton::update_frame()
{
	
	QString rsrc_name = ":/demoQ/Resources/images/tile" + QString::number(this->frame_no) + ".png";
	this->setIcon(QIcon(rsrc_name));
	
	if (frame_no == 27)
		frame_no = 0;
	else
		frame_no++;

}

