#include "Fichier.h"



 void Liste::ajouter(objet* obj ) {

    Node* newNode = new Node(obj);

        if (tete) {

             courant = tete;      
            while(courant->suivant != nullptr){
                courant = courant->suivant ;
            }

            courant->suivant = newNode;
            courant = newNode;

        } else {

            tete = newNode;
            courant = tete;
        }
 }


void Liste::afficher() const {
    
    cout << "Liste des objets :" << endl;
    Node* temp = tete; 

    while (temp != nullptr) {
        
        temp->data->affiche();
        temp = temp->suivant;
    }
}


//  Liste::~Liste() {

//     Node* courant= tete;
//     while (courant != nullptr) {

//         Node* temp = courant->suivant;
        
//         delete temp->data; 
//         delete temp;       
//         courant = courant->suivant ;

//         }
//         cout << "Liste détruite" << endl;
// }

Liste::~Liste() {

    Node* courant = tete;

    while (courant != nullptr) {

        Node* suivant = courant->suivant;
        delete courant->data;
        delete courant;     
        courant = suivant;  

    }
    cout << "Appel destructeur" << endl;
}