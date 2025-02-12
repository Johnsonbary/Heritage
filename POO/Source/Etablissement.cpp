#include "../Header/Etablissement.hpp"
using namespace batiment;
Etablissement::Etablissement(string name, string adress) : Infrastructure(name, adress)
{
    //
}
Etudiant Etablissement::Inscription(Etudiant eleve, string ID, string filiere, string annee)
{
    eleve.setId(ID);
    eleve.setFiliere(filiere);
    eleve.setAnnee(annee);
    return (eleve);
}
Enseignant Etablissement::Assignment(Enseignant chercheur, string assign, string cclass)
{
    chercheur.setAssign(assign);
    chercheur.setClass(cclass);
    return (chercheur);
}
