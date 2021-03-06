#pragma once
/// Декоратор (Decorator)
/// замена наследования агрегацией либо композицией . Это когда один объект содержит ссылку на
/// другой и делегирует ему работу, вместо того чтобы самому наследовать его поведение.
/// вы помещаете целевой объект в другой объект-обёртку, который запускает базовое поведение объекта,
/// а затем добавляет к результату что-то своё.

#include <string>


class AutoBase
{
private:
    std::string Name;
    std::string Description;
    double CostBase = 0;

public:
    std::string getName() const;
    void setName(const std::string &value);
    std::string getDescription() const;
    void setDescription(const std::string &value);
    double getCostBase() const;
    void setCostBase(double value);
    virtual double GetCost() = 0;
    std::string ToString();
};
class Renault : public AutoBase
{
public:
    Renault(const std::string &name, const std::string &info, double costbase);
    double GetCost() override;
};
class DecoratorOptions : public AutoBase
{
private:
    AutoBase *AutoProperty;
    std::string Title;

public:
    AutoBase *getAutoProperty() const;
    void setAutoProperty(AutoBase *value);
    std::string getTitle() const;
    void setTitle(const std::string &value);
    DecoratorOptions(AutoBase *au, const std::string &tit);
};
class MediaNAV : public DecoratorOptions
{

public:
    MediaNAV(AutoBase *p, const std::string &t);
    double GetCost() override;
};


class SystemSecurity : public DecoratorOptions
{

public:
    SystemSecurity(AutoBase *p, const std::string &t);
    double GetCost() override;
};


class ADAS : public DecoratorOptions
{

public:
    ADAS(AutoBase *p, const std::string &t);
    double GetCost() override;
};


class AudioSystem : public DecoratorOptions
{

public:
    AudioSystem(AutoBase *p, const std::string &t);
    double GetCost() override;
};

class UsedCars : public DecoratorOptions
{

public:
    UsedCars(AutoBase *p, const std::string &t);
    double GetCost() override;
};

/// бу
/// ADAS
/// Audisystem


                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          #pragma once
/// Декоратор (Decorator)
/// замена наследования агрегацией либо композицией . Это когда один объект содержит ссылку на
/// другой и делегирует ему работу, вместо того чтобы самому наследовать его поведение.
/// вы помещаете целевой объект в другой объект-обёртку, который запускает базовое поведение объекта,
/// а затем добавляет к результату что-то своё.

#include <string>


class AutoBase
{
private:
    std::string Name;
    std::string Description;
    double CostBase = 0;

public:
    std::string getName() const;
    void setName(const std::string &value);
    std::string getDescription() const;
    void setDescription(const std::string &value);
    double getCostBase() const;
    void setCostBase(double value);
    virtual double GetCost() = 0;
    std::string ToString();
};
class Renault : public AutoBase
{
public:
    Renault(const std::string &name, const std::string &info, double costbase);
    double GetCost() override;
};
class DecoratorOptions : public AutoBase
{
private:
    AutoBase *AutoProperty;
    std::string Title;

public:
    AutoBase *getAutoProperty() const;
    void setAutoProperty(AutoBase *value);
    std::string getTitle() const;
    void setTitle(const std::string &value);
    DecoratorOptions(AutoBase *au, const std::string &tit);
};
class MediaNAV : public DecoratorOptions
{

public:
    MediaNAV(AutoBase *p, const std::string &t);
    double GetCost() override;
};


class SystemSecurity : public DecoratorOptions
{

public:
    SystemSecurity(AutoBase *p, const std::string &t);
    double GetCost() override;
};


class ADAS : public DecoratorOptions
{

public:
    ADAS(AutoBase *p, const std::string &t);
    double GetCost() override;
};


class AudioSystem : public DecoratorOptions
{

public:
    AudioSystem(AutoBase *p, const std::string &t);
    double GetCost() override;
};

class UsedCars : public DecoratorOptions
{

public:
    UsedCars(AutoBase *p, const std::string &t);
    double GetCost() override;
};

/// бу
/// ADAS
/// Audisystem


