/**
 * @brief Events functions definition
 * @file CTempGauge_event.cpp
 * @author gregory.medwed@heig-vd.ch
 * @date December 2015
 */

#include "CTempGauge.h"


/**
 * Paint Event
 * @param pEvent IN
 */
void CTempGauge::paintEvent(QPaintEvent* pEvent)
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
void CTempGauge::resizeEvent(QResizeEvent* pEvent)
{
	resize(size_);
}


/**
 * Move Event
 * @param pEvent IN
 */
void CTempGauge::moveEvent(QMoveEvent* pEvent)
{
	move(pEvent->pos());
}

