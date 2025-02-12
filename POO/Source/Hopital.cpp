#include "../Header/Hopital.hpp"
using namespace batiment;
Hopital::Hopital(string type, string name, string adress) : Infrastructure(name, adress)
{
    this->Type = type; 
}
void Hopital::setType(string type)
{
    this->Type = type;
}
string Hopital::getType()
{
    return (this->Type);
}
