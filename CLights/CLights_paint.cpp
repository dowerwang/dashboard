/**
 * @brief Paint functions definition
 * @file CLights_paint.cpp
 * @author gregory.medwed@heig-vd.ch
 * @date December 2015
 */

#include "CLights.h"


/**
 * Draw Widget
 * @param pPainter OUT
 * @param pEvent IN
 */
void CLights::paint(QPainter* pPainter, QPaintEvent* pEvent)
{
	pPainter->fillRect(rect(), QBrush(Qt::white));
	pPainter->setPen(Qt::black);
	pPainter->setFont(QFont("Arial", 30));
	pPainter->drawText(rect(), Qt::AlignCenter, QString("%1").arg((int)selection_));

}


