/**
 * @brief Class header file
 * @file CSpeedometer.h
 * @author gregory.medwed@heig-vd.ch
 * @date December 2015
 */
#ifndef _CSPEEDOMETER_
#define _CSPEEDOMETER_


#include <QWidget>
#include <QLabel>
#include <QDebug>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QMoveEvent>
#include <QPainter>
#include <QTimer>


#define CSPEEDOMETER_DEFAULT_WIDTH	(200) /** [pixel] */
#define CSPEEDOMETER_DEFAULT_HEIGHT	(200) /** [pixel] */


/**
 * Speedometer [km/h] Class
 */
class CSpeedometer : public QWidget
{
	Q_OBJECT
public:
	CSpeedometer(QWidget* parent = 0);
	CSpeedometer(QSize size, QWidget* parent = 0);
	~CSpeedometer(void);

public slots:
	void speed_set(int value);

protected:
	void paintEvent(QPaintEvent* pEvent);
	void resizeEvent(QResizeEvent* pEvent);
	void moveEvent(QMoveEvent* pEvent);

private:
	int speed_;
	QSize size_;

	void paint(QPainter* pPainter, QPaintEvent* pEvent);

}; // CSpeedometer


#endif // _CSPEEDOMETER_
