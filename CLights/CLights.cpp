/**
 * @brief Constructor/destructor functions definition
 * @file CLights.cpp
 * @author gregory.medwed@heig-vd.ch
 * @date December 2015
 */


#include "CLights.h"


/**
 * Constructor
 * @param parent OUT default 0
 */
CLights::CLights(QWidget *parent)
	: QWidget(parent)
{
	selection_ = Lights_Off;
	size_ = QSize(CLIGHTS_DEFAULT_WIDTH, CLIGHTS_DEFAULT_HEIGHT);
}


/**
 * Constructor
 * @param size IN
 * @param parent OUT default 0
 */
CLights::CLights(QSize size, QWidget *parent)
	: QWidget(parent)
{
	selection_ = Lights_Off;
	size_ = size;
}


/**
 * Destructor
 */
CLights::~CLights(void)
{
}


