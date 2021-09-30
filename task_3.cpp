
#include "task_3.h"

std::string TransportService::getName() const
{
    return Name;
}

void TransportService::setName(const std::string &value)
{
    Name = value;
}

TransportService::TransportService(const std::string &name)
{
    setName(name);
}

std::string TransportService::ToString() {
    return std::string();
}


std::string TransportCompany::getName() const
{
    return Name;
}

void TransportCompany::setName(const std::string &value)
{
    Name = value;
}

TransportCompany::TransportCompany(const std::string &n)
{
    setName(n);
}

//std::string TransportCompany::ToString()
//{
//    return getName();
//}

int TaxiServices::getCategory() const
{
    return Category;
}

void TaxiServices::setCategory(int value)
{
    Category = value;
}

TaxiServices::TaxiServices(const std::string &name, int cat) : TransportService(name)
{
    setCategory(cat);
}

double TaxiServices::CostTransportation(double distance)
{
    return distance * getCategory();
}

std::string TaxiServices::ToString()
{
    std::string s = "firm " + getName() + " ; category " + std::to_string(getCategory());
    return s;
}

double Shipping::getTariff() const
{
    return Tariff;
}

void Shipping::setTariff(double value)
{
    Tariff = value;
}

Shipping::Shipping(const std::string &name, int taff) : TransportService(name)
{
    setTariff(taff);
}

double Shipping::CostTransportation(double distance)
{
    return distance * getTariff();
}

std::string Shipping::ToString()
{
    std::string s = "firm " + getName() + " ; tariff " + std::to_string(getTariff());
    return s;
}

DrunkDriver::DrunkDriver(const std::string &name, int time) : TransportService(name){
    setTime(time);
}


double DrunkDriver::getTime() const {
    return Time;
}

void DrunkDriver::setTime(double value) {
    Time = value;
}

double DrunkDriver::CostTransportation(double distance) {
    return distance * getTime() / 60;
}

std::string DrunkDriver::ToString() {
    std::string s = "firm " + getName() + " ; time " + std::to_string(getTime());
    return s;
}

TaxiTransCom::TaxiTransCom(const std::string &name) : TransportCompany(name)
{
}

TransportService *TaxiTransCom::Create(const std::string &n, int c)
{
    return new TaxiServices(getName(), c);
}

ShipTransCom::ShipTransCom(const std::string &name) : TransportCompany(name)
{
}

TransportService *ShipTransCom::Create(const std::string &n, int t)
{
    return new Shipping(getName(), t);
}

DrunkDriverCom::DrunkDriverCom(const std::string &name) : TransportCompany(name) {

}

TransportService *DrunkDriverCom::Create(const std::string &n, int v) {
    
#include "task_3.h"

std::string TransportService::getName() const
{
    return Name;
}

void TransportService::setName(const std::string &value)
{
    Name = value;
}

TransportService::TransportService(const std::string &name)
{
    setName(name);
}

std::string TransportService::ToString() {
    return std::string();
}


std::string TransportCompany::getName() const
{
    return Name;
}

void TransportCompany::setName(const std::string &value)
{
    Name = value;
}

TransportCompany::TransportCompany(const std::string &n)
{
    setName(n);
}

//std::string TransportCompany::ToString()
//{
//    return getName();
//}

int TaxiServices::getCategory() const
{
    return Category;
}

void TaxiServices::setCategory(int value)
{
    Category = value;
}

TaxiServices::TaxiServices(const std::string &name, int cat) : TransportService(name)
{
    setCategory(cat);
}

double TaxiServices::CostTransportation(double distance)
{
    return distance * getCategory();
}

std::string TaxiServices::ToString()
{
    std::string s = "firm " + getName() + " ; category " + std::to_string(getCategory());
    return s;
}

double Shipping::getTariff() const
{
    return Tariff;
}

void Shipping::setTariff(double value)
{
    Tariff = value;
}

Shipping::Shipping(const std::string &name, int taff) : TransportService(name)
{
    setTariff(taff);
}

double Shipping::CostTransportation(double distance)
{
    return distance * getTariff();
}

std::string Shipping::ToString()
{
    std::string s = "firm " + getName() + " ; tariff " + std::to_string(getTariff());
    return s;
}

DrunkDriver::DrunkDriver(const std::string &name, int time) : TransportService(name){
    setTime(time);
}


double DrunkDriver::getTime() const {
    return Time;
}

void DrunkDriver::setTime(double value) {
    Time = value;
}

double DrunkDriver::CostTransportation(double distance) {
    return distance * getTime() / 60;
}

std::string DrunkDriver::ToString() {
    std::string s = "firm " + getName() + " ; time " + std::to_string(getTime());
    return s;
}

TaxiTransCom::TaxiTransCom(const std::string &name) : TransportCompany(name)
{
}

TransportService *TaxiTransCom::Create(const std::string &n, int c)
{
    return new TaxiServices(getName(), c);
}

ShipTransCom::ShipTransCom(const std::string &name) : TransportCompany(name)
{
}

TransportService *ShipTransCom::Create(const std::string &n, int t)
{
    return new Shipping(getName(), t);
}

DrunkDriverCom::DrunkDriverCom(const std::string &name) : TransportCompany(name) {

}

TransportService *DrunkDriverCom::Create(const std::string &n, int v) {
    return new DrunkDriver(getName(), v);
}
