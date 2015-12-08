/**
 * @brief Constructor/destructor functions definition
 * @file CSpeedometer.cpp
 * @author gregory.medwed@heig-vd.ch
 * @date December 2015
 */


#include "CSpeedometer.h"


/**
 * Constructor
 * @param parent OUT default 0
 */
CSpeedometer::CSpeedometer(QWidget* parent)
	: QWidget(parent)
{
	speed_ = 0;
	size_ = QSize(CSPEEDOMETER_DEFAULT_WIDTH, CSPEEDOMETER_DEFAULT_HEIGHT);
}


/**
 * Constructor
 * @param size IN
 * @param parent OUT default 0
 */
CSpeedometer::CSpeedometer(QSize size, QWidget* parent)
	: QWidget(parent)
{
	speed_ = 0;
	size_ = size;
}


/**
 * Destructor
 */
CSpeedometer::~CSpeedometer(void)
{

}


