#include "Fichier.h"

void Liste::ajouter(objet* obj) {
    Node* newNode = new Node(obj);

    if (tete) {
        courant = tete;      
        while (courant->suivant != nullptr) {
            courant = courant->suivant;
        }
        courant->suivant = newNode;
    } else {
        tete = newNode;
    }
    courant = newNode;
}

void Liste::afficher() const {
    std::cout << "Liste des objets :" << std::endl;
    Node* temp = tete; 

    while (temp != nullptr) {
        temp->data->affiche();
        temp = temp->suivant;
    }
}

Liste::~Liste() {
    Node* courant = tete;

    while (courant != nullptr) {
        Node* suivant = courant->suivant;
        delete courant->data;
        delete courant;
        courant = suivant;
    }
    std::cout << "Appel destructeur" << std::endl;
}
