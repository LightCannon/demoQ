#include "qmarked_lineedit.h"

QMarked_LineEdit::QMarked_LineEdit(QWidget *parent)
	: QLineEdit(parent)
{
	this->connect_internal_signals();
}

QMarked_LineEdit::~QMarked_LineEdit()
{

}

void QMarked_LineEdit::set_error(QString error_string)
{
	this->error_string = error_string;
	this->have_error = true;
	this->update();
}

void QMarked_LineEdit::reset_errors(const QString text)
{
	
	this->have_error = false;
}

void QMarked_LineEdit::set_placeholder(QString placeholder)
{
	this->placeholder_custom = placeholder;
}

void QMarked_LineEdit::connect_internal_signals()
{
	connect(this, &QMarked_LineEdit::textChanged, this, &QMarked_LineEdit::reset_errors);
}

void QMarked_LineEdit::paintEvent(QPaintEvent * event)
{	
	/*Normal Paint*/
	QLineEdit::paintEvent(event);

	QPainter painter(this);

	/*Changing placeholder color*/
	bool cond1 = !this->hasFocus();
	bool cond2 = this->text().isEmpty();
	bool cond3 = !this->placeholder_custom.isEmpty();
	if (cond1 && cond2 && cond3)
	{
		// QLineEdit's own placeholder clashes with ours.
		Q_ASSERT(placeholderText().isEmpty());

		painter.setPen(QColor(49, 98, 170));
		QFontMetrics fm(this->font());
		QString xx = this->placeholder_custom;

		QRect rect = fm.boundingRect(xx);

		int minLB = qMax(0, -fm.minLeftBearing());
		QRect lineRect = this->rect();
		QRect ph = lineRect.adjusted(minLB + 3, 0, 0, 0);
		QString elidedText = fm.elidedText(this->placeholder_custom, Qt::ElideRight, ph.width());
		//painter.drawText(0,0, Qt::AlignVCenter, "11111111");
		
		int y = lineRect.height() / 2;
		int x = (lineRect.width()- rect.width()-8) / 2;
		painter.drawText(x, y+5, xx);

	}
	/*Error paint*/
	if (this->have_error)
	{
		QFontMetrics fnMetrics(this->font());
		
		painter.setPen(QColor(180,3,31));
		/*Draw text*/
		painter.drawText(20, 15, this->error_string);
		/*Draw the rounded rect*/
		//painter.drawRoundedRect(this->rect(), 6, 6);
		painter.drawRoundedRect(0, 2, this->width()-2, this->height()-4, 6, 6);
		
		QRect rect = fnMetrics.boundingRect(this->error_string);
		painter.setPen( this->palette().color(this->backgroundRole()));
		painter.drawLine(15, 2, rect.width()+25, 2);
		
	}
	
}
