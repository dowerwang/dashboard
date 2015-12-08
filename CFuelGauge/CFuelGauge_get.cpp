/**
 * @brief Get/set functions definition
 * @file CFuelGauge_get.cpp
 * @author gregory.medwed@heig-vd.ch
 * @date December 2015
 */

#include "CFuelGauge.h"


/**
 * Set fuel level
 * @param level IN
 */
void CFuelGauge::level_set(int level)
{
	fuelLevel_ = level;

	// Redraw the widget
	update();
	qDebug() << "[CFuelGauge]: level" << fuelLevel_;
}


