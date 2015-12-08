/**
 * @brief Main function (not modified)
 * @file main.cpp
 * @author qtcreator
 * @date December 2015
 */

#include "mainwindow.h"
#include <QApplication>


/**
 * Main function (not modified)
 * @param argc IN not used
 * @param argv IN not used
 * @return 0 if succeed
 */
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MainWindow w;
	w.show();

	return a.exec();
}
