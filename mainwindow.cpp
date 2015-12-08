/**
 * @brief Constructor/destructor function definition
 * @file mainwindow.cpp
 * @author gregory.medwed@heig-vd.ch
 * @date December 2015
 */

#include "mainwindow.h"

/**
 * Constructor
 * @param parent OUT
 */
MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	/*
	 * Init
	 */
	pKey_ = new CContactKey(QSize(100, 100), this);

	pIndicators_ = new CIndicators(QSize(50, 50), this);

	pEngine_ = new CEngine(this);

	pFuelGauge_ = new CFuelGauge(this);
	connect(pEngine_, SIGNAL(fuel_update(int)), pFuelGauge_, SLOT(level_set(int)));

	pTempGauge_ = new CTempGauge(this);
	connect(pEngine_, SIGNAL(temp_update(int)), pTempGauge_, SLOT(temp_set(int)));

	pTachometer_ = new CTachometer(this);
	connect(pEngine_, SIGNAL(rpm_update(int)), pTachometer_, SLOT(rpm_set(int)));

	pSpeedometer_ = new CSpeedometer(this);
	connect(pEngine_, SIGNAL(speed_update(int)), pSpeedometer_, SLOT(speed_set(int)));

	pGearBox_ = new CGearBox(this);

	pLights_ = new CLights(this);

	/*
	 * Layout
	 */
	QGridLayout* pLayout = new QGridLayout;
	pLayout->addWidget(pIndicators_->pLeft, 0, 1, 1, 1);
	pLayout->addWidget(pTempGauge_, 0, 2, 1, 1);
	pLayout->addWidget(pFuelGauge_, 0, 3, 1, 1);
	pLayout->addWidget(pIndicators_->pRight, 0, 4, 1, 1);
	pLayout->addWidget(pGearBox_, 0, 5, 1, 1);
	pLayout->addWidget(pLights_, 1, 0, 1, 1);
	pLayout->addWidget(pTachometer_, 1, 1, 1, 2);
	pLayout->addWidget(pSpeedometer_, 1, 3, 1, 2);
	pLayout->addWidget(pKey_, 1, 5, 1, 1);


	/*
	 * Central widget
	 */
	QWidget* pCentral = new QWidget(this);
	pCentral->setLayout(pLayout);

	setCentralWidget(pCentral);
	setMinimumSize(800, 400);


} // MainWindow


/**
 * Destructor
 */
MainWindow::~MainWindow()
{
	delete pKey_;
	delete pIndicators_;
	delete pEngine_;
	delete pFuelGauge_;
	delete pTempGauge_;
	delete pTachometer_;
	delete pSpeedometer_;
	delete pGearBox_;
	delete pLights_;
}
