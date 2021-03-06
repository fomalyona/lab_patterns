/// Chain of Responsibility (Цепочка обязанностей) -
//Связывает объекты-получатели
//в цепочку и передает запрос вдоль этой цепочки, пока его не обработают.
//Каждый объект при получении запроса выбирает, либо обработать запрос, либо передать
// выполнение запроса следующему по цепочке.

#pragma once
#include <iostream>

class Receiver {
private:
    bool BankTransfer = false;
    bool MoneyTransfer = false;
    bool PayPalTransfer = false;

public:
    explicit Receiver(bool bt, bool mt, bool ppt);

    bool getBankTransfer() const;

    void setBankTransfer(bool value);

    bool getMoneyTransfer() const;

    void setMoneyTransfer(bool value);

    bool getPayPalTransfer() const;

    void setPayPalTransfer(bool value);
};

class PaymentHandler
{

public:
    PaymentHandler *getSuccessor() const;
    void setSuccessor(PaymentHandler *value);
    virtual void Handle(Receiver *receiver) = 0;

    PaymentHandler *Successor{};
};

class BankPaymentHandler : public PaymentHandler
{
public:
    void Handle(Receiver *receiver) override;
};

class MoneyPaymentHandler : public PaymentHandler
{
public:
    void Handle(Receiver *receiver) override;
};

class PayPalPaymentHandler : public PaymentHandler
{
public:
    void Handle(Receiver *receiver) override;
};
                                                                                 /// Chain of Responsibility (Цепочка обязанностей) -
//Связывает объекты-получатели
//в цепочку и передает запрос вдоль этой цепочки, пока его не обработают.
//Каждый объект при получении запроса выбирает, либо обработать запрос, либо передать
// выполнение запроса следующему по цепочке.

#pragma once
#include <iostream>

class Receiver {
private:
    bool BankTransfer = false;
    bool MoneyTransfer = false;
    bool PayPalTransfer = false;

public:
    explicit Receiver(bool bt, bool mt, bool ppt);

    bool getBankTransfer() const;

    void setBankTransfer(bool value);

    bool getMoneyTransfer() const;

    void setMoneyTransfer(bool value);

    bool getPayPalTransfer() const;

    void setPayPalTransfer(bool value);
};

class PaymentHandler
{

public:
    PaymentHandler *getSuccessor() const;
    void setSuccessor(PaymentHandler *value);
    virtual void Handle(Receiver *receiver) = 0;

    PaymentHandler *Successor{};
};

class BankPaymentHandler : public PaymentHandler
{
public:
    void Handle(Receiver *receiver) override;
};

class MoneyPaymentHandler : public PaymentHandler
{
public:
    void Handle(Receiver *receiver) override;
};

class PayPalPaymentHandler : public PaymentHandler
{
public:
    void Handle(Receiver *receiver) override;
};
