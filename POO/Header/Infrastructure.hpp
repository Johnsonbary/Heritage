#ifndef CLASS_INFRASTRUCTURE
#define CLASS_INFRASTRUCTURE
#include <string>
using namespace std;
namespace batiment
{
class Infrastructure
{
    private:
        string Name;
        string Adress;
    public:
        Infrastructure(string , string);
        void setName(string );
        void setAdress(string );
        string getName();
        string getAdress();
};
}
#endif
