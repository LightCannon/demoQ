#ifndef QLOADING_PUSHBUTTON_H
#define QLOADING_PUSHBUTTON_H

#include <QPushButton>
#include <qtimer.h>
class QLoading_PushButton : public QPushButton
{
	Q_OBJECT

public:
	QLoading_PushButton(QWidget *parent);
	~QLoading_PushButton();

	
	void reset();

private:
	QString text_;
	qint8 frame_no;
	/*We decided to use timer as we can only make transparent-background loading animation using png not gif. Therefore, we made the animation logic manually*/
	QTimer *tick_timer;

	void display_loading();
	void update_frame();
};

#endif // QLOADING_PUSHBUTTON_H
