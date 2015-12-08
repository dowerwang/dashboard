/**
 * @brief Keyboard functions definition
 * @file mainwindow_keyboard.cpp
 * @author gregory.medwed@heig-vd.ch
 * @date December 2015
 */


#include "mainwindow.h"


/**
 * Keyboard handler (overloaded class protected function)
 * @param pEvent IN
 */
void MainWindow::keyPressEvent(QKeyEvent* pEvent)
{
	switch (pEvent->key())
	{
	case Qt::Key_Escape:
		exit(0);
		break;
	/*
	 * CIndicators
	 */
	case Qt::Key_L:	// Left Indicator
		if (pIndicators_->state_get() == CIndicators::Blink_Off)
			pIndicators_->state_set(CIndicators::Blink_Left);
		else
			pIndicators_->state_set(CIndicators::Blink_Off);
		break;
	case Qt::Key_R:	// Right Indicator
		if (pIndicators_->state_get() == CIndicators::Blink_Off)
			pIndicators_->state_set(CIndicators::Blink_Right);
		else
			pIndicators_->state_set(CIndicators::Blink_Off);
		break;
	case Qt::Key_W:	// Warnings Indicator
		if (pIndicators_->state_get() == CIndicators::Blink_Off)
			pIndicators_->state_set(CIndicators::Blink_Both);
		else
			pIndicators_->state_set(CIndicators::Blink_Off);
		break;
	/*
	 * CContactKey
	 */
	case Qt::Key_K:	// Contact Key
		switch (pKey_->position_get())
		{
		case CContactKey::Position_Off:
			pKey_->position_set(CContactKey::Position_Contact);
			break;
		case CContactKey::Position_Contact:
		case CContactKey::Position_Start:
			if (!pEngine_->is_running())
			{
				pKey_->position_set(CContactKey::Position_Start);
				pEngine_->start();
			}
			else
			{
				pKey_->position_set(CContactKey::Position_Off);
				pEngine_->stop();
			}
			break;
		}
		break;
	/*
	 * CEngine
	 */
	case Qt::Key_A:	// RPM UP
		pEngine_->rpm_up(rpmStep_);
		break;
	case Qt::Key_Y:	// RPM DOWN
		pEngine_->rpm_down(rpmStep_);
		break;
	case Qt::Key_S:	// SPEED UP
		pEngine_->speed_up(speedStep_);
		break;
	case Qt::Key_X:	// SPEED DOWN
		pEngine_->speed_down(speedStep_);
		break;
	/*
	 * CGearBox
	 */
	case Qt::Key_N:	// Neutral
		pGearBox_->position_set(CGearBox::Position_Neutral);
		break;
	case Qt::Key_1:	// 1st Gear
		pGearBox_->position_set(CGearBox::Position_1_Gear);
		break;
	case Qt::Key_2:	// 2nd Gear
		pGearBox_->position_set(CGearBox::Position_2_Gear);
		break;
	case Qt::Key_3:	// 3rd Gear
		pGearBox_->position_set(CGearBox::Position_3_Gear);
		break;
	case Qt::Key_4:	// 4th Gear
		pGearBox_->position_set(CGearBox::Position_4_Gear);
		break;
	case Qt::Key_5:	// 5th Gear
		pGearBox_->position_set(CGearBox::Position_5_Gear);
		break;
	case Qt::Key_B:	// Reverse
		pGearBox_->position_set(CGearBox::Position_Reverse);
		break;
	/*
	 * CLights
	 */
	case Qt::Key_H:	// Change lights selection
		switch (pLights_->selection_get())
		{
		case CLights::Lights_Off:     pLights_->selection_set(CLights::Position_Lamps); break;
		case CLights::Position_Lamps: pLights_->selection_set(CLights::Passing_Beam); break;
		case CLights::Passing_Beam:   pLights_->selection_set(CLights::Driving_Beam); break;
		case CLights::Driving_Beam:   pLights_->selection_set(CLights::Front_Fog_Lamps); break;
		case CLights::Front_Fog_Lamps:pLights_->selection_set(CLights::Rear_Fog_Lamp); break;
		case CLights::Rear_Fog_Lamp:  pLights_->selection_set(CLights::Lights_Off); break;
		}
		break;
	default:
		// do Nothing
		break;
	}
} // keyPressEvent
