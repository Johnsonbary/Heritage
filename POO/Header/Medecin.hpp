#ifndef CLASS_MEDECIN
#define CLASS_MEDECIN

#include <string>
#include "../Header/Person.hpp"  
using namespace std;
namespace humain
{
class Medecin : public Person {
private:
    string Speciality;
    string Grade;  

public:
    
    Medecin(string , string , string , string , int);
    void setSpetiality(string speciality);
    void setGrade(string grade);
    string getSpetiality();
    string getGrade();
    void Presentation();
};
}
#endif
