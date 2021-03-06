#pragma once
#include "task_2.h"
/// Singleton Гарантирует, что у класса есть только один экземпляр, и предоставляет к нему
/// глобальную точку доступа.
/// Для некоторых классов важно, чтобы существовал только один экземпляр/ Чаще всего для этого
//прячут операцию, создающую экземпляры, за операцией класса (то есть за
//статической функцией-членом или методом класса), которая гарантирует
//создание не более одного экземпляра.

/// Abstract Factory task 2

class CarFactorySingleton {
public:
    static CarFactorySingleton* getInstance(const std::string& value);
    ~CarFactorySingleton();
    int RunMaxSpeed();
    std::string GetCarBody();
    std::string ToString();
protected:
    explicit CarFactorySingleton(CarFactory *car_factory);
    CarFactorySingleton() = default;


private:
    static CarFactorySingleton* _instance;
    AbstractCar *abstractCar;
    AbstractEngine *abstractEngine;
    AbstractCarBody *abstractCarBody;
};

                                                       #pragma once
#include "task_2.h"
/// Singleton Гарантирует, что у класса есть только один экземпляр, и предоставляет к нему
/// глобальную точку доступа.
/// Для некоторых классов важно, чтобы существовал только один экземпляр/ Чаще всего для этого
//прячут операцию, создающую экземпляры, за операцией класса (то есть за
//статической функцией-членом или методом класса), которая гарантирует
//создание не более одного экземпляра.

/// Abstract Factory task 2

class CarFactorySingleton {
public:
    static CarFactorySingleton* getInstance(const std::string& value);
    ~CarFactorySingleton();
    int RunMaxSpeed();
    std::string GetCarBody();
    std::string ToString();
protected:
    explicit CarFactorySingleton(CarFactory *car_factory);
    CarFactorySingleton() = default;


private:
    static CarFactorySingleton* _instance;
    AbstractCar *abstractCar;
    AbstractEngine *abstractEngine;
    AbstractCarBody *abstractCarBody;
};

