/**
 * @brief Constructor/destructor functions definition
 * @file CIndicators.cpp
 * @author gregory.medwed@heig-vd.ch
 * @date December 2015
 */


#include "CIndicators.h"


/**
 * Constructor
 * @param parent OUT default 0
 */
CIndicators::CIndicators(QWidget *parent)
	: QWidget(parent)
{
	state_ = Blink_Off;
	size_ = QSize(CINDICATORS_DEFAULT_WIDTH, CINDICATORS_DEFAULT_HEIGHT);
	isBright_ = true;

	pPixLeft_ = new QPixmap(size_);
	pPixLeft_->fill(Qt::green);

	pLeft = new QLabel(parent);
	pLeft->setPixmap(*pPixLeft_);

	pPixRight_ = new QPixmap(size_);
	pPixRight_->fill(Qt::green);

	pRight = new QLabel(parent);
	pRight->setPixmap(*pPixRight_);

	pBlinkTimer_ = new QTimer(this);
	connect(pBlinkTimer_, SIGNAL(timeout(void)), this, SLOT(blink(void)));
}


/**
 * Constructor
 * @param size IN
 * @param parent OUT default 0
 */
CIndicators::CIndicators(QSize size, QWidget* parent)
	: QWidget(parent)
{
	state_ = Blink_Off;
	size_ = size;
	isBright_ = true;

	pPixLeft_ = new QPixmap(size_);
	pPixLeft_->fill(Qt::darkGreen);

	pLeft = new QLabel(parent);
	pLeft->setPixmap(*pPixLeft_);

	pPixRight_ = new QPixmap(size_);
	pPixRight_->fill(Qt::darkGreen);

	pRight = new QLabel(parent);
	pRight->setPixmap(*pPixRight_);

	pBlinkTimer_ = new QTimer(this);
	connect(pBlinkTimer_, SIGNAL(timeout(void)), this, SLOT(blink(void)));
}


/**
 * Destructor
 */
CIndicators::~CIndicators(void)
{
	delete pPixLeft_;
	delete pPixRight_;
	delete pLeft;
	delete pRight;

	pBlinkTimer_->stop();
	delete pBlinkTimer_;
}


