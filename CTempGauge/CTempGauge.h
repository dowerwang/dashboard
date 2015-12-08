/**
 * @brief Class header file
 * @file CTempGauge.h
 * @author gregory.medwed@heig-vd.ch
 * @date December 2015
 */
#ifndef _CTEMP_GAUGE_
#define _CTEMP_GAUGE_


#include <QWidget>
#include <QLabel>
#include <QDebug>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QMoveEvent>
#include <QPainter>
#include <QTimer>


#define CTEMP_GAUGE_DEFAULT_WIDTH	(100) /** [pixel] */
#define CTEMP_GAUGE_DEFAULT_HEIGHT	(100) /** [pixel] */


/**
 * Temperature Gauge Class
 */
class CTempGauge : public QWidget
{
	Q_OBJECT
public:
	CTempGauge(QWidget* parent = 0);
	CTempGauge(QSize size, QWidget* parent = 0);
	~CTempGauge(void);

public slots:
	void temp_set(int value);

protected:
	void paintEvent(QPaintEvent* pEvent);
	void resizeEvent(QResizeEvent* pEvent);
	void moveEvent(QMoveEvent* pEvent);

private:
	int temp_;
	QSize size_;

	void paint(QPainter* pPainter, QPaintEvent* pEvent);

}; // CTempGauge


#endif // _CTEMP_GAUGE_
