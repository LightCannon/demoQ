#include "demoq.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	demoQ w;
	w.show();
	return a.exec();
}
