/**
 * @brief Paint functions definition
 * @file CGearBox_paint.cpp
 * @author antony.caldeira@master.hes-so.ch, vincent.giachino@master.hes-so.ch, gregory.medwed@heig-vd.ch
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
    pPainter->setPen(Qt::black);

    //dessine le contour du levier de vitesse
    pPainter->fillRect(QRectF(rect().width()/4,0,2*rect().width()/4,rect().height()),QBrush(Qt::lightGray));
    pPainter->drawRect(QRectF(rect().width()/4,0,2*rect().width()/4,rect().height()));
    pPainter->fillRect(QRectF(rect().width()/2-0.8*rect().width()/8,0.1*rect().height(),0.8*rect().width()/4,0.8*rect().height()),QBrush(Qt::white));
    pPainter->drawRect(QRectF(rect().width()/2-0.8*rect().width()/8,0.1*rect().height(),0.8*rect().width()/4,0.8*rect().height()));

    //dessine la base du pommeau de vitesse
    pPainter->setPen(QPen(QColor(255,0,0)));
    pPainter->drawArc(rect().width()/2-0.5*rect().width()/8,rect().height()/2-0.02*rect().width()/8,0.59*rect().width()/4,0.02*rect().width()/4,0,16*360);
    pPainter->setPen(QPen(QColor(245,0,0)));
    pPainter->drawArc(rect().width()/2-0.5*rect().width()/8,rect().height()/2-0.05*rect().width()/8,0.59*rect().width()/4,0.05*rect().width()/4,0,16*360);
    pPainter->setPen(QPen(QColor(235,0,0)));
    pPainter->drawArc(rect().width()/2-0.5*rect().width()/8,rect().height()/2-0.07*rect().width()/8,0.59*rect().width()/4,0.07*rect().width()/4,0,16*360);
    pPainter->setPen(QPen(QColor(225,0,0)));
    pPainter->drawArc(rect().width()/2-0.5*rect().width()/8,rect().height()/2-0.10*rect().width()/8,0.59*rect().width()/4,0.10*rect().width()/4,0,16*360);
    pPainter->setPen(QPen(QColor(215,0,0)));
    pPainter->drawArc(rect().width()/2-0.5*rect().width()/8,rect().height()/2-0.12*rect().width()/8,0.59*rect().width()/4,0.12*rect().width()/4,0,16*360);
    pPainter->setPen(QPen(QColor(205,0,0)));
    pPainter->drawArc(rect().width()/2-0.5*rect().width()/8,rect().height()/2-0.15*rect().width()/8,0.59*rect().width()/4,0.15*rect().width()/4,0,16*360);
    pPainter->setPen(QPen(QColor(195,0,0)));
    pPainter->drawArc(rect().width()/2-0.5*rect().width()/8,rect().height()/2-0.17*rect().width()/8,0.59*rect().width()/4,0.17*rect().width()/4,0,16*360);
    pPainter->setPen(QPen(QColor(185,0,0)));
    pPainter->drawArc(rect().width()/2-0.5*rect().width()/8,rect().height()/2-0.22*rect().width()/8,0.59*rect().width()/4,0.22*rect().width()/4,0,16*360);
    pPainter->setPen(QPen(QColor(175,0,0)));
    pPainter->drawArc(rect().width()/2-0.5*rect().width()/8,rect().height()/2-0.25*rect().width()/8,0.59*rect().width()/4,0.25*rect().width()/4,0,16*360);
    pPainter->setPen(QPen(QColor(165,0,0)));
    pPainter->drawArc(rect().width()/2-0.5*rect().width()/8,rect().height()/2-0.30*rect().width()/8,0.59*rect().width()/4,0.30*rect().width()/4,0,16*360);
    pPainter->setPen(QPen(QColor(155,0,0)));
    pPainter->drawArc(rect().width()/2-0.5*rect().width()/8,rect().height()/2-0.30*rect().width()/8,0.59*rect().width()/4,0.30*rect().width()/4,0,16*360);


    //dessine le levier de vitesse et l'indicateur
    int color_gray_max = 180; // de 0 à 255 (0=noir, 255 = blanc)
    int color_mult = 18;
    switch (this->position_) {
    case Position_Reverse:
        pPainter->fillRect(QRectF(3*rect().width()/4,6*rect().height()/7,rect().width()/4,rect().height()/7),QBrush(Qt::green));
        for (int i = 10; i > 0; --i) {
            pPainter->fillRect(QRectF(rect().width()/2-0.6*rect().width()/8,rect().height()/2,0.6*rect().width()/4.0/10.0*i,3*rect().height()/7-rect().height()/16),QBrush(QColor(155+10*i,0,0)));
        }

        for (int i = 10; i > 0; --i) {
          pPainter->fillRect(QRectF(0.75*rect().width()/4,6*rect().height()/7-rect().height()/16,rect().width()/2,rect().height()/8.0/10.0*i),QBrush(QColor(color_gray_max-i*color_mult,color_gray_max-i*color_mult,color_gray_max-i*color_mult)));
        }

        break;

    case Position_Neutral:
        pPainter->fillRect(QRectF(3*rect().width()/4,5*rect().height()/7,rect().width()/4,rect().height()/7),QBrush(Qt::green));
        for (int i = 10; i > 0; --i) {
            pPainter->fillRect(QRectF(rect().width()/2-0.6*rect().width()/8,rect().height()/2,0.6*rect().width()/4.0/10.0*i,2*rect().height()/7-rect().height()/32),QBrush(QColor(155+10*i,0,0)));
        }

        for (int i = 10; i > 0; --i) {
          pPainter->fillRect(QRectF(0.75*rect().width()/4,5*rect().height()/7-rect().height()/32,rect().width()/2,rect().height()/8.0/10.0*i),QBrush(QColor(color_gray_max-i*color_mult,color_gray_max-i*color_mult,color_gray_max-i*color_mult)));
        }


        break;

    case Position_1_Gear:
        pPainter->fillRect(QRectF(3*rect().width()/4,4*rect().height()/7,rect().width()/4,rect().height()/7),QBrush(Qt::green));
        for (int i = 10; i > 0; --i) {
            pPainter->fillRect(QRectF(rect().width()/2-0.6*rect().width()/8,rect().height()/2,0.6*rect().width()/4.0/10.0*i,1*rect().height()/7),QBrush(QColor(155+10*i,0,0)));
        }

        for (int i = 10; i > 0; --i) {
          pPainter->fillRect(QRectF(0.75*rect().width()/4,4*rect().height()/7,rect().width()/2,rect().height()/8.0/10.0*i),QBrush(QColor(color_gray_max-i*color_mult,color_gray_max-i*color_mult,color_gray_max-i*color_mult)));
        }


        break;

    case Position_2_Gear:
        pPainter->fillRect(QRectF(3*rect().width()/4,3*rect().height()/7,rect().width()/4,rect().height()/7),QBrush(Qt::green));
        for (int i = 10; i > 0; --i) {
            pPainter->fillRect(QRectF(rect().width()/2-0.6*rect().width()/8,rect().height()/2,0.6*rect().width()/4.0/10.0*i,0*rect().height()/7),QBrush(QColor(155+10*i,0,0)));
        }

        for (int i = 10; i > 0; --i) {
          pPainter->fillRect(QRectF(0.75*rect().width()/4,3*rect().height()/7,rect().width()/2,rect().height()/8.0/10.0*i),QBrush(QColor(color_gray_max-i*color_mult,color_gray_max-i*color_mult,color_gray_max-i*color_mult)));
        }

        break;

    case Position_3_Gear:
        pPainter->fillRect(QRectF(3*rect().width()/4,2*rect().height()/7,rect().width()/4,rect().height()/7),QBrush(Qt::green));
        for (int i = 10; i > 0; --i) {
            pPainter->fillRect(QRectF(rect().width()/2-0.6*rect().width()/8,rect().height()/2,0.6*rect().width()/4.0/10.0*i,-1*rect().height()/7),QBrush(QColor(155+10*i,0,0)));
        }

        for (int i = 10; i > 0; --i) {
          pPainter->fillRect(QRectF(0.75*rect().width()/4,2*rect().height()/7,rect().width()/2,rect().height()/8.0/10.0*i),QBrush(QColor(color_gray_max-i*color_mult,color_gray_max-i*color_mult,color_gray_max-i*color_mult)));
        }

        break;

    case Position_4_Gear:
        pPainter->fillRect(QRectF(3*rect().width()/4,1*rect().height()/7,rect().width()/4,rect().height()/7),QBrush(Qt::green));
        for (int i = 10; i > 0; --i) {
            pPainter->fillRect(QRectF(rect().width()/2-0.6*rect().width()/8,rect().height()/2,0.6*rect().width()/4.0/10.0*i,-2*rect().height()/7+rect().height()/32),QBrush(QColor(155+10*i,0,0)));
        }

        for (int i = 10; i > 0; --i) {
          pPainter->fillRect(QRectF(0.75*rect().width()/4,1*rect().height()/7+rect().height()/32,rect().width()/2,rect().height()/8.0/10.0*i),QBrush(QColor(color_gray_max-i*color_mult,color_gray_max-i*color_mult,color_gray_max-i*color_mult)));
        }

        break;

    case Position_5_Gear:
        pPainter->fillRect(QRectF(3*rect().width()/4,0*rect().height()/7,rect().width()/4,rect().height()/7),QBrush(Qt::green));
        for (int i = 10; i > 0; --i) {
            pPainter->fillRect(QRectF(rect().width()/2-0.6*rect().width()/8,rect().height()/2,0.6*rect().width()/4.0/10.0*i,-3*rect().height()/7+rect().height()/16),QBrush(QColor(155+10*i,0,0)));
        }

        for (int i = 10; i > 0; --i) {
          pPainter->fillRect(QRectF(0.75*rect().width()/4,0*rect().height()/7+rect().height()/16,rect().width()/2,rect().height()/8.0/10.0*i),QBrush(QColor(color_gray_max-i*color_mult,color_gray_max-i*color_mult,color_gray_max-i*color_mult)));
        }

        break;
    default:
        break;
    }


    pPainter->setPen(Qt::black);

    //dessine le contour du texte de vitesse
    pPainter->drawRect(QRectF(3*rect().width()/4,0,rect().width()/4,rect().height()));

    //texte des vitesses
    pPainter->setFont(QFont("Comic sans ms", 11,QFont::Bold));
    pPainter->drawText(QRectF(3*rect().width()/4,6*rect().height()/7,rect().width()/4,rect().height()/7), Qt::AlignCenter, QString("R"));
    pPainter->drawText(QRectF(3*rect().width()/4,5*rect().height()/7,rect().width()/4,rect().height()/7), Qt::AlignCenter, QString("N"));
    pPainter->drawText(QRectF(3*rect().width()/4,4*rect().height()/7,rect().width()/4,rect().height()/7), Qt::AlignCenter, QString("1"));
    pPainter->drawText(QRectF(3*rect().width()/4,3*rect().height()/7,rect().width()/4,rect().height()/7), Qt::AlignCenter, QString("2"));
    pPainter->drawText(QRectF(3*rect().width()/4,2*rect().height()/7,rect().width()/4,rect().height()/7), Qt::AlignCenter, QString("3"));
    pPainter->drawText(QRectF(3*rect().width()/4,1*rect().height()/7,rect().width()/4,rect().height()/7), Qt::AlignCenter, QString("4"));
    pPainter->drawText(QRectF(3*rect().width()/4,0*rect().height()/7,rect().width()/4,rect().height()/7), Qt::AlignCenter, QString("5"));


}

