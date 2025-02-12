#include "../Header/Infrastructure.hpp"
using namespace batiment;
Infrastructure::Infrastructure(string name, string adress)
{
    this->Name = name;
    this->Adress = adress;
}
void Infrastructure::setName(string name)
{
    this->Name = name;
}
void Infrastructure::setAdress(string adress)
{
    this->Adress = adress;
}
string Infrastructure::getName()
{
    return (this->Name);
}
string Infrastructure::getAdress()
{
    return (this->Adress);
}
