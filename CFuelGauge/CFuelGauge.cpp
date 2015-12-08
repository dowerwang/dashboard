/**
 * @brief Constructor/destructor functions definition
 * @file CFuelGauge.cpp
 * @author gregory.medwed@heig-vd.ch
 * @date December 2015
 */


#include "CFuelGauge.h"


/**
 * Constructor
 * @param parent OUT default 0
 */
CFuelGauge::CFuelGauge(QWidget *parent)
	: QWidget(parent)
{
	fuelLevel_ = 0;
	size_ = QSize(CFUEL_GAUGE_DEFAULT_WIDTH, CFUEL_GAUGE_DEFAULT_HEIGHT);
}


/**
 * Constructor
 * @param size IN
 * @param parent OUT default 0
 */
CFuelGauge::CFuelGauge(QSize size, QWidget *parent)
	: QWidget(parent)
{
	fuelLevel_ = 0;
	size_ = size;
}


/**
 * Destructor
 */
CFuelGauge::~CFuelGauge(void)
{

}


