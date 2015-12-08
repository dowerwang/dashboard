/**
 * @brief Paint functions definition
 * @file CContactKey_paint.cpp
 * @author gregory.medwed@heig-vd.ch
 * @date December 2015
 */

#include "CContactKey.h"


/**
 * Draw Widget
 * @param pPainter OUT
 * @param pEvent IN
 */
void CContactKey::paint(QPainter* pPainter, QPaintEvent* pEvent)
{
	pPainter->fillRect(rect(), QBrush(Qt::blue));
	pPainter->setPen(Qt::white);
	pPainter->setFont(QFont("Arial", 30));
	pPainter->drawText(rect(), Qt::AlignCenter, QString("%1").arg((int)keyPosition_));

}


