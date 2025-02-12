#include "../Header/Person.hpp"
using namespace humain;
Person::Person(string Name, string Genre, int Age)
{
    this->name = Name;
    this->genre = Genre;
    this->age = Age;
}
void Person::setName(string your_name)
{
    name = your_name;
}
void Person::setAge(int your_age)
{
    age = your_age;
}
string Person::getName()
{
    return (name);
}
int Person::getAge()
{
    return (age);
}
string Person::getGenre()
{
	return (this->genre);
}
