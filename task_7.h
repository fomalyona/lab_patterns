////Facade предоставляет простой интерфейс к сложной системе классов, библиотеке или фреймворку.
/// он предоставляет именно те функции, которые нужны клиенту, и скрывает все остальные.
#include <string>
#include <cstdio>
#include <list>

// на с++ нет реализации EventHandler, поэтому реализация на С#
//https://dotnetfiddle.net/70vY84



//
//enum EventType {
//    EVENT_FIRST,
//    EVENT_SECOND,
//};
//
//class Drive
//{
//public:
//    TangibleEvent<Event> *driveevent = new TangibleEvent<Event>();
////    virtual void driveEvent(TEvent<const std::string&, unsigned int> e) = 0;
//private:
//    std::string twist;
//public:
//    std::string getTwist() const;
//    void setTwist(const std::string &value);
//    Drive();
//    void TurlLeft();
//    void TurlRight();
//    void Stop();
//    virtual std::string ToString();
//};
//
//
//class Power
//{
//public:
//    TangibleEvent<Drive> *powerevent = new TangibleEvent<Drive>();
////    virtual void driveEvent(EventType e) = 0;
//private:
//    int _power = 0;
//public:
//    int getMicrowavePower() const;
//    void setMicrowavePower(int value);
//    std::string ToString();
//};
//class Notification
//{
//public:
////    virtual void driveEvent(EventType e) = 0;
//    TangibleEvent<Drive> *notificationevent = new TangibleEvent<Drive>();
//private:
//    std::string mess;
//public:
//    std::string MessageFin;
//    std::string getMessageFin() const;
//    void setMessageFin(const std::string &value);
//    void StartNotification();
//    void StopNotification();
//    virtual std::string ToString();
//};
//
//class Microwave
//{
//private:
//    Drive *_drive;
//    Power *_power;
//    Notification *_notification;
//public:
//    virtual ~Microwave()
//    {
//        delete _drive;
//        delete _power;
//        delete _notification;
//    }
//
//    explicit Microwave(Drive *drive, Power *power, Notification *notification);
//    void Defrost();
//};                                                                                                                                                                                                                                                                                                                                                                                                                                                 ////Facade предоставляет простой интерфейс к сложной системе классов, библиотеке или фреймворку.
/// он предоставляет именно те функции, которые нужны клиенту, и скрывает все остальные.
#include <string>
#include <cstdio>
#include <list>

// на с++ нет реализации EventHandler, поэтому реализация на С#
//https://dotnetfiddle.net/70vY84



//
//enum EventType {
//    EVENT_FIRST,
//    EVENT_SECOND,
//};
//
//class Drive
//{
//public:
//    TangibleEvent<Event> *driveevent = new TangibleEvent<Event>();
////    virtual void driveEvent(TEvent<const std::string&, unsigned int> e) = 0;
//private:
//    std::string twist;
//public:
//    std::string getTwist() const;
//    void setTwist(const std::string &value);
//    Drive();
//    void TurlLeft();
//    void TurlRight();
//    void Stop();
//    virtual std::string ToString();
//};
//
//
//class Power
//{
//public:
//    TangibleEvent<Drive> *powerevent = new TangibleEvent<Drive>();
////    virtual void driveEvent(EventType e) = 0;
//private:
//    int _power = 0;
//public:
//    int getMicrowavePower() const;
//    void setMicrowavePower(int value);
//    std::string ToString();
//};
//class Notification
//{
//public:
////    virtual void driveEvent(EventType e) = 0;
//    TangibleEvent<Drive> *notificationevent = new TangibleEvent<Drive>();
//private:
//    std::string mess;
//public:
//    std::string MessageFin;
//    std::string getMessageFin() const;
//    void setMessageFin(const std::string &value);
//    void StartNotification();
//    void StopNotification();
//    virtual std::string ToString();
//};
//
//class Microwave
//{
//private:
//    Drive *_drive;
//    Power *_power;
//    Notification *_notification;
//public:
//    virtual ~Microwave()
//    {
//        delete _drive;
//        delete _power;
//        delete _notification;
//    }
//
//    explicit Microwave(Drive *drive, Power *power, Notification *notification);
//    void Defrost();
//};