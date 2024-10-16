#include "Vaccin.h"
#include "Delocaliser.h"

class Compagnie {
        char* name ; 
        int max_size ;
        Vaccin **stock ;
    public : 
        Compagnie(char* , int ) ;
        void ajoute(Vaccin* Vac ) ;
        virtual ~Compagnie() ;
        void affiche() ;
        double calcul() ;


};
