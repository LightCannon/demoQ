#include "qcustom_titlebar.h"

QCustom_titlebar::QCustom_titlebar(QWidget *parent)
	: QFrame(parent)
{

}

QCustom_titlebar::~QCustom_titlebar()
{

}

void QCustom_titlebar::mousePressEvent(QMouseEvent * event)
{
	m_isPressed = true;
	m_startMovePos = event->globalPos();
}

void QCustom_titlebar::mouseMoveEvent(QMouseEvent * event)
{
	if (m_isPressed)
	{
		QPoint movePoint = event->globalPos() - m_startMovePos;
		QPoint widgetPos = this->parentWidget()->parentWidget()->pos();
		m_startMovePos = event->globalPos();
		this->parentWidget()->parentWidget()->move(widgetPos.x() + movePoint.x(), widgetPos.y() + movePoint.y());
	}
	return QFrame::mouseMoveEvent(event);

}

void QCustom_titlebar::mouseReleaseEvent(QMouseEvent * event)
{
	m_isPressed = false;
	return QFrame::mouseReleaseEvent(event);
}
