/**
 * @brief Paint functions definition
 * @file CTachometer_paint.cpp
 * @author gregory.medwed@heig-vd.ch
 * @date December 2015
 */

#include "CTachometer.h"


/**
 * Draw Widget
 * @param pPainter OUT
 * @param pEvent IN
 */
void CTachometer::paint(QPainter* pPainter, QPaintEvent* pEvent)
{
	pPainter->fillRect(rect(), QBrush(Qt::magenta));
	pPainter->setPen(Qt::white);
	pPainter->setFont(QFont("Arial", 30));
	pPainter->drawText(rect(), Qt::AlignCenter, QString("%1").arg((int)rpm_));

}


