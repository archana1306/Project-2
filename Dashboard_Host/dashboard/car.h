#ifndef CAR_H
#define CAR_H

#include <QObject>

class Car : public QObject
{
    Q_OBJECT
    Q_PROPERTY(qreal speed READ getSpeed NOTIFY rpmChanged)
    Q_PROPERTY(qreal rpm READ getRPM NOTIFY rpmChanged)
    Q_PROPERTY(qreal battery READ getBattery NOTIFY batteryChanged)

public:
    explicit Car(QObject *parent = nullptr);

public Q_SLOTS:
    void setSpeed(qreal speed);
    void setRPM(qreal rpm);
    void setBattery(qreal battery);

    void candisConnected();
    void canConnected();

    qreal getSpeed();
    qreal getRPM();
    qreal getBattery();

signals :
    void speedChanged();
    void rpmChanged();
    void batteryChanged();
    void candisconnected();
    void canconnected();

private:
    qreal speed;
    qreal rpm;
    qreal battery;
    bool canStatus; //canstatus true is disconnection
};

#endif // CAR_H