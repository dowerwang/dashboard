/**
 * @brief Class header file
 * @file CEngine.h
 * @author gregory.medwed@heig-vd.ch
 * @date December 2015
 */
#ifndef _CENGINE_
#define _CENGINE_


#include <QWidget>
#include <QDebug>
#include <QTimer>


/*
 * Defines
 */
#define CENGINE_TEMP_VALUE_MAX	(120)	/** [°C] */

#define CENGINE_RPM_VALUE_MIN	(0)	/** [rpm] */
#define CENGINE_RPM_VALUE_MAX	(8000)	/** [rpm] */

#define CENGINE_SPEED_VALUE_MIN	(0)	/** [km/h] */
#define CENGINE_SPEED_VALUE_MAX	(240)	/* [km/h] */



/**
 * Car Engine Class
 */
class CEngine : public QWidget
{
	Q_OBJECT
public:
	/*
	 * PUBLIC Functions
	 */
	CEngine(QWidget* parent = 0);
	~CEngine(void);

	bool is_running(void) const;

	void rpm_set(int value);
	int  rpm_get(void) const;
	void rpm_up(int step=1);
	void rpm_down(int step=1);

	void speed_set(int value);
	int  speed_get(void) const;
	void speed_up(int step=1);
	void speed_down(int step=1);

signals:
	void fuel_update(int value);
	void temp_update(int value);
	void rpm_update(int value);
	void speed_update(int value);

public slots:
	void start(void);
	void stop(void);

private slots:
	void param_update(void);

private:
	bool isRunning_;
	int temp_;	/** 60..120 [°C] */
	int fuel_;	/** 100..0 [%] */
	int speed_;	/** 0..240 [km/h] */
	int rpm_;	/** 0..8000 [rpm] */
	QTimer* pTimer_;

}; // CEngine


#endif // _CENGINE_
