/**
 * @brief Class header file
 * @file CLights.h
 * @author gregory.medwed@heig-vd.ch
 * @date December 2015
 */
#ifndef _CLIGHTS_
#define _CLIGHTS_


#include <QWidget>
#include <QLabel>
#include <QDebug>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QMoveEvent>
#include <QPainter>
#include <QTimer>


#define CLIGHTS_DEFAULT_WIDTH	(100) /** [pixel] */
#define CLIGHTS_DEFAULT_HEIGHT	(100) /** [pixel] */


/**
 * Lights Class
 */
class CLights : public QWidget
{
	Q_OBJECT
public:
	/*
	 * PUBLIC Objects
	 */
	typedef enum _LightsSelection
	{
		Lights_Off = 0,		/** No lights */
		Position_Lamps,	
		Passing_Beam,	
		Driving_Beam,	
		Front_Fog_Lamps,	
		Rear_Fog_Lamp,	
	} ELightsSelection;

	/*
	 * PUBLIC Functions
	 */
	CLights(QWidget* parent = 0);
	CLights(QSize size, QWidget* parent = 0);
	~CLights(void);

	CLights::ELightsSelection selection_get(void) const;

public slots:
	void selection_set(ELightsSelection sel);

signals:
	void lights_update(ELightsSelection sel);

protected:
	void paintEvent(QPaintEvent* pEvent);
	void resizeEvent(QResizeEvent* pEvent);
	void moveEvent(QMoveEvent* pEvent);

private:
	ELightsSelection selection_;
	QSize size_;

	void paint(QPainter* pPainter, QPaintEvent* pEvent);


}; // CLights


#endif // _CLIGHTS_
