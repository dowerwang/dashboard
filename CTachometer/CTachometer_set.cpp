/**
 * @brief Get/set functions definition
 * @file CTachometer_set.cpp
 * @author gregory.medwed@heig-vd.ch
 * @date December 2015
 */

#include "CTachometer.h"


/**
 * Set rpm
 * @param value IN [rpm]
 */
void CTachometer::rpm_set(int value)
{
	rpm_ = value;

	// Redraw the widget
	update();
	qDebug() << "[CTachometer]: rpm" << rpm_ << "[rpm]";
}


