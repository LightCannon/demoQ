#ifndef QCUSTOM_TITLEBAR_H
#define QCUSTOM_TITLEBAR_H

#include <QFrame>
#include <QMouseEvent>
#include <qpoint.h>
class QCustom_titlebar : public QFrame
{
	Q_OBJECT

public:
	QCustom_titlebar(QWidget *parent);
	~QCustom_titlebar();

private:
	bool m_isPressed = false;
	QPoint m_startMovePos;

	void mousePressEvent(QMouseEvent *event);
	void mouseMoveEvent(QMouseEvent *event);
	void mouseReleaseEvent(QMouseEvent *event);
};

#endif // QCUSTOM_TITLEBAR_H
