/**
 * @brief Paint functions definition
 * @file CFuelGauge_paint.cpp
 * @author gregory.medwed@heig-vd.ch
 * @date December 2015
 */

#include "CFuelGauge.h"


/**
 * Draw Widget
 * @param pPainter OUT
 * @param pEvent IN
 */
void CFuelGauge::paint(QPainter* pPainter, QPaintEvent* pEvent)
{
	pPainter->fillRect(rect(), QBrush(Qt::black));
	pPainter->fillRect(rect(), QBrush(Qt::black));
	pPainter->setPen(Qt::yellow);
	pPainter->setFont(QFont("courrier", 40));
	pPainter->drawText(rect(), Qt::AlignCenter, QString("%1").arg((int)fuelLevel_));





}

