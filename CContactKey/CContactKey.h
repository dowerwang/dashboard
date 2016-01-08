/**
 * @brief Class header file
 * @file CContactKey.h
 * @author gregory.medwed@heig-vd.ch
 * @date December 2015
 */
#ifndef _CCONTACT_KEY_
#define _CCONTACT_KEY_


#include <QWidget>
#include <QLabel>
#include <QDebug>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QMoveEvent>
#include <QPainter>
#include <QTimer>


#define CCONTACT_KEY_DEFAULT_WIDTH	(100) /** [pixel] */
#define CCONTACT_KEY_DEFAULT_HEIGHT	(100) /** [pixel] */


/**
 * Contact Key Class
 */
class CContactKey : public QWidget
{
	Q_OBJECT
public:
	/*
	 * PUBLIC Objects
	 */
	typedef enum _KeyPosition
	{
		Position_Off = 0,	/** Battery disconnected */
		Position_Contact,	/** Battery connected */
		Position_Start		/** Start engine */
	} EKeyPosition;

	/*
	 * PUBLIC Functions
	 */
	CContactKey(QWidget* parent = 0);
	CContactKey(QSize size, QWidget* parent = 0);
	~CContactKey(void);

	CContactKey::EKeyPosition position_get(void) const;

public slots:
	void position_set(EKeyPosition pos);

private slots:
	void start_pos_reset(void);

signals:
	void contact_key_update(EKeyPosition);

protected:
	void paintEvent(QPaintEvent* pEvent);
	void resizeEvent(QResizeEvent* pEvent);
	void moveEvent(QMoveEvent* pEvent);

private:
	EKeyPosition keyPosition_;
	QSize size_;
	QTimer* pStartTimer_;

	void paint(QPainter* pPainter, QPaintEvent* pEvent);

	const int LIGTH_WIDTH = 30;
	const int LIGTH_WEIGTH = 10;


}; // CContactKey


#endif // _CCONTACT_KEY_
