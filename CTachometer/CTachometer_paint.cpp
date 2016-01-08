/**
 * @brief Paint functions definition
 * @file CTachometer_paint.cpp
 * @author gregory.medwed@heig-vd.ch
 * @date December 2015
 */

#include "CTachometer.h"


/**
 * Draw Widget
 * @param pPainter OUT
 * @param pEvent IN
 */
void CTachometer::paint(QPainter* pPainter, QPaintEvent* pEvent)
{
	pPainter->fillRect(rect(), QBrush(Qt::black));
	pPainter->setPen(Qt::white);
	pPainter->setFont(QFont("Arial", 50));
	pPainter->drawText(140,100, QString("%1").arg((int)rpm_/1000));
	pPainter->setFont(QFont("Arial", 15));
	pPainter->drawText(120,120, QString("x 1000"));

	pPainter->setFont(QFont("Arial", 20));
	pPainter->drawText(80,180, QString("%1").arg((int)rpm_));
	pPainter->setFont(QFont("Arial", 15));
	pPainter->drawText(140,180, QString("RPM"));



	pPainter->fillRect(3,3,100,20,Qt::black);
	pPainter->fillRect(3,25,85,20,Qt::black);
	pPainter->fillRect(3,47,65,20,Qt::black);
	pPainter->fillRect(3,69,45,20,Qt::black);
	pPainter->fillRect(3,91,35,20,Qt::black);
	pPainter->fillRect(3,113,30,20,Qt::black);
	pPainter->fillRect(3,135,25,20,Qt::black);
	pPainter->fillRect(3,157,20,20,Qt::black);
	pPainter->fillRect(3,179,20,20,Qt::black);


	if(rpm_ > 0)
		pPainter->fillRect(3,179,20,20,Qt::cyan);
	if(rpm_ >= 1000)
		pPainter->fillRect(3,157,20,20,Qt::cyan);
	if(rpm_ >= 2000)
		pPainter->fillRect(3,135,25,20,Qt::cyan);
	if(rpm_ >= 3000)
		pPainter->fillRect(3,113,30,20,Qt::cyan);
	if(rpm_ >= 4000)
		pPainter->fillRect(3,91,35,20,Qt::cyan);
	if(rpm_ >= 5000)
		pPainter->fillRect(3,69,45,20,Qt::cyan);
	if(rpm_ >= 6000)
		pPainter->fillRect(3,47,65,20,Qt::yellow);
	if(rpm_ >= 7000)
		pPainter->fillRect(3,25,85,20,Qt::yellow);
	if(rpm_ >= 8000)
		pPainter->fillRect(3,3,100,20,Qt::red);


}


