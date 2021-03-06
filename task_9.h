#pragma once
/// Command (Команда) преобразовывает запрос на выполнение действия в отдельный объект-команду
/// Инкапсулирует запрос как объект, позволяя тем самым задавать параметры
/// клиентов для обработки соответствующих запросов, ставить запросы в очередь
/// или протоколировать их, а также поддерживать отмену операций.

#include <vector>
#include <iostream>
class ArithmeticUnit;

class Command
{
protected:
    ArithmeticUnit *unit;
    double operand = 0;
public:
    virtual void Execute() = 0;
    virtual void UnExecute() = 0;
    virtual ~Command()
    {
        delete unit;
    }

};
class ArithmeticUnit
{
private:
    double Register = 0;

public:
    double getRegister() const;
    void setRegister(double value);
    void Run(char operationCode, double operand);
};

class ControlUnit
{
private:
    std::vector<Command*> commands = std::vector<Command*>();
    int current = 0;
public:
    void StoreCommand(Command *command);
    void ExecuteCommand();
    void Undo();
    void Redo();
};

class Add : public Command
{
public:
    explicit Add(ArithmeticUnit *unit, double operand);
    void Execute() override;
    void UnExecute() override;
};

class Sub : public Command
{
public:
    explicit Sub(ArithmeticUnit *unit, double operand);
    void Execute() override;
    void UnExecute() override;
};
class Mul : public Command
{
public:
    explicit Mul(ArithmeticUnit *unit, double operand);
    void Execute() override;
    void UnExecute() override;
};


class Div : public Command
{
public:
    explicit Div(ArithmeticUnit *unit, double operand);
    void Execute() override;
    void UnExecute() override;
};


class Calculator
{
private:
    ArithmeticUnit *arithmeticUnit;
    ControlUnit *controlUnit;
public:
    virtual ~Calculator()
    {
        delete arithmeticUnit;
        delete controlUnit;
    }

    Calculator();
private:
    double Run(Command *command);
public:
    double Add(double operand);
    double Sub(double operand);
    double Mul(double operand);
    double Div(double operand);
    double Redo();
    double Undo();
};

                                                                                                                                                                                                                                                                                                                                                                                   #pragma once
/// Command (Команда) преобразовывает запрос на выполнение действия в отдельный объект-команду
/// Инкапсулирует запрос как объект, позволяя тем самым задавать параметры
/// клиентов для обработки соответствующих запросов, ставить запросы в очередь
/// или протоколировать их, а также поддерживать отмену операций.

#include <vector>
#include <iostream>
class ArithmeticUnit;

class Command
{
protected:
    ArithmeticUnit *unit;
    double operand = 0;
public:
    virtual void Execute() = 0;
    virtual void UnExecute() = 0;
    virtual ~Command()
    {
        delete unit;
    }

};
class ArithmeticUnit
{
private:
    double Register = 0;

public:
    double getRegister() const;
    void setRegister(double value);
    void Run(char operationCode, double operand);
};

class ControlUnit
{
private:
    std::vector<Command*> commands = std::vector<Command*>();
    int current = 0;
public:
    void StoreCommand(Command *command);
    void ExecuteCommand();
    void Undo();
    void Redo();
};

class Add : public Command
{
public:
    explicit Add(ArithmeticUnit *unit, double operand);
    void Execute() override;
    void UnExecute() override;
};

class Sub : public Command
{
public:
    explicit Sub(ArithmeticUnit *unit, double operand);
    void Execute() override;
    void UnExecute() override;
};
class Mul : public Command
{
public:
    explicit Mul(ArithmeticUnit *unit, double operand);
    void Execute() override;
    void UnExecute() override;
};


class Div : public Command
{
public:
    explicit Div(ArithmeticUnit *unit, double operand);
    void Execute() override;
    void UnExecute() override;
};


class Calculator
{
private:
    ArithmeticUnit *arithmeticUnit;
    ControlUnit *controlUnit;
public:
    virtual ~Calculator()
    {
        delete arithmeticUnit;
        delete controlUnit;
    }

    Calculator();
private:
    double Run(Command *command);
public:
    double Add(double operand);
    double Sub(double operand);
    double Mul(double operand);
    double Div(double operand);
    double Redo();
    double Undo();
};

