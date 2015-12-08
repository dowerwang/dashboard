/**
 * @brief Events functions definition
 * @file CTachometer_event.cpp
 * @author gregory.medwed@heig-vd.ch
 * @date December 2015
 */

#include "CTachometer.h"


/**
 * Paint Event
 * @param pEvent IN
 */
void CTachometer::paintEvent(QPaintEvent* pEvent)
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
void CTachometer::resizeEvent(QResizeEvent* pEvent)
{
	resize(size_);
}


/**
 * Move Event
 * @param pEvent IN
 */
void CTachometer::moveEvent(QMoveEvent* pEvent)
{
	move(pEvent->pos());
}

