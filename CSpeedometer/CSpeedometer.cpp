/**
 * @brief Constructor/destructor functions definition
 * @file CSpeedometer.cpp
 * @author gregory.medwed@heig-vd.ch
 * @date December 2015
 */


#include "CSpeedometer.h"


/**
 * Constructor
 * @param parent OUT default 0
 */
CSpeedometer::CSpeedometer(QWidget* parent)
	: QWidget(parent)
{
	speed_ = 0;
	size_ = QSize(CSPEEDOMETER_DEFAULT_WIDTH, CSPEEDOMETER_DEFAULT_HEIGHT);
    addItems();
}


/**
 * Constructor
 * @param size IN
 * @param parent OUT default 0
 */
CSpeedometer::CSpeedometer(QSize size, QWidget* parent)
	: QWidget(parent)
{
	speed_ = 0;
	size_ = size;
    addItems();
}


/**
 * Destructor
 */
CSpeedometer::~CSpeedometer(void)
{

}

void CSpeedometer::addItems()
{
    QColor itemsColor(200,200,200);

    QcBackgroundItem* background=new QcBackgroundItem(this);
    background->clearrColors();
    background->setPosition(99);
    background->addColor(0,QColor(22,22,22));
    mItems.append(background);

    QcValuesItem * values = new QcValuesItem(this);
    values->setPosition(70);
    mItems.append(values);
    values->setStep(20);
    values->setColor(itemsColor);
    values->setValueRange(0,240);

    QcDegreesItem* subDegrees=new QcDegreesItem(this);
    subDegrees->setStep(5);
    subDegrees->setValueRange(0,240);
    subDegrees->setSubDegree(true);
    subDegrees->setPosition(100);
    subDegrees->setColor(itemsColor);
    mItems.append(subDegrees);

    QcDegreesItem* degrees=new QcDegreesItem(this);
    degrees->setStep(10);
    degrees->setValueRange(0,240);
    degrees->setPosition(100);
    degrees->setColor(itemsColor);
    mItems.append(degrees);

    _needle=new QcNeedleItem(this);
    _needle->setPosition(90);
    _needle->setColor(QColor(199,10,0));
    _needle->setNeedle(QcNeedleItem::TriangleNeedle);
    _needle->setValueRange(0,240);
    mItems.append(_needle);

    QcBackgroundItem* background2=new QcBackgroundItem(this);
    background2->clearrColors();
    background2->setPosition(10);
    background2->addColor(0,QColor(80,80,80));
    mItems.append(background2);

    QcLabelItem* label=new QcLabelItem(this);
    label->setText("km/h");
    label->setColor(itemsColor);
    label->setPosition(70);
    mItems.append(label);

    _speedLabel=new QcLabelItem(this);
    _speedLabel->setText("0");
    _speedLabel->setColor(itemsColor);
    _speedLabel->setPosition(40);
    mItems.append(_speedLabel);
}
