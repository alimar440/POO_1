#ifndef OBJET1_H
#define OBJET1_H

#include "objet.h"

class objet1 : public objet {
private:
    int val1;
public:
    objet1(int valeur1, int valeur2) : objet(valeur1), val1(valeur2) {
        std::cout << "Appel constructeur d'objet1 à l'adresse : " << this << std::endl;
    }

    ~objet1() {
        std::cout << "Appel destructeur d'objet1 à l'adresse : " << this << std::endl;
    }

    void affiche() const override {
        objet::affiche();
        std::cout << "Valeur supplémentaire : " << val1 << std::endl;
    }
};

#endif // OBJET1_H
