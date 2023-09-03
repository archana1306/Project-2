/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -i car_adaptor.h -a :car_adaptor.cpp ../dashboard/car.xml
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "car_adaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class CarAdaptor
 */

CarAdaptor::CarAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

CarAdaptor::~CarAdaptor()
{
    // destructor
}

double CarAdaptor::battery() const
{
    // get the value of property battery
    return qvariant_cast< double >(parent()->property("battery"));
}

double CarAdaptor::rpm() const
{
    // get the value of property rpm
    return qvariant_cast< double >(parent()->property("rpm"));
}

double CarAdaptor::speed() const
{
    // get the value of property speed
    return qvariant_cast< double >(parent()->property("speed"));
}

void CarAdaptor::canConnected()
{
    // handle method call local.Car.canConnected
    QMetaObject::invokeMethod(parent(), "canConnected");
}

void CarAdaptor::candisConnected()
{
    // handle method call local.Car.candisConnected
    QMetaObject::invokeMethod(parent(), "candisConnected");
}

double CarAdaptor::getBattery()
{
    // handle method call local.Car.getBattery
    double out0;
    QMetaObject::invokeMethod(parent(), "getBattery", Q_RETURN_ARG(double, out0));
    return out0;
}

double CarAdaptor::getRPM()
{
    // handle method call local.Car.getRPM
    double out0;
    QMetaObject::invokeMethod(parent(), "getRPM", Q_RETURN_ARG(double, out0));
    return out0;
}

double CarAdaptor::getSpeed()
{
    // handle method call local.Car.getSpeed
    double out0;
    QMetaObject::invokeMethod(parent(), "getSpeed", Q_RETURN_ARG(double, out0));
    return out0;
}

void CarAdaptor::setBattery(double battery)
{
    // handle method call local.Car.setBattery
    QMetaObject::invokeMethod(parent(), "setBattery", Q_ARG(double, battery));
}

void CarAdaptor::setRPM(double rpm)
{
    // handle method call local.Car.setRPM
    QMetaObject::invokeMethod(parent(), "setRPM", Q_ARG(double, rpm));
}

void CarAdaptor::setSpeed(double speed)
{
    // handle method call local.Car.setSpeed
    QMetaObject::invokeMethod(parent(), "setSpeed", Q_ARG(double, speed));
}
