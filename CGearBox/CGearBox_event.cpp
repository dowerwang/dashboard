/**
 * @brief Events functions definition
 * @file CGearBox_event.cpp
 * @author gregory.medwed@heig-vd.ch
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

