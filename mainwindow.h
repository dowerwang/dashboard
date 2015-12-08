/**
 * @brief Class header file
 * @file mainwindow.h
 * @author gregory.medwed@heig-vd.ch
 * @date December 2015
 */
#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QCoreApplication>
#include <QMainWindow>
#include <QGridLayout>
#include <QKeyEvent>

#include "CContactKey/CContactKey.h"
#include "CIndicators/CIndicators.h"
#include "CEngine/CEngine.h"
#include "CFuelGauge/CFuelGauge.h"
#include "CTempGauge/CTempGauge.h"
#include "CTachometer/CTachometer.h"
#include "CSpeedometer/CSpeedometer.h"
#include "CGearBox/CGearBox.h"
#include "CLights/CLights.h"


/**
 * MainWindow Class
 */
class MainWindow : public QMainWindow
{
	Q_OBJECT
public:
	MainWindow(QWidget *parent = 0);
	~MainWindow();

protected:
	void keyPressEvent(QKeyEvent* pEvent);

private:
	static const int rpmStep_ = 100;
	static const int speedStep_ = 1;

	CContactKey* pKey_;
	CIndicators* pIndicators_;
	CEngine* pEngine_;
	CFuelGauge* pFuelGauge_;
	CTempGauge* pTempGauge_;
	CTachometer* pTachometer_;
	CSpeedometer* pSpeedometer_;
	CGearBox* pGearBox_;
	CLights* pLights_;
};


#endif // MAINWINDOW_H
