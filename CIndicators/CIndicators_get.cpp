/**
 * @brief Get/set functions definition
 * @file CIndicators_get.cpp
 * @author gregory.medwed@heig-vd.ch
 * @date December 2015
 */

#include "CIndicators.h"


/**
 * Set indicators state
 * @param state IN
 */
void CIndicators::state_set(EIndicatorsState state)
{
	state_ = state;

	if ((state_ == Blink_Left) ||
		(state_ == Blink_Right) ||
		(state_ == Blink_Both))
		pBlinkTimer_->start(1000);

	if (state_ == Blink_Off)
	{
		pBlinkTimer_->stop();
		isBright_ = false;
		blink();
	}

}


/**
 * Get indicators state
 * @return state
 */
CIndicators::EIndicatorsState CIndicators::state_get(void) const
{
	return state_;
}


/**
 * Blink (PRIVATE SLOT)
 */
void CIndicators::blink(void)
{
	QColor color(Qt::darkGreen);

//	qDebug() << "[CIndicators]: isBright_:" << isBright_;

	if (isBright_)
		color = Qt::green;

	switch (state_)
	{
	case Blink_Left:
		pPixLeft_->fill(color);
		pLeft->setPixmap(*pPixLeft_);
		break;
	case Blink_Right:
		pPixRight_->fill(color);
		pRight->setPixmap(*pPixRight_);
		break;
	case Blink_Off:
	case Blink_Both:
		pPixLeft_->fill(color);
		pPixRight_->fill(color);
		pLeft->setPixmap(*pPixLeft_);
		pRight->setPixmap(*pPixRight_);
		break;
	default:
		break;
	}

	isBright_ = !isBright_;
} // blink
