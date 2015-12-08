/**
 * @brief Constructor/destructor functions definition
 * @file CTempGauge.cpp
 * @author gregory.medwed@heig-vd.ch
 * @date December 2015
 */


#include "CTempGauge.h"


/**
 * Constructor
 * @param parent OUT default 0
 */
CTempGauge::CTempGauge(QWidget *parent)
	: QWidget(parent)
{
	temp_ = 0;
	size_ = QSize(CTEMP_GAUGE_DEFAULT_WIDTH, CTEMP_GAUGE_DEFAULT_HEIGHT);
}


/**
 * Constructor
 * @param size IN
 * @param parent OUT default 0
 */
CTempGauge::CTempGauge(QSize size, QWidget *parent)
	: QWidget(parent)
{
	temp_ = 0;
	size_ = size;
}


/**
 * Destructor
 */
CTempGauge::~CTempGauge(void)
{

}


