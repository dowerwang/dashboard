/**
 * @brief Constructor/destructor functions definition
 * @file CContactKey.cpp
 * @author gregory.medwed@heig-vd.ch
 * @date December 2015
 */


#include "CContactKey.h"


/**
 * Constructor
 * @param parent OUT default 0
 */
CContactKey::CContactKey(QWidget *parent)
	: QWidget(parent)
{
	keyPosition_ = Position_Off;
	size_ = QSize(CCONTACT_KEY_DEFAULT_WIDTH, CCONTACT_KEY_DEFAULT_HEIGHT);

	pStartTimer_ = new QTimer(this);

}


/**
 * Constructor
 * @param size IN
 * @param parent OUT default 0
 */
CContactKey::CContactKey(QSize size, QWidget *parent)
	: QWidget(parent)
{
	keyPosition_ = Position_Off;
	size_ = size;
}


/**
 * Destructor
 */
CContactKey::~CContactKey(void)
{
	delete pStartTimer_;
}


