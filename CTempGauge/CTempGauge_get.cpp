/**
 * @brief Get/set functions definition
 * @file CTempGauge_get.cpp
 * @author gregory.medwed@heig-vd.ch
 * @date December 2015
 */

#include "CTempGauge.h"


/**
 * Set Temperature
 * @param value IN [°C]
 */
void CTempGauge::temp_set(int value)
{
	temp_ = value;

	// Redraw the widget
	update();
	qDebug() << "[CTempGauge]: temp" << temp_;
}


