/**
 * @brief Paint functions definition
 * @file CSpeedometer_paint.cpp
 * @author gregory.medwed@heig-vd.ch
 * @date December 2015
 */

#include "CSpeedometer.h"


/**
 * @brief Draw Widget
 * Refresh the speed label and the needle value.
 * Go through the items list and draw each of them.
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


