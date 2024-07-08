#include"Ensemble.hpp"

int main() {

    Ensemble ensemble(10);
    
    
    // Ajout d'éléments à la liste
    ensemble.ajouter(1);
    ensemble.ajouter(2);
    ensemble.ajouter(3);
    Ensemble E1 = ensemble ;

    // Affichage de l'ensemble initial
    ensemble.printf();
    cout <<endl<< "Cardinalite de l'ensemble: " << ensemble.cardinal() <<endl;

    // Ajout de nouveaux éléments
    ensemble.ajouter(10);
    ensemble.ajouter(20);
    ensemble.ajouter(2) ; // Devrait indiquer que l'élément est déjà présent

    // Affichage de l'ensemble après ajout
    ensemble.printf();
    
    cout << "\n\nCardinalite de l'ensemble apres ajout: " << ensemble.cardinal() << endl;
    
    // Suppression d'un élément
    ensemble.supprimer(2);

    // Affichage de l'ensemble après suppression
    cout<<"affichage apres suppresion : " ;
    ensemble.printf();
    
    cout << "\n\nCardinalite de l'ensemble apres suppression: " << ensemble.cardinal() << endl;

    // Vérification de la présence d'un élément
    int element = 10;
    if (ensemble.contient(element)) {
        cout << "\nL'ensemble contient l'element " << element << endl;
    } else {
        cout << "\nL'ensemble ne contient pas l'element " << element <<endl;
    }

    return 0;
}