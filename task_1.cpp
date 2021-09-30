//
// Created by Alyona on 19.09.2021.
//

#include "task_1.h"
template<typename Numeric, typename Generator = std::mt19937>
Numeric random(Numeric from, Numeric to)
{
    thread_local static Generator gen(std::random_device{}());

    using dist_type = typename std::conditional
            <
                    std::is_integral<Numeric>::value
                    , std::uniform_int_distribution<Numeric>
                    , std::uniform_real_distribution<Numeric>
            >::type;

    thread_local static dist_type dist;

    return dist(gen, typename dist_type::param_type{from, to});
}


///
TemperatureMonitoringFahrenheit::TemperatureMonitoringFahrenheit() = default;

TemperatureMonitoringFahrenheit::~TemperatureMonitoringFahrenheit() = default;

double TemperatureMonitoringFahrenheit::getMeasurementSensor() {
    measurement = random<double>(64.0, 84.0) ;
    return measurement;
}

TemperatureMonitoringSystem::TemperatureMonitoringSystem() = default;

TemperatureMonitoringSystem::~TemperatureMonitoringSystem() = default;

void TemperatureMonitoringSystem::printMeasurementSensor(TemperatureMonitoringFahrenheit *tmf) {
    tmf->getMeasurementSens//
// Created by Alyona on 19.09.2021.
//

#include "task_1.h"
template<typename Numeric, typename Generator = std::mt19937>
Numeric random(Numeric from, Numeric to)
{
    thread_local static Generator gen(std::random_device{}());

    using dist_type = typename std::conditional
            <
                    std::is_integral<Numeric>::value
                    , std::uniform_int_distribution<Numeric>
                    , std::uniform_real_distribution<Numeric>
            >::type;

    thread_local static dist_type dist;

    return dist(gen, typename dist_type::param_type{from, to});
}


///
TemperatureMonitoringFahrenheit::TemperatureMonitoringFahrenheit() = default;

TemperatureMonitoringFahrenheit::~TemperatureMonitoringFahrenheit() = default;

double TemperatureMonitoringFahrenheit::getMeasurementSensor() {
    measurement = random<double>(64.0, 84.0) ;
    return measurement;
}

TemperatureMonitoringSystem::TemperatureMonitoringSystem() = default;

TemperatureMonitoringSystem::~TemperatureMonitoringSystem() = default;

void TemperatureMonitoringSystem::printMeasurementSensor(TemperatureMonitoringFahrenheit *tmf) {
    tmf->getMeasurementSensor();
    std::cout << "Temperature: "<< tmf->measurement << std::endl;
}

FahrenheitToCelsius::FahrenheitToCelsius() = default;

FahrenheitToCelsius::~FahrenheitToCelsius() = default;

double FahrenheitToCelsius::temperatureConversion(double &temperature) {
    double temp = temperature;
    temperature = (temperature - 32) / 1.8 ;
    std::cout << "Conversion:" << temp << "[F] to " << temperature << "[C]" << std::endl;
    return 0;

}

AdapterMonitorng::AdapterMonitorng(FahrenheitToCelsius *fc):
    fahrenheitToCelsius{fc}
{

}

double AdapterMonitorng::getMeasurementSensor() {
    TemperatureMonitoringFahrenheit::getMeasurementSensor();
    return fahrenheitToCelsius->temperatureConversion(TemperatureMonitoringFahrenheit::measurement);
}



