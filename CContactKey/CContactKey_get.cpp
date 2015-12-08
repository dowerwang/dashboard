/**
 * @brief Get/set functions definition
 * @file CContactKey_get.cpp
 * @author gregory.medwed@heig-vd.ch
 * @date December 2015
 */

#include "CContactKey.h"


/**
 * Set key Position
 * @param pos IN
 */
void CContactKey::position_set(EKeyPosition pos)
{
	keyPosition_ = pos;
	emit contact_key_update(keyPosition_);

	// Reset start position after 2 seconds
	if (keyPosition_ == Position_Start)
		pStartTimer_->singleShot(2000, this, SLOT(start_pos_reset(void)));

	// Redraw the widget
	update();
	qDebug() << "[CContactKey]: Key position" << (int)keyPosition_;
}


/**
 * Get key Position
 * @return ke position
 */
CContactKey::EKeyPosition CContactKey::position_get(void) const
{
	return keyPosition_;
}


/**
 * Reset key position from Start to Contect (PRIVATE SLOT)
 */
void CContactKey::start_pos_reset(void)
{
//	qDebug() << "[CContactKey]: start_pos_reset(): called!";
	position_set(Position_Contact);
}
