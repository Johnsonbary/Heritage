#ifndef CLASS_MEDECIN
#define CLASS_MEDECIN

#include <string>
#include "../Header/Person.hpp"  // Supposons que Person est une autre classe dont Medecin hérite
using namespace std;
namespace humain
{
class Medecin : public Person {
private:
    string Speciality;
    string Grade;  // infirmiere, docteur, interne qualifiant, professeur

public:
    // Constructeur
    Medecin(string , string , string , string , int);

    // Setters
    void setSpetiality(string speciality);
    void setGrade(string grade);

    // Getters
    string getSpetiality();
    string getGrade();
    void Presentation();
};
}
#endif
