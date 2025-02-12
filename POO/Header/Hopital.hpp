#ifndef CLASS_HOPITAL
#define CLASS_HOPITAL
#include "../Header/Infrastructure.hpp"
#include <string>
using namespace std;
namespace batiment
{
class Hopital: public Infrastructure
{
    private:
        string Type;//public ou prive
    public:
        Hopital(string , string, string);
        void setType(string );
        string getType();
};
}
#endif
