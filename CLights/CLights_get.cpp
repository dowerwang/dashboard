/**
 * @brief Get/set functions definition
 * @file CLights_get.cpp
 * @author gregory.medwed@heig-vd.ch
 * @date December 2015
 */

#include "CLights.h"


/**
 * Set lights selection
 * @param sel IN
 */
void CLights::selection_set(ELightsSelection sel)
{
	selection_ = sel;
	emit lights_update(selection_);

	// Redraw the widget
	update();
	qDebug() << "[CLights]: selection" << (int)selection_;
}


/**
 * Get lights selection
 * @return current selection
 */
CLights::ELightsSelection CLights::selection_get(void) const
{
	return selection_;
}

