#include "../Header/Enseignant.hpp"
using namespace humain;
Enseignant::Enseignant(string Name, string Genre, int Age) : Person(Name, Genre, Age)
{
    //
}
void Enseignant::setAssign(string assign)
{
    this->Assign = assign;
}
void Enseignant::setClass(string cclass)
{
    this->Class = cclass;
}
string Enseignant::getAssign()
{
    return (this->Assign);
}
string Enseignant::getClass()
{
    return (this->Class);
}
void Enseignant::Presentation()
{
	cout << "NOM       : " << this->getName() << endl;
	cout << "GENRE     : " << this->getGenre() << endl;
	cout << "AGE       : " << this->getAge() << endl;
	cout << "PROF      : " << this->Assign << endl;
	cout << "EN CHARGE : " << this->Class << endl;
}
