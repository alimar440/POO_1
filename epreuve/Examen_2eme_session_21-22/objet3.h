#ifndef OBJET3_H
#define OBJET3_H

#include "objet.h"

class objet3 : public objet {
private:
    int val3;
public:
    objet3(int valeur1, int valeur2) : objet(valeur1), val3(valeur2) {
        std::cout << "Appel constructeur d'objet3 à l'adresse : " << this << std::endl;
    }

    ~objet3() {
        std::cout << "Appel destructeur d'objet3 à l'adresse : " << this << std::endl;
    }

    void affiche() const override {
        objet::affiche();
        std::cout << "Valeur supplémentaire : " << val3 << std::endl;
    }
};

#endif // OBJET3_H
