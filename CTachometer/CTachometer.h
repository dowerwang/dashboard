/**
 * @brief Class header file
 * @file CTachometer.h
 * @author gregory.medwed@heig-vd.ch
 * @date December 2015
 */
#ifndef _CTACHOMETER_
#define _CTACHOMETER_


#include <QWidget>
#include <QLabel>
#include <QDebug>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QMoveEvent>
#include <QPainter>
#include <QTimer>


#define CTACHOMETER_DEFAULT_WIDTH	(200) /** [pixel] */
#define CTACHOMETER_DEFAULT_HEIGHT	(200) /** [pixel] */


/**
 * Tachometer [rpm] Class
 */
class CTachometer : public QWidget
{
	Q_OBJECT
public:
	CTachometer(QWidget* parent = 0);
	CTachometer(QSize size, QWidget* parent = 0);
	~CTachometer(void);

public slots:
	void rpm_set(int value);

protected:
	void paintEvent(QPaintEvent* pEvent);
	void resizeEvent(QResizeEvent* pEvent);
	void moveEvent(QMoveEvent* pEvent);

private:
	int rpm_;
	QSize size_;

	void paint(QPainter* pPainter, QPaintEvent* pEvent);

}; // CTachometer


#endif // _CTACHOMETER_
