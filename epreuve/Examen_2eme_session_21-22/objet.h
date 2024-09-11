#ifndef OBJET_H
#define OBJET_H

#include <iostream>

class objet {
protected:
    int val;
public:
    objet(int valeur) : val(valeur) {
        std::cout << "Appel constructeur d'objet à l'adresse : " << this << std::endl;
    }

    virtual ~objet() {
        std::cout << "Appel destructeur d'objet à l'adresse : " << this << std::endl;
    }

    virtual void affiche() const {
        std::cout << "Valeur : " << val << std::endl;
    }
};

#endif // OBJET_H
