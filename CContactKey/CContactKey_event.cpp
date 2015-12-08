/**
 * @brief Events functions definition
 * @file CContactKey_event.cpp
 * @author gregory.medwed@heig-vd.ch
 * @date December 2015
 */

#include "CContactKey.h"


/**
 * Paint Event
 * @param pEvent IN
 */
void CContactKey::paintEvent(QPaintEvent* pEvent)
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
void CContactKey::resizeEvent(QResizeEvent* pEvent)
{
	resize(size_);
}


/**
 * Move Event
 * @param pEvent IN
 */
void CContactKey::moveEvent(QMoveEvent* pEvent)
{
	move(pEvent->pos());
}

