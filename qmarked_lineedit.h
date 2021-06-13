#ifndef QMARKED_LINEEDIT_H
#define QMARKED_LINEEDIT_H

#include <QLineEdit>
#include <qstring.h>
#include <qpainter.h>
#include <qfontmetrics.h>

class QMarked_LineEdit : public QLineEdit
{
	Q_OBJECT

public:
	QMarked_LineEdit(QWidget *parent);
	~QMarked_LineEdit();
	void set_error(QString error_string);
	void reset_errors(const QString text);
	void set_placeholder(QString placholder);

private:
	void connect_internal_signals();
	bool have_error = false;

	QString placeholder_custom;
	QString error_string;
protected:
	void paintEvent(QPaintEvent* event);

};

#endif // QMARKED_LINEEDIT_H
