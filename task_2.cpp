
#include "task_2.h"

#include <utility>
std::string AbstractCar::getName() const{
    return Name;
}

void AbstractCar::setName(const std::string &value){
    Name = value;
}

std::string AbstractCar::ToString() {
    return {};
}

std::string AbstractCar::GetCarBody(AbstractCarBody *body) {
    return {};
}

int AbstractEngine::getMaxSpeed() const{
    return max_speed;
}

void AbstractEngine::setMaxSpeed(int value)
{
    max_speed = value;
}


std::string AbstractCarBody::setCarBody(std::string name) {
    carBody = std::move(name);
    return carBody;
}


AbstractCar *FordFactory::CreateCar()
{
    return new FordCar("Ford");
}

AbstractEngine *FordFactory::CreateEngine(){
    return new FordEngine();
}

AbstractCarBody *FordFactory::CreateCarBody() {
    return new FordCarBody;
}


FordCar::FordCar(const std::string &name){
    setName(name);
}

int FordCar::MaxSpeed(AbstractEngine *engine)
{
    int ms = engine->getMaxSpeed();
    return ms;
}

std::string FordCar::ToString()
{
    return getName();
}

std::string FordCar::GetCarBody(AbstractCarBody *body) {

    std::string b = body->carBody;
    return b;
}

FordEngine::FordEngine()
{
    setMaxSpeed(220);
}

FordCarBody::FordCarBody() {
    setCarBody("Universal");
}



AbstractCar *AudiFactory::CreateCar() {
    return new Audi("Audi");;
}

AbstractEngine *AudiFactory::CreateEngine() {
    return new AudiEngine;
}

AbstractCarBody *AudiFactory::CreateCarBody() {
    return new AudiCarBody;
}

Audi::Audi(const std::string &name) {
    setName(name);
}

int Audi::MaxSpeed(AbstractEngine *engine) {
    int ms = engine->getMaxSpeed();
    return ms;

}

AudiEngine::AudiEngine() {
    setMaxSpeed(250);
}

std::string Audi::ToString() {
    return getName();
}

std::string Audi::GetCarBody(AbstractCarBody *body) {
    std::string b = body->carBody;
    return b;
}

AudiCarBody::AudiCarBody() {
    setCarBody("sedan");
}
Client::Client(CarFactory *car_factory)
{
    abstractCar = car_factory->CreateCar();
    abstractEngine = car_factory->CreateEngine();
    abstractCarBody = car_factory->CreateCarBody();
}

int Client::RunMaxSpeed()
{
    return abstractCar->MaxSpeed(abstractEngine);
}

std::string Client::ToString()
{
    return abstractCar->ToString();
}

std::
#include "task_2.h"

#include <utility>
std::string AbstractCar::getName() const{
    return Name;
}

void AbstractCar::setName(const std::string &value){
    Name = value;
}

std::string AbstractCar::ToString() {
    return {};
}

std::string AbstractCar::GetCarBody(AbstractCarBody *body) {
    return {};
}

int AbstractEngine::getMaxSpeed() const{
    return max_speed;
}

void AbstractEngine::setMaxSpeed(int value)
{
    max_speed = value;
}


std::string AbstractCarBody::setCarBody(std::string name) {
    carBody = std::move(name);
    return carBody;
}


AbstractCar *FordFactory::CreateCar()
{
    return new FordCar("Ford");
}

AbstractEngine *FordFactory::CreateEngine(){
    return new FordEngine();
}

AbstractCarBody *FordFactory::CreateCarBody() {
    return new FordCarBody;
}


FordCar::FordCar(const std::string &name){
    setName(name);
}

int FordCar::MaxSpeed(AbstractEngine *engine)
{
    int ms = engine->getMaxSpeed();
    return ms;
}

std::string FordCar::ToString()
{
    return getName();
}

std::string FordCar::GetCarBody(AbstractCarBody *body) {

    std::string b = body->carBody;
    return b;
}

FordEngine::FordEngine()
{
    setMaxSpeed(220);
}

FordCarBody::FordCarBody() {
    setCarBody("Universal");
}



AbstractCar *AudiFactory::CreateCar() {
    return new Audi("Audi");;
}

AbstractEngine *AudiFactory::CreateEngine() {
    return new AudiEngine;
}

AbstractCarBody *AudiFactory::CreateCarBody() {
    return new AudiCarBody;
}

Audi::Audi(const std::string &name) {
    setName(name);
}

int Audi::MaxSpeed(AbstractEngine *engine) {
    int ms = engine->getMaxSpeed();
    return ms;

}

AudiEngine::AudiEngine() {
    setMaxSpeed(250);
}

std::string Audi::ToString() {
    return getName();
}

std::string Audi::GetCarBody(AbstractCarBody *body) {
    std::string b = body->carBody;
    return b;
}

AudiCarBody::AudiCarBody() {
    setCarBody("sedan");
}
Client::Client(CarFactory *car_factory)
{
    abstractCar = car_factory->CreateCar();
    abstractEngine = car_factory->CreateEngine();
    abstractCarBody = car_factory->CreateCarBody();
}

int Client::RunMaxSpeed()
{
    return abstractCar->MaxSpeed(abstractEngine);
}

std::string Client::ToString()
{
    return abstractCar->ToString();
}

std::string Client::GetCarBody() {
    return abstractCar->GetCarBody(abstractCarBody);
}
