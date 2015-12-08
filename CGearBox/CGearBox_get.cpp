/**
 * @brief Get/set functions definition
 * @file CGearBox_get.cpp
 * @author gregory.medwed@heig-vd.ch
 * @date December 2015
 */

#include "CGearBox.h"


/**
 * Set gear position
 * @param pos IN
 */
void CGearBox::position_set(EGearPosition pos)
{
	position_ = pos;
	emit gearBox_update(position_);

	// Redraw the widget
	update();
	qDebug() << "[CGearBox]: position" << (int)position_;
}


/**
 * Get gear position
 * @return position (0, 1, ...)
 */
CGearBox::EGearPosition CGearBox::position_get(void) const
{
	return position_;
}


/**
 * Get gear position as a char
 * @return position ('N', '1', ...)
 */
char CGearBox::position_char_get(void) const
{
	char pos = '?';

	switch (position_)
	{
	default:
	case Position_Neutral: pos = 'N'; break;
	case Position_1_Gear:  pos = '1'; break;
	case Position_2_Gear:  pos = '2'; break;
	case Position_3_Gear:  pos = '3'; break;
	case Position_4_Gear:  pos = '4'; break;
	case Position_5_Gear:  pos = '5'; break;
	case Position_Reverse: pos = 'R'; break;
	}

	return pos;
}

