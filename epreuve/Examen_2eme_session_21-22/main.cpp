#include "Fichier.h"
#include "objet1.h"
#include "objet2.h"
#include "objet3.h"

int main() {
    Liste liste;

    objet1 obj1(10, 15);
    objet2 obj2(20, 25);
    objet3 obj3(30, 35);

    liste.ajouter(&obj1);
    liste.ajouter(&obj2);
    liste.ajouter(&obj3);

    liste.afficher();

    return 0;
}
