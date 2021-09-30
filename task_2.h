#pragma once
// Abstract Factory
// Предоставляет интерфейс для создания семейств взаимосвязанных или взаимозависимых объектов,
// не специфицируя их конкретных классов.

#include <string>

class AbstractCar;
class AbstractEngine;
class AbstractCarBody;

class CarFactory
{
public:
    virtual AbstractCar *CreateCar() = 0;
    virtual AbstractEngine *CreateEngine() = 0;
    virtual AbstractCarBody *CreateCarBody() = 0;
};
class AbstractCar
{
private:
    std::string Name;

public:
    std::string getName() const;
    void setName(const std::string &value);
    virtual int MaxSpeed(AbstractEngine *engine) = 0;
    virtual std::string ToString();
    virtual std::string GetCarBody(AbstractCarBody *body);
};
class AbstractEngine
{
private:
    int max_speed = 0;

public:
    int getMaxSpeed() const;
    void setMaxSpeed(int value);
};

class AbstractCarBody{
public:
    std::string carBody;
    std::string setCarBody(std::string name);


};


class FordFactory : public CarFactory
{
public:
    AbstractCar *CreateCar() override;
    AbstractEngine *CreateEngine() override;
    AbstractCarBody *CreateCarBody() override;
};

class FordCar : public AbstractCar
{
public:
    explicit FordCar(const std::string &name);
    int MaxSpeed(AbstractEngine *engine) override;
    std::string ToString() override;
    std::string GetCarBody(AbstractCarBody *body) override;
};

class FordEngine : public AbstractEngine
{
public:
    FordEngine();
};

class FordCarBody : public AbstractCarBody
{
public:
    FordCarBody();

};


class AudiFactory : public CarFactory
{
public:
    AbstractCar *CreateCar() override;
    AbstractEngine *CreateEngine() override;
    AbstractCarBody *CreateCarBody() override;
};

class Audi : public AbstractCar{
public:
    explicit Audi(const std::string &name);
    int MaxSpeed(AbstractEngine *engine) override;
    std::string ToString() override;
    std::string GetCarBody(AbstractCarBody *body) override;

};

class AudiEngine : public AbstractEngine
{
public:
    AudiEngine();
};
class AudiCarBody : public AbstractCarBody
{
public:
    AudiCarBody();
};



class Client
{
private:
    AbstractCar *abstractCar;
    AbstractEngine *abstractEngine;
    AbstractCarBody *abstractCarBody;
public:
    virtual#pragma once
// Abstract Factory
// Предоставляет интерфейс для создания семейств взаимосвязанных или взаимозависимых объектов,
// не специфицируя их конкретных классов.

#include <string>

class AbstractCar;
class AbstractEngine;
class AbstractCarBody;

class CarFactory
{
public:
    virtual AbstractCar *CreateCar() = 0;
    virtual AbstractEngine *CreateEngine() = 0;
    virtual AbstractCarBody *CreateCarBody() = 0;
};
class AbstractCar
{
private:
    std::string Name;

public:
    std::string getName() const;
    void setName(const std::string &value);
    virtual int MaxSpeed(AbstractEngine *engine) = 0;
    virtual std::string ToString();
    virtual std::string GetCarBody(AbstractCarBody *body);
};
class AbstractEngine
{
private:
    int max_speed = 0;

public:
    int getMaxSpeed() const;
    void setMaxSpeed(int value);
};

class AbstractCarBody{
public:
    std::string carBody;
    std::string setCarBody(std::string name);


};


class FordFactory : public CarFactory
{
public:
    AbstractCar *CreateCar() override;
    AbstractEngine *CreateEngine() override;
    AbstractCarBody *CreateCarBody() override;
};

class FordCar : public AbstractCar
{
public:
    explicit FordCar(const std::string &name);
    int MaxSpeed(AbstractEngine *engine) override;
    std::string ToString() override;
    std::string GetCarBody(AbstractCarBody *body) override;
};

class FordEngine : public AbstractEngine
{
public:
    FordEngine();
};

class FordCarBody : public AbstractCarBody
{
public:
    FordCarBody();

};


class AudiFactory : public CarFactory
{
public:
    AbstractCar *CreateCar() override;
    AbstractEngine *CreateEngine() override;
    AbstractCarBody *CreateCarBody() override;
};

class Audi : public AbstractCar{
public:
    explicit Audi(const std::string &name);
    int MaxSpeed(AbstractEngine *engine) override;
    std::string ToString() override;
    std::string GetCarBody(AbstractCarBody *body) override;

};

class AudiEngine : public AbstractEngine
{
public:
    AudiEngine();
};
class AudiCarBody : public AbstractCarBody
{
public:
    AudiCarBody();
};



class Client
{
private:
    AbstractCar *abstractCar;
    AbstractEngine *abstractEngine;
    AbstractCarBody *abstractCarBody;
public:
    virtual ~Client()
    {
        delete abstractCar;
        delete abstractEngine;
        delete abstractCarBody;
    }
    explicit Client(CarFactory *car_factory);
    int RunMaxSpeed();
    std::string GetCarBody();
    std::string ToString();
};


