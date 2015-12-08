/**
 * @brief Class header file
 * @file CFuelGauge.h
 * @author gregory.medwed@heig-vd.ch
 * @date December 2015
 */
#ifndef _CFUEL_GAUGE_
#define _CFUEL_GAUGE_


#include <QWidget>
#include <QLabel>
#include <QDebug>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QMoveEvent>
#include <QPainter>
#include <QTimer>


#define CFUEL_GAUGE_DEFAULT_WIDTH	(100) /** [pixel] */
#define CFUEL_GAUGE_DEFAULT_HEIGHT	(100) /** [pixel] */


/**
 * Fuel Gauge Class
 */
class CFuelGauge : public QWidget
{
	Q_OBJECT
public:
	CFuelGauge(QWidget* parent = 0);
	CFuelGauge(QSize size, QWidget* parent = 0);
	~CFuelGauge(void);

public slots:
	void level_set(int level);

protected:
	void paintEvent(QPaintEvent* pEvent);
	void resizeEvent(QResizeEvent* pEvent);
	void moveEvent(QMoveEvent* pEvent);

private:
	int fuelLevel_;
	QSize size_;

	void paint(QPainter* pPainter, QPaintEvent* pEvent);

}; // CFuelGauge


#endif // _CFUEL_GAUGE_
