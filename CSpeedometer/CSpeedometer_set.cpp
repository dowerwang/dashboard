/**
 * @brief Get/set functions definition
 * @file CSpeedometer_set.cpp
 * @author gregory.medwed@heig-vd.ch
 * @date December 2015
 */

#include "CSpeedometer.h"


/**
 * Set speed
 * @param value IN [km/h]
 */
void CSpeedometer::speed_set(int value)
{
	speed_ = value;

	// Redraw the widget
	update();
	qDebug() << "[CSpeedometer]: speed" << speed_ << "[km/h]";
}


