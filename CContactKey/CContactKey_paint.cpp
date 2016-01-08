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
	pPainter->setBrush(QBrush(Qt::black));
	pPainter->drawEllipse(rect());
	switch (keyPosition_) {
	case Position_Off:
		pPainter->setBrush(QBrush(Qt::gray));
		pPainter->drawRoundedRect(pPainter->window().width()/2 - LIGTH_WIDTH/2,pPainter->window().height()/4,
				      LIGTH_WIDTH, LIGTH_WEIGTH,2,LIGTH_WIDTH/2);
		break;
	case Position_Contact:
		pPainter->setBrush(QBrush(Qt::yellow));
		pPainter->drawRoundedRect(pPainter->window().width()/2 - LIGTH_WIDTH/2,pPainter->window().height()/4,
				      LIGTH_WIDTH, LIGTH_WEIGTH,2,LIGTH_WIDTH/2);
		break;
	case Position_Start:
		pPainter->setBrush(QBrush(Qt::green));
		pPainter->drawRoundedRect(pPainter->window().width()/2 - LIGTH_WIDTH/2,pPainter->window().height()/4,
				      LIGTH_WIDTH, LIGTH_WEIGTH,2,LIGTH_WIDTH/2);
		break;
	default:
		break;
	}

	pPainter->setPen(Qt::white);
	pPainter->setFont(QFont("Arial", 10));

	pPainter->drawText(rect(), Qt::AlignBottom + Qt::AlignHCenter, QString("Engine\nStart\nStop"));

}


