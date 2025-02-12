#ifndef CLASS_PERSON
#define CLASS_PERSON
#include <string>

using namespace std;
namespace humain
{
class Person
{
    private:
        string name;
        string genre;
        int age;
    public:
        Person(string , string, int);
        string getName();
        string getGenre();
        int getAge();
        void setName(string );
        void setAge(int );
        void setGenre(string);
};
}
#endif
