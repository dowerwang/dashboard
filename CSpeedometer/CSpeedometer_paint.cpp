/**
 * @brief Paint functions definition
 * @file CSpeedometer_paint.cpp
 * @author gregory.medwed@heig-vd.ch
 * @date December 2015
 */

#include "CSpeedometer.h"


/**
 * Draw Widget
 * @param pPainter OUT
 * @param pEvent IN
 */
void CSpeedometer::paint(QPainter* pPainter, QPaintEvent* pEvent)
{
    _speedLabel->setText(QString::number(speed_));
    _needle->setCurrentValue(speed_);
    foreach (QcItem * item, mItems) {
            item->draw(pPainter);
        }
}


