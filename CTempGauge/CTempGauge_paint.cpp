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

    if(temp_ > 60){
        if(temp_ < 90){
            pPainter->setBrush(QBrush(QColor::fromRgbF(((temp_-60)/30.),1, 0, 1)));
        }
        else{
            pPainter->setBrush(QBrush(QColor::fromRgbF(1,1-((temp_-90)/30.), 0, 1)));
        }
        pPainter->drawPie(rect(), 150*16, -(temp_-60)*16*2);
    }
    pPainter->setBrush(QBrush(Qt::white));
    pPainter->drawPie(rect(), 30*16, 3*16);
    pPainter->drawPie(rect(), 90*16, 3*16);
    pPainter->drawPie(rect(), 150*16, 3*16);


    pPainter->setPen(Qt::white);
    pPainter->setFont(QFont("Arial", 18));
    pPainter->drawText(rect(), Qt::AlignBottom, QString("%1").arg((int)temp_) + "°");

}


