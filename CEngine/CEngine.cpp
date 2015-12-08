/**
 * @brief Constructor/destructor functions definition
 * @file CEngine.cpp
 * @author gregory.medwed@heig-vd.ch
 * @date December 2015
 */


#include "CEngine.h"


/**
 * Constructor
 * @param parent OUT default 0
 */
CEngine::CEngine(QWidget *parent)
	: QWidget(parent)
{
	isRunning_ = false;
	temp_ = 0;
	fuel_ = 100;
	speed_ = 0;
	rpm_ = 0;

	pTimer_ = new QTimer(this);
	connect(pTimer_, SIGNAL(timeout(void)), this, SLOT(param_update(void)));
}


/**
 * Destructor
 */
CEngine::~CEngine(void)
{
	stop();
	delete pTimer_;
}


