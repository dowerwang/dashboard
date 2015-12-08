/**
 * @brief Class header file
 * @file CIndicators.h
 * @author gregory.medwed@heig-vd.ch
 * @date December 2015
 */
#ifndef _CINDICATORS_
#define _CINDICATORS_


#include <QWidget>
#include <QLabel>
#include <QDebug>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QPainter>
#include <QTimer>


#define CINDICATORS_DEFAULT_WIDTH	(50) /** [pixel] */
#define CINDICATORS_DEFAULT_HEIGHT	(50) /** [pixel] */

/**
 * Indicators Class
 */
class CIndicators : public QWidget
{
	Q_OBJECT
public:
	/*
	 * PUBLIC Objects
	 */
	typedef enum _IndicatorsState
	{
		Blink_Off = 0,
		Blink_Left,
		Blink_Right,
		Blink_Both	/** Warning */
	} EIndicatorsState;

	QLabel* pLeft;
	QLabel* pRight;

	/*
	 * PUBLIC Functions
	 */
	CIndicators(QWidget* parent = 0);
	CIndicators(QSize size, QWidget* parent = 0);
	~CIndicators(void);

	CIndicators::EIndicatorsState state_get(void) const;

public slots:
	void state_set(EIndicatorsState pos);

private slots:
	void blink(void);

protected:
	void paintEvent(QPaintEvent* pEvent);
	void resizeEvent(QResizeEvent* pEvent);

private:
	EIndicatorsState state_;
	QSize size_;
	QPixmap* pPixLeft_;
	QPixmap* pPixRight_;
	QTimer* pBlinkTimer_;
	bool isBright_;


	void paint(QPainter* pPainter, QPaintEvent* pEvent);

}; // CIndicators


#endif // _CINDICATORS_
