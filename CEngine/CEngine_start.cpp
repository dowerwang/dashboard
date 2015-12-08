/**
 * @brief Start/stop functions definition
 * @file CEngine_start.cpp
 * @author gregory.medwed@heig-vd.ch
 * @date December 2015
 */

#include "CEngine.h"


/**
 * Start the engine
 */
void CEngine::start(void)
{
	isRunning_ = true;
	temp_ = 60;
	rpm_ = 1000;
	pTimer_->start(1000);

	emit fuel_update(fuel_);
	emit temp_update(temp_);
	emit rpm_update(rpm_);

	qDebug() << "[CEngine]: Started!";
}


/**
 * Stop the engine
 */
void CEngine::stop(void)
{
	isRunning_ = false;
	temp_ = 0;
	rpm_ = 0;
	speed_ = 0;
	pTimer_->stop();

	emit temp_update(temp_);
	emit rpm_update(rpm_);
	emit speed_update(speed_);

	qDebug() << "[CEngine]: Stopped!";
}


