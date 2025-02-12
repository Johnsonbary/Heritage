#include <iostream>
#include "../Header/Person.hpp"
#include "../Header/Infrastructure.hpp"
#include "../Header/Medecin.hpp"
#include "../Header/Hopital.hpp"
#include "../Header/Etudiant.hpp"
#include "../Header/Etablissement.hpp"
#include "../Header/Enseignant.hpp"
using namespace std;
using namespace humain;
using namespace batiment;
int main()
{
    Etudiant eleve = Etudiant("John", "Masculin", 19);
    Enseignant chercheur = Enseignant("Mitchel", "Masculin", 39);
    Medecin professeur = Medecin("Gynecologie", "Professeur", "Jean", "Masculin", 43);
    Etablissement Science = Etablissement("MI", "Ankatso Antananarivo 101");
    Hopital HJRA = Hopital("Public", "HUJRA", "Anosikely");
    chercheur = Science.Assignment(chercheur, "Analyse", "L1->L3");
    eleve = Science.Inscription(eleve, "AO2025//45", "MI", "L2");
    cout << "INFORMATION DE L'ETUDIANT:" << endl;
    eleve.Presentation();
    cout << "INFORMATION DE L'ENSEIGNANT:" << endl;
    chercheur.Presentation();
    cout << "INFORMATION DU MEDECIN:" << endl; 
    professeur.Presentation(); 
    return 0;
}
