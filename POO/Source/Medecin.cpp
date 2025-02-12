#include "../Header/Medecin.hpp"
#include <iostream>
using namespace humain;
Medecin::Medecin(string spetiality, string grade, string Name, string Genre, int Age) : Person(Name, Genre, Age)
{
    this->Speciality = spetiality;
    this->Grade = grade; 
}
void Medecin::setSpetiality(string spetiality)
{
    this->Speciality = spetiality;
}
void Medecin::setGrade(string grade)
{
    this->Grade = grade;
}
string Medecin::getSpetiality()
{
    return (this->Speciality);
}
string Medecin::getGrade()
{
    return (this->Grade);
}
void Medecin::Presentation()
{
	cout << "NOM             : " << this->getName() << endl;
	cout << "GENRE           : " << this->getGenre() << endl;
	cout << "AGE     		 : " << this->getAge() << endl;
	cout << "SPECIALITE      : " << this->Speciality << endl;
	cout << "GRADE           : " << this->Grade << endl;
}
