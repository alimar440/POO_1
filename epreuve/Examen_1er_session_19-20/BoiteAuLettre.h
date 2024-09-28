#include "Courriers.h"
#include "Lettre.h"
#include "colis.h"

class BoiteAuLettre{
        char* nom ;
        int volumeBoite ;
        int hauteur ;
        int max ;
        int courant ;
        Courriers ** couriers ;
    public : 
        BoiteAuLettre( char* n ,int V , int H , int M ) ;
        ~BoiteAuLettre() ;
        void ajoute(Courriers *C ) ; 
        void affiche() ;
};

