

/// Factory Method
/// Определяет интерфейс для создания объекта,
/// но оставляет подклассам решение о том, какой класс инстанцировать
/// Паттерн Фабричный метод предлагает создавать объекты не напрямую,
/// используя оператор new, а через вызов особого фабричного метода.
#pragma once
#include <string>

class TransportService
{
private:
    std::string Name;

public:
    std::string getName() const;
    void setName(const std::string &value);
    TransportService(const std::string &name);
    virtual double CostTransportation(double distance) = 0;
    virtual std::string ToString();
};
class TransportCompany
{
private:
    std::string Name;
public:
    std::string getName() const;
    void setName(const std::string &value);
    explicit TransportCompany(const std::string &n);
//    std::string ToString() override;
    virtual TransportService *Create(const std::string &n, int k) = 0;
};
class TaxiServices : public TransportService
{
private:
    int Category = 0;

public:
    int getCategory() const;
    void setCategory(int value);
    TaxiServices(const std::string &name, int cat);
    double CostTransportation(double distance) override;
    std::string ToString() override;
};
class Shipping : public TransportService
{
private:
    double Tariff = 0;

public:
    double getTariff() const;
    void setTariff(double value);
    Shipping(const std::string &name, int taff);
    double CostTransportation(double distance) override;
    std::string ToString() override;
};

class DrunkDriver: public TransportService {
private:
    double Time = 0;

public:
    DrunkDriver(const std::string &name, int time);
    double getTime() const;
    void setTime(double value);
    double CostTransportation(double distance) override;
    std::string ToString() override;

};

class TaxiTransCom : public TransportCompany
{
public:
    explicit TaxiTransCom(const std::string &name);
    TransportService *Create(const std::string &n, int c) override;
};

class ShipTransCom : public TransportCompany
{
public:
    explicit ShipTransCom(const std::string &name);
    TransportService *Create(const std::string &n, int t) override;
};

class DrunkDriverCom: public TransportCompany{
public:
    explicit DrunkDriverCom(const std::string &name);
    TransportService *Create(const std::string &n, int v) override;

};


                                                                                                                                                           

/// Factory Method
/// Определяет интерфейс для создания объекта,
/// но оставляет подклассам решение о том, какой класс инстанцировать
/// Паттерн Фабричный метод предлагает создавать объекты не напрямую,
/// используя оператор new, а через вызов особого фабричного метода.
#pragma once
#include <string>

class TransportService
{
private:
    std::string Name;

public:
    std::string getName() const;
    void setName(const std::string &value);
    TransportService(const std::string &name);
    virtual double CostTransportation(double distance) = 0;
    virtual std::string ToString();
};
class TransportCompany
{
private:
    std::string Name;
public:
    std::string getName() const;
    void setName(const std::string &value);
    explicit TransportCompany(const std::string &n);
//    std::string ToString() override;
    virtual TransportService *Create(const std::string &n, int k) = 0;
};
class TaxiServices : public TransportService
{
private:
    int Category = 0;

public:
    int getCategory() const;
    void setCategory(int value);
    TaxiServices(const std::string &name, int cat);
    double CostTransportation(double distance) override;
    std::string ToString() override;
};
class Shipping : public TransportService
{
private:
    double Tariff = 0;

public:
    double getTariff() const;
    void setTariff(double value);
    Shipping(const std::string &name, int taff);
    double CostTransportation(double distance) override;
    std::string ToString() override;
};

class DrunkDriver: public TransportService {
private:
    double Time = 0;

public:
    DrunkDriver(const std::string &name, int time);
    double getTime() const;
    void setTime(double value);
    double CostTransportation(double distance) override;
    std::string ToString() override;

};

class TaxiTransCom : public TransportCompany
{
public:
    explicit TaxiTransCom(const std::string &name);
    TransportService *Create(const std::string &n, int c) override;
};

class ShipTransCom : public TransportCompany
{
public:
    explicit ShipTransCom(const std::string &name);
    TransportService *Create(const std::string &n, int t) override;
};

class DrunkDriverCom: public TransportCompany{
public:
    explicit DrunkDriverCom(const std::string &name);
    TransportService *Create(const std::string &n, int v) override;

};


