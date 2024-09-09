#include "fichier.h"

int main() {
    Liste liste;

  
    objet* obj1 = new objet(10);
    objet* obj2 = new objet(20);
    objet* obj3 = new objet(30);

   
    liste.ajouter(obj1);
    liste.ajouter(obj2);
    liste.ajouter(obj3);

    liste.afficher();

  
    return 0;
}
