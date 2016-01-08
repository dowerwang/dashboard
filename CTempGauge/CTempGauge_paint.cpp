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
    /*
    pPainter->fillRect(rect(), QBrush(Qt::red));
    */
    pPainter->fillRect(rect(), QBrush(Qt::black));
    pPainter->setBrush(QBrush(Qt::red));
    pPainter->drawPie(rect(), (30+(120 - temp_))*16, temp_*16);


    pPainter->setPen(Qt::white);
    pPainter->setFont(QFont("Arial", 18));
    pPainter->drawText(rect(), Qt::AlignBottom, QString("%1").arg((int)temp_) + "°");

}


