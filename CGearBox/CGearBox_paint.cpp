/**
 * @brief Paint functions definition
 * @file CGearBox_paint.cpp
 * @author gregory.medwed@heig-vd.ch
 * @date December 2015
 */

#include "CGearBox.h"


/**
 * Draw Widget
 * @param pPainter OUT
 * @param pEvent IN
 */
void CGearBox::paint(QPainter* pPainter, QPaintEvent* pEvent)
{
	pPainter->fillRect(rect(), QBrush(Qt::gray));
	pPainter->setPen(Qt::black);
	pPainter->setFont(QFont("Arial", 30));
	pPainter->drawText(rect(), Qt::AlignCenter, QString("%1").arg(this->position_char_get()));

}


