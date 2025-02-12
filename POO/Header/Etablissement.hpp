#ifndef CLASS_ETABLISSEMENT
#define CLASS_ETABLISSEMENT
#include <string>
#include "../Header/Etudiant.hpp"
#include "../Header/Enseignant.hpp"
#include "../Header/Infrastructure.hpp"
using namespace std;
using namespace humain;
namespace batiment
{
class Etablissement: public Infrastructure
{
    public:
        Etablissement(string ,string );
        Etudiant Inscription(Etudiant, string, string, string);
        Enseignant Assignment(Enseignant, string , string );
};
}
#endif
