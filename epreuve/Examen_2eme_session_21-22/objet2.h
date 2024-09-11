#ifndef OBJET2_H
#define OBJET2_H

#include "objet.h"

class objet2 : public objet {
private:
    int val2;
public:
    objet2(int valeur1, int valeur2) : objet(valeur1), val2(valeur2) {
        std::cout << "Appel constructeur d'objet2 à l'adresse : " << this << std::endl;
    }

    ~objet2() {
        std::cout << "Appel destructeur d'objet2 à l'adresse : " << this << std::endl;
    }

    void affiche() const override {
        objet::affiche();
        std::cout << "Valeur supplémentaire : " << val2 << std::endl;
    }
};

#endif // OBJET2_H
