
#include "Adapter.h"

Kost::Kost() = default;

int Kost::Brosok()
{
// Случайное числоот 1 до 6.

    int res = std::rand() % 6 + 1;
//    int res = r->Next(6) + 1;
    return res;
}



std::string Gamer::getName() const
{
    return Name;
}

void Gamer::setName(const std::string &value)
{
    Name = value;
}

Gamer::Gamer(const std::string &name)
{
    setName(name);
}

std::string Gamer::ToString()
{
  
#include "Adapter.h"

Kost::Kost() = default;

int Kost::Brosok()
{
// Случайное числоот 1 до 6.

    int res = std::rand() % 6 + 1;
//    int res = r->Next(6) + 1;
    return res;
}



std::string Gamer::getName() const
{
    return Name;
}

void Gamer::setName(const std::string &value)
{
    Name = value;
}

Gamer::Gamer(const std::string &name)
{
    setName(name);
}

std::string Gamer::ToString()
{
    return getName();
}

int Gamer::SeansGame(Adapter *ig)
{
    return ig->Brosok();
}

Monet::Monet()
{
}

int Monet::BrosokM()
{
//Случаное число 1 или 2.
    int res = std::rand() % 2 + 1;
    return res;
}


AdapterGame::AdapterGame(Monet *mt)
{
    mot = mt;
}

int AdapterGame::Brosok()
{
    return mot->BrosokM();
}
