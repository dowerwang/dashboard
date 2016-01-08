/**
 * @brief Events functions definition
 * @file CGearBox_event.cpp
 * @author antony.caldeira@master.hes-so.ch, gregory.medwed@heig-vd.ch
 * @date December 2015
 */

#include "CGearBox.h"


/**
 * Paint Event
 * @param pEvent IN
 */
void CGearBox::paintEvent(QPaintEvent* pEvent)
{
    QPainter painter;
    painter.begin(this);
    painter.setRenderHint(QPainter::Antialiasing);
    paint(&painter, pEvent);
    painter.end();
}


/**
 * Resize Event
 * @param pEvent IN
 */
void CGearBox::resizeEvent(QResizeEvent* pEvent)
{
    resize(size_);
}


/**
 * Move Event
 * @param pEvent IN
 */
void CGearBox::moveEvent(QMoveEvent* pEvent)
{
    move(pEvent->pos());
}

void CGearBox::mousePressEvent(QMouseEvent* pEvent)
{

    if (pEvent->button() == Qt::LeftButton){
        qDebug() << "[CGearBox]: Mouse Press Left Button event access";
        if(pEvent->pos().y()<CGEAR_BOX_DEFAULT_HEIGHT/2){
             qDebug() << "[CGearBox]: Gear Position increase ";
            switch (this->position_) {
            case Position_Reverse:
                position_set(Position_Neutral);
                break;

            case Position_Neutral:
                position_set(Position_1_Gear);
                break;

            case Position_1_Gear:
                position_set(Position_2_Gear);
                break;

            case Position_2_Gear:
                position_set(Position_3_Gear);
                break;

            case Position_3_Gear:
                position_set(Position_4_Gear);
                break;

            case Position_4_Gear:
                position_set(Position_5_Gear);
                break;

            case Position_5_Gear:
                position_set(Position_5_Gear);

                break;
            default:
                break;
            }
        }

        if(pEvent->pos().y()>CGEAR_BOX_DEFAULT_HEIGHT/2){
            qDebug() << "[CGearBox]: Gear Position decrease ";
            switch (this->position_) {
            case Position_Reverse:
                position_set(Position_Reverse);
                break;

            case Position_Neutral:
                position_set(Position_Reverse);
                break;

            case Position_1_Gear:
                position_set(Position_Neutral);
                break;

            case Position_2_Gear:
                position_set(Position_1_Gear);
                break;

            case Position_3_Gear:
                position_set(Position_2_Gear);
                break;

            case Position_4_Gear:
                position_set(Position_3_Gear);
                break;

            case Position_5_Gear:
                position_set(Position_4_Gear);

                break;
            default:
                break;
            }
        }
    }

}
