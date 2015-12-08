/**
 * @brief Get/set functions definition
 * @file CEngine_get.cpp
 * @author gregory.medwed@heig-vd.ch
 * @date December 2015
 */

#include "CEngine.h"


/**
 * Is the engine ON?
 * @return true if ON
 */
bool CEngine::is_running(void) const
{
	return isRunning_;
}


/**
 * Engine parameter periodic update every second (PRIVATE SLOT)
 */
void CEngine::param_update(void)
{
	if (fuel_ == 0)
		stop();
	else
		fuel_--;

	if (temp_ < CENGINE_TEMP_VALUE_MAX)
		temp_++;

	emit fuel_update(fuel_);
	emit temp_update(temp_);

	qDebug() << "[CEngine]: rpm:" << rpm_ << ", speed:" << speed_ << ", temp:" << temp_ << ", fuel:" << fuel_;

}


/**
 * Set RPM
 * @param value IN
 */
void CEngine::rpm_set(int value)
{
	if (value < CENGINE_RPM_VALUE_MIN)
		rpm_ = CENGINE_RPM_VALUE_MIN;
	else if (value > CENGINE_RPM_VALUE_MAX)
		rpm_ = CENGINE_RPM_VALUE_MAX;
	else
		rpm_ = value;

	emit rpm_update(rpm_);
}


/**
 * Get RPM
 * @return rmp value
 */
int  CEngine::rpm_get(void) const
{
	return rpm_;
}


/**
 * Increase rpm
 * @param step IN default 1
 */
void CEngine::rpm_up(int step)
{
	rpm_set(rpm_+step);
	emit rpm_update(rpm_);
}


/**
 * Decrease rpm
 * @param step IN default 1
 */
void CEngine::rpm_down(int step)
{
	rpm_set(rpm_-step);
	emit rpm_update(rpm_);
}


/**
 * Set speed
 * @param value IN
 */
void CEngine::speed_set(int value)
{
	if (value < CENGINE_SPEED_VALUE_MIN)
		speed_ = CENGINE_SPEED_VALUE_MIN;
	else if (value > CENGINE_SPEED_VALUE_MAX)
		speed_ = CENGINE_SPEED_VALUE_MAX;
	else
		speed_ = value;

	emit speed_update(speed_);
}


/**
 * Get speed
 * @return speed value
 */
int CEngine::speed_get(void) const
{
	return speed_;
}


/**
 * Increase speed
 * @param step IN default 1
 */
void CEngine::speed_up(int step)
{
	speed_set(speed_+step);
	emit speed_update(speed_);
}


/**
 * Decrease speed
 * @param step IN default 1
 */
void CEngine::speed_down(int step)
{
	speed_set(speed_-step);
	emit speed_update(speed_);
}

