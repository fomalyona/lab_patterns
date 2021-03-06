
#include "task_8.h"

bool Receiver::getBankTransfer() const
{
    return BankTransfer;
}

void Receiver::setBankTransfer(bool value)
{
    BankTransfer = value;
}

bool Receiver::getMoneyTransfer() const
{
    return MoneyTransfer;
}

void Receiver::setMoneyTransfer(bool value)
{
    MoneyTransfer = value;
}

bool Receiver::getPayPalTransfer() const
{
    return PayPalTransfer;
}

void Receiver::setPayPalTransfer(bool value)
{
    PayPalTransfer = value;
}

Receiver::Receiver(bool bt, bool mt, bool ppt)
{
    setBankTransfer(bt);
    setMoneyTransfer(mt);
    setPayPalTransfer(ppt);
}

PaymentHandler *PaymentHandler::getSuccessor() const
{
    return Successor;
}

void PaymentHandler::setSuccessor(PaymentHandler *value)
{
    Successor = value;
}

void BankPaymentHandler::Handle(Receiver *receiver)
{
    if (receiver->getBankTransfer())
    {
        std::cout << "translation of bank" << std::endl;
    }
    else if (getSuccessor() != nullptr)
    {
        getSuccessor()->Handle(receiver);
    }
}

void MoneyPaymentHandler::Handle(Receiver *receiver)
{
    if (receiver->getMoneyTransfer())
    {
        std::cout << "translate from money" << std::endl;
    }
    else if (getSuccessor() != nullptr)
    {
        getSuccessor()->Handle(receiver);
    }
}

void PayPalPaymentHandler::Handle(Receiver *receiver)
{
    if (receiver->getPayPalTransfer())
    {
        std::cout << "translate from pay pal" << std::endl;
    }
    else if (getSuccessor() != nullptr)
    {
        getSuccessor()->Handle(receiver);
    }
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
#include "task_8.h"

bool Receiver::getBankTransfer() const
{
    return BankTransfer;
}

void Receiver::setBankTransfer(bool value)
{
    BankTransfer = value;
}

bool Receiver::getMoneyTransfer() const
{
    return MoneyTransfer;
}

void Receiver::setMoneyTransfer(bool value)
{
    MoneyTransfer = value;
}

bool Receiver::getPayPalTransfer() const
{
    return PayPalTransfer;
}

void Receiver::setPayPalTransfer(bool value)
{
    PayPalTransfer = value;
}

Receiver::Receiver(bool bt, bool mt, bool ppt)
{
    setBankTransfer(bt);
    setMoneyTransfer(mt);
    setPayPalTransfer(ppt);
}

PaymentHandler *PaymentHandler::getSuccessor() const
{
    return Successor;
}

void PaymentHandler::setSuccessor(PaymentHandler *value)
{
    Successor = value;
}

void BankPaymentHandler::Handle(Receiver *receiver)
{
    if (receiver->getBankTransfer())
    {
        std::cout << "translation of bank" << std::endl;
    }
    else if (getSuccessor() != nullptr)
    {
        getSuccessor()->Handle(receiver);
    }
}

void MoneyPaymentHandler::Handle(Receiver *receiver)
{
    if (receiver->getMoneyTransfer())
    {
        std::cout << "translate from money" << std::endl;
    }
    else if (getSuccessor() != nullptr)
    {
        getSuccessor()->Handle(receiver);
    }
}

void PayPalPaymentHandler::Handle(Receiver *receiver)
{
    if (receiver->getPayPalTransfer())
    {
        std::cout << "translate from pay pal" << std::endl;
    }
    else if (getSuccessor() != nullptr)
    {
        getSuccessor()->Handle(receiver);
    }
}
