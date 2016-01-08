/**
 * @brief Class header file
 * @file CGearBox.h
 * @author gregory.medwed@heig-vd.ch
 * @date December 2015
 */
#ifndef _CGEAR_BOX_
#define _CGEAR_BOX_


#include <QWidget>
#include <QLabel>
#include <QDebug>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QMoveEvent>
#include <QPainter>
#include <QTimer>


#define CGEAR_BOX_DEFAULT_WIDTH		(100) /** [pixel] */
#define CGEAR_BOX_DEFAULT_HEIGHT	(100) /** [pixel] */


/**
 * Gear Box Class
 */
class CGearBox : public QWidget
{
	Q_OBJECT
public:
	/*
	 * PUBLIC Objects
	 */
	typedef enum _GearPosition
	{
		Position_Neutral = 0,
		Position_1_Gear,	/** First gear */
		Position_2_Gear,	/** Second gear */
		Position_3_Gear,	/** Third gear */
		Position_4_Gear,	/** Fourth gear */
		Position_5_Gear,	/** Fifth gear */
		Position_Reverse	/** Reverse */
	} EGearPosition;

	/*
	 * PUBLIC Functions
	 */
	CGearBox(QWidget* parent = 0);
	CGearBox(QSize size, QWidget* parent = 0);
	~CGearBox(void);

	CGearBox::EGearPosition position_get(void) const;
	char position_char_get(void) const;

public slots:
	void position_set(EGearPosition pos);

signals:
	void gearBox_update(EGearPosition pos);

protected:
	void paintEvent(QPaintEvent* pEvent);
	void resizeEvent(QResizeEvent* pEvent);
	void moveEvent(QMoveEvent* pEvent);
    void mousePressEvent(QMouseEvent* pEvent);

private:
	EGearPosition position_;
	QSize size_;

	void paint(QPainter* pPainter, QPaintEvent* pEvent);

}; // CGearBox

#endif // _CGEAR_BOX_
