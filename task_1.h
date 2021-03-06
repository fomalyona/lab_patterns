
#pragma once
#include <iostream>
#include <random>
/// Adapter pattern
/// Адаптер обеспечивает совместную работу классов с несовместимыми
/// интерфейсами, которая без него была бы невозможна.

class TemperatureMonitoringFahrenheit {
public:
    TemperatureMonitoringFahrenheit();
    ~TemperatureMonitoringFahrenheit();
    double measurement{0};

    virtual double getMeasurementSensor();
private:
};

class TemperatureMonitoringSystem {
public:
    TemperatureMonitoringSystem();
    ~TemperatureMonitoringSystem();
    virtual void printMeasurementSensor(TemperatureMonitoringFahrenheit *tmf);
};

class FahrenheitToCelsius{
public:
    FahrenheitToCelsius();
    ~FahrenheitToCelsius();
    double temperatureConversion(double &temperature);
};


class AdapterMonitorng : public TemperatureMonitoringFahrenheit
{
private:
    FahrenheitToCelsius *fahrenheitToCelsius;
public:
    ~AdapterMonitorng()
    {
        delete fahrenheitToCelsius;
    }
    explicit AdapterMonitorng(FahrenheitToCelsius *fc);
    double getMeasurementSensor() override;
};


                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
#pragma once
#include <iostream>
#include <random>
/// Adapter pattern
/// Адаптер обеспечивает совместную работу классов с несовместимыми
/// интерфейсами, которая без него была бы невозможна.

class TemperatureMonitoringFahrenheit {
public:
    TemperatureMonitoringFahrenheit();
    ~TemperatureMonitoringFahrenheit();
    double measurement{0};

    virtual double getMeasurementSensor();
private:
};

class TemperatureMonitoringSystem {
public:
    TemperatureMonitoringSystem();
    ~TemperatureMonitoringSystem();
    virtual void printMeasurementSensor(TemperatureMonitoringFahrenheit *tmf);
};

class FahrenheitToCelsius{
public:
    FahrenheitToCelsius();
    ~FahrenheitToCelsius();
    double temperatureConversion(double &temperature);
};


class AdapterMonitorng : public TemperatureMonitoringFahrenheit
{
private:
    FahrenheitToCelsius *fahrenheitToCelsius;
public:
    ~AdapterMonitorng()
    {
        delete fahrenheitToCelsius;
    }
    explicit AdapterMonitorng(FahrenheitToCelsius *fc);
    double getMeasurementSensor() override;
};


