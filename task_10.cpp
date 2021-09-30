
#include "task_10.h"

std::string AutoBase::getName() const
{
    return Name;
}

void AutoBase::setName(const std::string &value)
{
    Name = value;
}

std::string AutoBase::getDescription() const
{
    return Description;
}

void AutoBase::setDescription(const std::string &value)
{
    Description = value;
}

double AutoBase::getCostBase() const
{
    return CostBase;
}

void AutoBase::setCostBase(double value)
{
    CostBase = value;
}

std::string AutoBase::ToString()
{
    std::string s = "Your car: " + getName() + "\n" + "Description: " + getDescription()+ "\n"
            + "Cost: " + std::to_string(GetCost()) + "\n";
    return s;
}

Renault::Renault(const std::string &name, const std::string &info, double costbase)
{
    setName(name);
    setDescription(info);
    setCostBase(costbase);
}

double Renault::GetCost()
{
    return getCostBase() * 1.18;
}

AutoBase *DecoratorOptions::getAutoProperty() const
{
    return AutoProperty;
}

void DecoratorOptions::setAutoProperty(AutoBase *value)
{
    AutoProperty = value;
}

std::string DecoratorOptions::getTitle() const
{
    return Title;
}

void DecoratorOptions::s
#include "task_10.h"

std::string AutoBase::getName() const
{
    return Name;
}

void AutoBase::setName(const std::string &value)
{
    Name = value;
}

std::string AutoBase::getDescription() const
{
    return Description;
}

void AutoBase::setDescription(const std::string &value)
{
    Description = value;
}

double AutoBase::getCostBase() const
{
    return CostBase;
}

void AutoBase::setCostBase(double value)
{
    CostBase = value;
}

std::string AutoBase::ToString()
{
    std::string s = "Your car: " + getName() + "\n" + "Description: " + getDescription()+ "\n"
            + "Cost: " + std::to_string(GetCost()) + "\n";
    return s;
}

Renault::Renault(const std::string &name, const std::string &info, double costbase)
{
    setName(name);
    setDescription(info);
    setCostBase(costbase);
}

double Renault::GetCost()
{
    return getCostBase() * 1.18;
}

AutoBase *DecoratorOptions::getAutoProperty() const
{
    return AutoProperty;
}

void DecoratorOptions::setAutoProperty(AutoBase *value)
{
    AutoProperty = value;
}

std::string DecoratorOptions::getTitle() const
{
    return Title;
}

void DecoratorOptions::setTitle(const std::string &value)
{
    Title = value;
}

DecoratorOptions::DecoratorOptions(AutoBase *au, const std::string &tit)
{
    setAutoProperty(au);
    setTitle(tit);
}

MediaNAV::MediaNAV(AutoBase *p, const std::string &t) : DecoratorOptions(p, t)
{
    setAutoProperty(p);
    setName(p->getName() + ". Modern");
    setDescription(p->getDescription() + ". " + this->getTitle() + ". Updated multimedia navigation system");

}

double MediaNAV::GetCost()
{
    return getAutoProperty()->GetCost() + 15.99;
}

SystemSecurity::SystemSecurity(AutoBase *p, const std::string &t) : DecoratorOptions(p, t)
{
    setAutoProperty(p);
    setName(p->getName() + ". Enhanced security");
    setDescription(p->getDescription() + ". " + this->getTitle() + ". Front side airbags,"
                                                                    " ESP - vehicle dynamic stabilization system");
}

double SystemSecurity::GetCost() {
    return getAutoProperty()->GetCost() + 20.99;
}

ADAS::ADAS(AutoBase *p, const std::string &t) : DecoratorOptions(p, t) {
    setAutoProperty(p);
    setName(p->getName() + ". Advanced Driver Assistance Systems");
    setDescription(p->getDescription() + ". " + this->getTitle() + ". ADAS technologies represent important"
                                           " advances in vehicle safety and it is crucial to optimize their potential");

}

double ADAS::GetCost() {
    return getAutoProperty()->GetCost() + 100.0;
}

AudioSystem::AudioSystem(AutoBase *p, const std::string &t) : DecoratorOptions(p, t) {
    setAutoProperty(p);
    setName(p->getName() + ". Audio System");
    setDescription(p->getDescription() + ". " + this->getTitle() + ". Modern Audio System");

}

double AudioSystem::GetCost() {
    return getAutoProperty()->GetCost() + 10.0;
}

UsedCars::UsedCars(AutoBase *p, const std::string &t) : DecoratorOptions(p, t) {
    setAutoProperty(p);
    setName(p->getName() + ". Used Car");
    setDescription(p->getDescription() + ". " + this->getTitle() + ". Used Car 2 years");

}

double UsedCars::GetCost() {
    return getAutoProperty()->GetCost() + 100.0;
}
