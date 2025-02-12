#ifndef CLASS_ETUDIANT
#define CLASS_ETUDIANT
#include "../Header/Person.hpp"
#include <string>
#include <iostream>
using namespace std;
namespace humain
{
class Etudiant : public Person
{
    private:
        string Id;
        string Filiere;
        string Annee;
    public:
        Etudiant(string , string , int );
        void setId(string );
        void setFiliere(string );
        void setAnnee(string );
        string getId();
        string getFiliere();
        string getAnnee();
        void Presentation();
};
}
#endif
