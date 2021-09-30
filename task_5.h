#include <string>
#include <vector>
#include <iostream>
//////Паттерн Стратегия предлагает определить семейство схожих алгоритмов,
/// которые часто изменяются или расширяются, и вынести их в собственные классы, называемые стратегиями.
class NavigatorStrategy
{
private:
    std::string Route;
    std::string Title;
public:
    std::string getTitle() const;
    void setTitle(const std::string &value);
    std::string showMap() const;
    virtual void searchRoute (const std::string &valueA, const std::string &valueB) = 0;
    void buildRoute();
    virtual std::string ToString() = 0;
};


class WalkingStrategy : public NavigatorStrategy
{
public:
    WalkingStrategy();
    std::string ToString() override;
    void searchRoute(const std::string &valueA, const std::string &valueB) override;
};

class RoadStrategy : public NavigatorStrategy
{
public:
    RoadStrategy();
    std::string ToString() override;
    void searchRoute(const std::string &valueA, const std::string &valueB) override;
};

class BikeLaneStrategy : public NavigatorStrategy
{
public:
    BikeLaneStrategy();
    std::string ToString() override;
    void searchRoute(const std::string &valueA, const std::string &valueB) override;
};

class PublicTransportStrategy : public NavigatorStrategy
{
public:
    PublicTransportStrategy();
    std::string ToString() override;
    void searchRoute(const std::string &valueA, const std::string &valueB) override;
};#include <string>
#include <vector>
#include <iostream>
//////Паттерн Стратегия предлагает определить семейство схожих алгоритмов,
/// которые часто изменяются или расширяются, и вынести их в собственные классы, называемые стратегиями.
class NavigatorStrategy
{
private:
    std::string Route;
    std::string Title;
public:
    std::string getTitle() const;
    void setTitle(const std::string &value);
    std::string showMap() const;
    virtual void searchRoute (const std::string &valueA, const std::string &valueB) = 0;
    void buildRoute();
    virtual std::string ToString() = 0;
};


class WalkingStrategy : public NavigatorStrategy
{
public:
    WalkingStrategy();
    std::string ToString() override;
    void searchRoute(const std::string &valueA, const std::string &valueB) override;
};

class RoadStrategy : public NavigatorStrategy
{
public:
    RoadStrategy();
    std::string ToString() override;
    void searchRoute(const std::string &valueA, const std::string &valueB) override;
};

class BikeLaneStrategy : public NavigatorStrategy
{
public:
    BikeLaneStrategy();
    std::string ToString() override;
    void searchRoute(const std::string &valueA, const std::string &valueB) override;
};

class PublicTransportStrategy : public NavigatorStrategy
{
public:
    PublicTransportStrategy();
    std::string ToString() override;
    void searchRoute(const std::string &valueA, const std::string &valueB) override;
};

class SightStrategy : public NavigatorStrategy
{
public:
    SightStrategy();
    std::string ToString() override;
    void searchRoute(const std::string &valueA, const std::string &valueB) override;
};

//class Context
//{
//private:
//    NavigatorStrategy *strategy;
//public:
//    virtual ~Context()
//    {
//        delete strategy;
//    }
//
//    Context(NavigatorStrategy *strategy);
//    void Sort();
//    void PrintArray();
//};

