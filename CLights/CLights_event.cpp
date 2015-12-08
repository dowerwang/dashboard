/**
 * @brief Events functions definition
 * @file CLights_event.cpp
 * @author gregory.medwed@heig-vd.ch
 * @date December 2015
 */

#include "CLights.h"


/**
 * Paint Event
 * @param pEvent IN
 */
void CLights::paintEvent(QPaintEvent* pEvent)
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
void CLights::resizeEvent(QResizeEvent* pEvent)
{
	resize(size_);
}


/**
 * Move Event
 * @param pEvent IN
 */
void CLights::moveEvent(QMoveEvent* pEvent)
{
	move(pEvent->pos());
}

