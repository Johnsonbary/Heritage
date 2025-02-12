#include "../Header/Etudiant.hpp"
using namespace humain;
Etudiant::Etudiant(string Name, string Genre, int Age) : Person(Name, Genre, Age)
{
    //
}
void Etudiant::setId(string ID)
{
    this->Id = ID;
}
void Etudiant::setFiliere(string filiere)
{
    this->Filiere = filiere;
}
void Etudiant::setAnnee(string annee)
{
    this->Annee = annee;
}
string Etudiant::getId()
{
    return (this->Id);
}
string Etudiant::getFiliere()
{
    return (this->Filiere);
}
string Etudiant::getAnnee()
{
    return (this->Annee);
}
void Etudiant::Presentation()
{
	cout << "NOM     : " << this->getName() << endl;
	cout << "GENRE   : " << this->getGenre() << endl;
	cout << "AGE     : " << this->getAge() << endl;
	cout << "ID      : " << this->Id << endl;
	cout << "MENTION : " << this->Filiere << endl;
	cout << "GRADE   : " << this->Annee << endl;
}
