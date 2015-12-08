/**
 * @brief Events functions definition
 * @file CSpeedometer_event.cpp
 * @author gregory.medwed@heig-vd.ch
 * @date December 2015
 */

#include "CSpeedometer.h"


/**
 * Paint Event
 * @param pEvent IN
 */
void CSpeedometer::paintEvent(QPaintEvent* pEvent)
{
	QPainter painter;
	painter.begin(this);
	painter.setRenderHint(QPainter::Antialiasing);
	paint(&painter, pEvent);
	painter.end();
}


/**
 * Resize Event
 * @param pEvent IN
 */
void CSpeedometer::resizeEvent(QResizeEvent* pEvent)
{
	resize(size_);
}


/**
 * Move Event
 * @param pEvent IN
 */
void CSpeedometer::moveEvent(QMoveEvent* pEvent)
{
	move(pEvent->pos());
}

