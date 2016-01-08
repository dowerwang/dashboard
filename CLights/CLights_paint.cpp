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

    /* Draw parameters for the Position Light (small symboles) */
    QRectF PosLight1_rectangle(10.0, 35.0, 40.0, 30.0);
    QRectF PosLight2_rectangle(55.0, 35.0, 40.0, 30.0);
    int PosLight1_startAngle = -90 * 16;
    int PosLight2_startAngle = 90 * 16;
    int PosLight_spanAngle = 180 * 16;

    //parameters for vertical lines used in the fog lights
    QLineF vertical(30.0, 90.0, 30.0, 10.0);
    QLineF vertical2(70.0,90.0,70.0,10.0);

    //small front and back light lines
    QLineF line1(10.0, 40.0, 20.0, 40.0);
    QLineF line2(10.0, 50.0, 20.0, 50.0);
    QLineF line3(10.0, 60.0, 20.0, 60.0);

    QLineF line4(80.0, 40.0, 90.0, 40.0);
    QLineF line5(80.0, 50.0, 90.0, 50.0);
    QLineF line6(80.0, 60.0, 90.0, 60.0);

    //straight front lines
    QLineF light1(10.0,30.0,40.0,30.0);
    QLineF light2(10.0,40.0,40.0,40.0);
    QLineF light3(10.0,50.0,40.0,50.0);
    QLineF light4(10.0,60.0,40.0,60.0);
    QLineF light5(10.0,70.0,40.0,70.0);

    //passing light lines, slightly downward
    QLineF pass1(10.0,35.0,40.0,30.0);
    QLineF pass2(10.0,45.0,40.0,40.0);
    QLineF pass3(10.0,55.0,40.0,50.0);
    QLineF pass4(10.0,65.0,40.0,60.0);
    QLineF pass5(10.0,75.0,40.0,70.0);

    //straight back lights
    QLineF back1(60.0,30.0,90.0,30.0);
    QLineF back2(60.0,40.0,90.0,40.0);
    QLineF back3(60.0,50.0,90.0,50.0);
    QLineF back4(60.0,60.0,90.0,60.0);
    QLineF back5(60.0,70.0,90.0,70.0);

    QRectF rectangle(10.0, 20.0, 80.0, 60.0);
    int startAngle = -90*16;
    int spanAngle = 180*16;

    pPainter->fillRect(rect(), QBrush(Qt::black));
    pPainter->setPen(Qt::green);
    switch (selection_)
    {
    case CLights::Lights_Off:
         break;
    case CLights::Position_Lamps:
        pPainter->drawPie(PosLight1_rectangle, PosLight1_startAngle, PosLight_spanAngle);
        pPainter->drawPie(PosLight2_rectangle, PosLight2_startAngle, PosLight_spanAngle);
        pPainter->drawLine(line1);
        pPainter->drawLine(line2);
        pPainter->drawLine(line3);
        pPainter->drawLine(line4);
        pPainter->drawLine(line5);
        pPainter->drawLine(line6);
        break;
    case CLights::Passing_Beam:
        pPainter->drawPie(rectangle, startAngle, spanAngle);
        pPainter->drawLine(pass1);
        pPainter->drawLine(pass2);
        pPainter->drawLine(pass3);
        pPainter->drawLine(pass4);
        pPainter->drawLine(pass5);
        break;
    case CLights::Driving_Beam:
        pPainter->setPen(Qt::cyan);
        pPainter->drawPie(rectangle, startAngle, spanAngle);
        pPainter->drawLine(light1);
        pPainter->drawLine(light2);
        pPainter->drawLine(light3);
        pPainter->drawLine(light4);
        pPainter->drawLine(light5);
        break;
    case CLights::Front_Fog_Lamps:
        pPainter->drawLine(vertical);
        pPainter->drawPie(rectangle, startAngle, spanAngle);
        pPainter->drawLine(light1);
        pPainter->drawLine(light2);
        pPainter->drawLine(light3);
        pPainter->drawLine(light4);
        pPainter->drawLine(light5);
        break;
    case CLights::Rear_Fog_Lamp:
        pPainter->setPen(Qt::yellow);
        pPainter->drawPie(rectangle, 90*16, spanAngle);
        pPainter->drawLine(vertical2);
        pPainter->drawLine(back1);
        pPainter->drawLine(back2);
        pPainter->drawLine(back3);
        pPainter->drawLine(back4);
        pPainter->drawLine(back5);
        break;
    }

    //pPainter->drawText(rect(), Qt::AlignCenter, QString("%1").arg((int)selection_));

}


