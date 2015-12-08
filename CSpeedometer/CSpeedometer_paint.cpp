/**
 * @brief Paint functions definition
 * @file CSpeedometer_paint.cpp
 * @author gregory.medwed@heig-vd.ch
 * @date December 2015
 */

#include "CSpeedometer.h"


/**
 * Draw Widget
 * @param pPainter OUT
 * @param pEvent IN
 */
void CSpeedometer::paint(QPainter* pPainter, QPaintEvent* pEvent)
{
	pPainter->fillRect(rect(), QBrush(Qt::black));
	pPainter->setPen(Qt::white);
	pPainter->setFont(QFont("Arial", 30));
	pPainter->drawText(rect(), Qt::AlignCenter, QString("%1").arg((int)speed_));
}


