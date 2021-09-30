
#include "task_9.h"
double ArithmeticUnit::getRegister() const
{
    return Register;
}

void ArithmeticUnit::setRegister(double value)
{
    Register = value;
}

void ArithmeticUnit::Run(char operationCode, double operand)
{
    switch (operationCode)
    {
        case '+':
            setRegister(getRegister() + operand);
            break;
        case '-':
            setRegister(getRegister() - operand);
            break;
        case '*':
            setRegister(getRegister() * operand);
            break;
        case '/':
            setRegister(getRegister() / operand);
            break;
    }
}

void ControlUnit::StoreCommand(Command *command)
{
    commands.push_back(command);
}

void ControlUnit::ExecuteCommand()
{
    commands[current]->Execute();
    current++;
}

void ControlUnit::Undo()
{
    commands[current - 1]->UnExecute();
}

void ControlUnit::Redo()
{
    commands[current - 1]->Execute();
}

Add::Add(ArithmeticUnit *unit, double operand)
{
    this->unit = unit;
    this->operand = operand;
}

void Add::Execute()
{
    unit->Run('+', operand);
}

void Add::UnExecute()
{
    unit->Run('-', operand);
}

Sub::Sub(ArithmeticUnit *unit, double operand) {
    this->unit = unit;
    this->operand = operand;
}

void Sub::Execute() {
    unit->Run('-', operand);
}

void Sub::UnExecute() {
    unit->Run('+', operand);
}

Mul::Mul(ArithmeticUnit *unit, double operand) {
    this->unit = unit;
    this->operand = operand;
#include "task_9.h"
double ArithmeticUnit::getRegister() const
{
    return Register;
}

void ArithmeticUnit::setRegister(double value)
{
    Register = value;
}

void ArithmeticUnit::Run(char operationCode, double operand)
{
    switch (operationCode)
    {
        case '+':
            setRegister(getRegister() + operand);
            break;
        case '-':
            setRegister(getRegister() - operand);
            break;
        case '*':
            setRegister(getRegister() * operand);
            break;
        case '/':
            setRegister(getRegister() / operand);
            break;
    }
}

void ControlUnit::StoreCommand(Command *command)
{
    commands.push_back(command);
}

void ControlUnit::ExecuteCommand()
{
    commands[current]->Execute();
    current++;
}

void ControlUnit::Undo()
{
    commands[current - 1]->UnExecute();
}

void ControlUnit::Redo()
{
    commands[current - 1]->Execute();
}

Add::Add(ArithmeticUnit *unit, double operand)
{
    this->unit = unit;
    this->operand = operand;
}

void Add::Execute()
{
    unit->Run('+', operand);
}

void Add::UnExecute()
{
    unit->Run('-', operand);
}

Sub::Sub(ArithmeticUnit *unit, double operand) {
    this->unit = unit;
    this->operand = operand;
}

void Sub::Execute() {
    unit->Run('-', operand);
}

void Sub::UnExecute() {
    unit->Run('+', operand);
}

Mul::Mul(ArithmeticUnit *unit, double operand) {
    this->unit = unit;
    this->operand = operand;
}

void Mul::Execute() {
    unit->Run('*', operand);
}

void Mul::UnExecute() {
    unit->Run('/', operand);
}

Calculator::Calculator()
{
    arithmeticUnit = new ArithmeticUnit();
    controlUnit = new ControlUnit();
}

Div::Div(ArithmeticUnit *unit, double operand) {
    this->unit = unit;
    this->operand = operand;
}
void Div::Execute() {
    unit->Run('/', operand);
}

void Div::UnExecute() {
    unit->Run('*', operand);
}


double Calculator::Run(Command *command)
{
    controlUnit->StoreCommand(command);
    controlUnit->ExecuteCommand();
    return arithmeticUnit->getRegister();
}

double Calculator::Add(double operand)
{

    return Run(new class Add(arithmeticUnit, operand));
}

double Calculator::Sub(double operand) {
    return Run(new class Sub(arithmeticUnit, operand));
}

double Calculator::Mul(double operand) {
    return Run(new class Mul(arithmeticUnit, operand));
}

double Calculator::Div(double operand) {
    return Run(new class Div(arithmeticUnit, operand));
}

double Calculator::Redo() {
    controlUnit->Redo();
    return arithmeticUnit->getRegister();
}

double Calculator::Undo() {
    controlUnit->Undo();
    return arithmeticUnit->getRegister();
}


