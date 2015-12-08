/**
 * @brief Constructor/destructor functions definition
 * @file CTachometer.cpp
 * @author gregory.medwed@heig-vd.ch
 * @date December 2015
 */


#include "CTachometer.h"


/**
 * Constructor
 * @param parent OUT default 0
 */
CTachometer::CTachometer(QWidget* parent)
	: QWidget(parent)
{
	rpm_ = 0;
	size_ = QSize(CTACHOMETER_DEFAULT_WIDTH, CTACHOMETER_DEFAULT_HEIGHT);
}


/**
 * Constructor
 * @param size IN
 * @param parent OUT default 0
 */
CTachometer::CTachometer(QSize size, QWidget* parent)
	: QWidget(parent)
{
	rpm_ = 0;
	size_ = size;
}


/**
 * Destructor
 */
CTachometer::~CTachometer(void)
{

}


