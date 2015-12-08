/**
 * @brief Constructor/destructor functions definition
 * @file CGearBox.cpp
 * @author gregory.medwed@heig-vd.ch
 * @date December 2015
 */


#include "CGearBox.h"


/**
 * Constructor
 * @param parent OUT default 0
 */
CGearBox::CGearBox(QWidget* parent)
	: QWidget(parent)
{
	position_ = Position_Neutral;
	size_ = QSize(CGEAR_BOX_DEFAULT_WIDTH, CGEAR_BOX_DEFAULT_HEIGHT);
}


/**
 * Constructor
 * @param size IN
 * @param parent OUT default 0
 */
CGearBox::CGearBox(QSize size, QWidget* parent)
	: QWidget(parent)
{
	position_ = Position_Neutral;
	size_ = size;
}


/**
 * Destructor
 */
CGearBox::~CGearBox(void)
{

}


