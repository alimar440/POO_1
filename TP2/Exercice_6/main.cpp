#include"Ensemble.hpp"

int main() {

    Ensemble ensemble(10);

    cout<<"test" ;
    // Ajout d'éléments à la liste
    ensemble.ajouter(1);
    ensemble.ajouter(2);
    ensemble.ajouter(3);
    cout<<"test" ;

    // Affichage de l'ensemble initial
    ensemble.printf();
    cout << "Cardinalité de l'ensemble: " << ensemble.cardinal() <<endl;

    // Ajout de nouveaux éléments
    ensemble.ajouter(10);
    ensemble.ajouter(20);
    ensemble.ajouter(2); // Devrait indiquer que l'élément est déjà présent

    // Affichage de l'ensemble après ajout
    ensemble.printf();
    cout << "Cardinalité de l'ensemble après ajout: " << ensemble.cardinal() << endl;

    // Suppression d'un élément
    ensemble.supprimer(2);

    // Affichage de l'ensemble après suppression
    ensemble.printf();
    cout << "Cardinalité de l'ensemble après suppression: " << ensemble.cardinal() << endl;

    // Vérification de la présence d'un élément
    int element = 10;
    if (ensemble.contient(element)) {
        cout << "L'ensemble contient l'élément " << element << endl;
    } else {
        cout << "L'ensemble ne contient pas l'élément " << element <<endl;
    }

    return 0;
}