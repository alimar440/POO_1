#ifndef PROFESSEUR_HPP
#define PROFESSEUR_HPP

#include "salarie.hpp"

class Professeur : public Salarie {
private:
    char* Diplome;
    char* Matiere[10]; // On suppose qu'il y a au maximum 10 matières
public:
    Professeur(char*, char*, char*);
    Professeur(const Professeur&);
    Professeur& operator=( Professeur&);
    ~Professeur();
    void affiche();
    void setMatiere(char*);
};

#endif
