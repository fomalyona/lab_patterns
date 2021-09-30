//
// Created by Alyona on 19.09.2021.
//

#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>

class Adapter
{
public:
    virtual int Brosok() = 0;
};

class Kost : public Adapter
{
private:
public:
    ~Kost() = default;

    Kost();
    int Brosok() override;
};


class Gamer
{
private:
    std::string Name;

public:
    explicit Gamer(const std::string &name);
    std::string getName() const;
    void setName(const std::string &value);
    std::string ToString();
    int SeansGame(Adapter *ig);
};


class Monet
{
private:

public:
    ~Monet() = default;

    Monet();
    int BrosokM();
};



class AdapterGame : public Adapter
{
private:
    Monet *mot;
public:
    ~AdapterGame()
    {
        delete mot;
    }

    AdapterGame(Monet//
// Created by Alyona on 19.09.2021.
//

#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>

class Adapter
{
public:
    virtual int Brosok() = 0;
};

class Kost : public Adapter
{
private:
public:
    ~Kost() = default;

    Kost();
    int Brosok() override;
};


class Gamer
{
private:
    std::string Name;

public:
    explicit Gamer(const std::string &name);
    std::string getName() const;
    void setName(const std::string &value);
    std::string ToString();
    int SeansGame(Adapter *ig);
};


class Monet
{
private:

public:
    ~Monet() = default;

    Monet();
    int BrosokM();
};



class AdapterGame : public Adapter
{
private:
    Monet *mot;
public:
    ~AdapterGame()
    {
        delete mot;
    }

    AdapterGame(Monet *mt);
    int Brosok();
};