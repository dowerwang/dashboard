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
    qDebug() << "[CGearBox]: click" << (int)pEvent->button();
    qDebug() << "[CGearBox]: position y " << (int)pEvent->pos().y();
    if (pEvent->button() == 1){
        qDebug() << "[CGearBox]: Event access";
        if(pEvent->pos().y()<CGEAR_BOX_DEFAULT_HEIGHT/2){
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
            qDebug() << "[CGearBox]: position move to " << this->position_;
        }

        if(pEvent->pos().y()>CGEAR_BOX_DEFAULT_HEIGHT/2){
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
            qDebug() << "[CGearBox]: position move to " << this->position_;
        }
    }

}
