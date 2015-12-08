/**
 * @brief Paint functions definition
 * @file CTempGauge_paint.cpp
 * @author gregory.medwed@heig-vd.ch
 * @date December 2015
 */

#include "CTempGauge.h"


/**
 * Draw Widget
 * @param pPainter OUT
 * @param pEvent IN
 */
void CTempGauge::paint(QPainter* pPainter, QPaintEvent* pEvent)
{
	pPainter->fillRect(rect(), QBrush(Qt::red));
	pPainter->setPen(Qt::white);
	pPainter->setFont(QFont("Arial", 30));
	pPainter->drawText(rect(), Qt::AlignCenter, QString("%1").arg((int)temp_));

}


