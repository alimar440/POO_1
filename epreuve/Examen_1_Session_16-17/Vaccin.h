#ifndef VACCIN_H
#define VACCIN_H

using namespace std ;

#include <iostream>

// prix du conditionnement d'une unité
const double COND_UNITE = 0.5;
// prix de base de fabrication d'une unité
const double PRIX_BASE = 1.5;
// majoration du prix de fabrication pour vaccin "high tech"
const double MAJORATION_HIGHTECH = 0.5;
// reduction du cout du à la delocalisation
const double REDUCTION_DELOC = 0.2;
enum Fabrication {Standard, HighTech};


class Vaccin {
    protected :
        char* nom ;
        double volumeDose ;
        int nombreDose ;
        Fabrication fabication ;

    public: 

        Vaccin(char* , double , int , Fabrication F = Standard)  ;
        double  conditionnement(){ return nombreDose * volumeDose * COND_UNITE ; } ;
       virtual double  production(){ return  fabrication() + conditionnement() ; } ;
        double  fabrication() ;
        
        virtual ~Vaccin() ;
        virtual void  affiche() ;


};


#endif  //VACCIN_H