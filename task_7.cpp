
#include "task_7.h"
//std::string Drive::getTwist() const
//{
//    return twist;
//}
//
//void Drive::setTwist(const std::string &value)
//{
//    twist = value;
//    if (driveevent != nullptr)
//    {
//
//        for (auto listener : driveevent->listeners())
//        {
//            listener(this, new EventArgs());
//        }
//    }
//}
//
//Drive::Drive()
//{
//    setTwist("initial position");
//}
//
//void Drive::TurlLeft()
//{
//    setTwist("left turn");
//}
//
//void Drive::TurlRight()
//{
//    setTwist("right turn");
//}
//
//void Drive::Stop()
//{
//    setTwist("stop");
//}
//
//std::string Drive::ToString()
//{
//
//    std::string s ="drive:" + getTwist();
//    return s;
//}
//
//int Power::getMicrowavePower() const
//{
//    return _power;
//}
//
//void Power::setMicrowavePower(int value)
//{
//    _power = value;
//    if (powerevent != nullptr)
//    {
//        for (auto listener : powerevent->listeners())
//        {
//            listener(this, new EventArgs());
//        }
//    }
//
//}
//
//std::string Power::ToString()
//{
//    std::string s = "power available " + std::to_string(getMicrowavePower());
//    return s;
//}
//
//std::string Notification::getMessageFin() const
//{
//    return mess;
//}
//
//void Notification::setMessageFin(const std::string &value)
//{
//    mess = value;
//    if (notificationevent != nullptr)
//    {
//        for (auto listener : notificationevent->listeners())
//        {
//
//            listener(this, new EventArgs());
//        }
//    }
//}
//
//void Notification::StartNotification()
//{
//    MessageFin = "operation began";
//}
//
//void Notification::StopNotification()
//{
//    MessageFin = "operation finished";
//}
//
//std::string Notification::ToString()
//{
//    std::string s
#include "task_7.h"
//std::string Drive::getTwist() const
//{
//    return twist;
//}
//
//void Drive::setTwist(const std::string &value)
//{
//    twist = value;
//    if (driveevent != nullptr)
//    {
//
//        for (auto listener : driveevent->listeners())
//        {
//            listener(this, new EventArgs());
//        }
//    }
//}
//
//Drive::Drive()
//{
//    setTwist("initial position");
//}
//
//void Drive::TurlLeft()
//{
//    setTwist("left turn");
//}
//
//void Drive::TurlRight()
//{
//    setTwist("right turn");
//}
//
//void Drive::Stop()
//{
//    setTwist("stop");
//}
//
//std::string Drive::ToString()
//{
//
//    std::string s ="drive:" + getTwist();
//    return s;
//}
//
//int Power::getMicrowavePower() const
//{
//    return _power;
//}
//
//void Power::setMicrowavePower(int value)
//{
//    _power = value;
//    if (powerevent != nullptr)
//    {
//        for (auto listener : powerevent->listeners())
//        {
//            listener(this, new EventArgs());
//        }
//    }
//
//}
//
//std::string Power::ToString()
//{
//    std::string s = "power available " + std::to_string(getMicrowavePower());
//    return s;
//}
//
//std::string Notification::getMessageFin() const
//{
//    return mess;
//}
//
//void Notification::setMessageFin(const std::string &value)
//{
//    mess = value;
//    if (notificationevent != nullptr)
//    {
//        for (auto listener : notificationevent->listeners())
//        {
//
//            listener(this, new EventArgs());
//        }
//    }
//}
//
//void Notification::StartNotification()
//{
//    MessageFin = "operation began";
//}
//
//void Notification::StopNotification()
//{
//    MessageFin = "operation finished";
//}
//
//std::string Notification::ToString()
//{
//    std::string s = "Information " + MessageFin;
//    return s;
//}
//
//Microwave::Microwave(Drive *drive, Power *power, Notification *notification)
//{
//    _drive = drive;
//    _power = power;
//    _notification = notification;
//}
//
//void Microwave::Defrost()
//{
//    _notification->StartNotification();
//    _power->setMicrowavePower(1000);
//    _drive->TurlRight();
//    _drive->TurlRight();
//    _power->setMicrowavePower (500);
//    _drive->Stop();
//    _drive->TurlLeft();
//    _drive->TurlLeft();
//    _power->setMicrowavePower(200) ;
//    _drive->Stop();
//    _drive->TurlRight();
//    _drive->TurlRight();
//    _drive->Stop();
//    _power->setMicrowavePower(0);
//    _notification->StopNotification();
//}
