#include "task_4.h"

CarFactorySingleton* CarFactorySingleton::_instance = nullptr;

CarFactorySingleton *CarFactorySingleton::getInstance(const std::string& value) {
    if (_instance == nullptr) {
        CarFactory *_car;
        if (value == "Ford"){
            _car= new FordFactory();
            _instance = new CarFactorySingleton(_car);
        } else if (value == "Audi"){
            _car = new AudiFactory();
            _instance = new CarFactorySingleton(_car);
        } else {
            _instance = new CarFactorySingleton();
        }
        return _instance;
    } else{
        return nullptr;
    }

}

CarFactorySingleton::CarFactorySingleton(CarFactory *car_factory) {
    abstractCar = car_factory->CreateCar();
    abstractEngine = car_factory->CreateEngine();
    abstractCarBody = car_factory->CreateCarBody();
}

int CarFactorySingleton::RunMaxSpeed()
{
    return abstractCar->MaxSpeed(abstractEngine);
}

std::string CarFactorySingleton::ToString()
{
    return abstractCar->ToString();
}

std::string CarFactorySingleton::GetCarBody() {
    return abstractCar->GetCarBody(abstractCarBody);
}

CarFactorySingleton::~CarFactorySingleton() {
        delete abstractCar;
        delete abstractEngine;
        delete abstractCarBody;
        delete _instance;
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      #include "task_4.h"

CarFactorySingleton* CarFactorySingleton::_instance = nullptr;

CarFactorySingleton *CarFactorySingleton::getInstance(const std::string& value) {
    if (_instance == nullptr) {
        CarFactory *_car;
        if (value == "Ford"){
            _car= new FordFactory();
            _instance = new CarFactorySingleton(_car);
        } else if (value == "Audi"){
            _car = new AudiFactory();
            _instance = new CarFactorySingleton(_car);
        } else {
            _instance = new CarFactorySingleton();
        }
        return _instance;
    } else{
        return nullptr;
    }

}

CarFactorySingleton::CarFactorySingleton(CarFactory *car_factory) {
    abstractCar = car_factory->CreateCar();
    abstractEngine = car_factory->CreateEngine();
    abstractCarBody = car_factory->CreateCarBody();
}

int CarFactorySingleton::RunMaxSpeed()
{
    return abstractCar->MaxSpeed(abstractEngine);
}

std::string CarFactorySingleton::ToString()
{
    return abstractCar->ToString();
}

std::string CarFactorySingleton::GetCarBody() {
    return abstractCar->GetCarBody(abstractCarBody);
}

CarFactorySingleton::~CarFactorySingleton() {
        delete abstractCar;
        delete abstractEngine;
        delete abstractCarBody;
        delete _instance;
}
