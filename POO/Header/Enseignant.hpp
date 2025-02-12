#ifndef CLASS_ENSEIGNANT
#define CLASS_ENSEIGNANT
#include "../Header/Person.hpp"
#include <string>
#include <iostream>
using namespace std;
namespace humain
{
class Enseignant:public Person
{
    private:
        string Assign;
        string Class;
    public:
        Enseignant(string, string, int );
        void setAssign(string );
        void setClass(string );
        string getAssign();
        string getClass();
        void Presentation();
};
}
#endif
