/**
 * @brief Events functions definition
 * @file CFuelGauge_event.cpp
 * @author gregory.medwed@heig-vd.ch
 * @date December 2015
 */

#include "CFuelGauge.h"


/**
 * Paint Event
 * @param pEvent IN
 */
void CFuelGauge::paintEvent(QPaintEvent* pEvent)
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
void CFuelGauge::resizeEvent(QResizeEvent* pEvent)
{
	resize(size_);
}


/**
 * Move Event
 * @param pEvent IN
 */
void CFuelGauge::moveEvent(QMoveEvent* pEvent)
{
	move(pEvent->pos());
}

