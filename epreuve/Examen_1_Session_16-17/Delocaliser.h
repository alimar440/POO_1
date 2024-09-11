#ifndef DELOCALISER_H
#define DELOCALISER_H

#include "Vaccin.h" 

class  Delocalise : public Vaccin { 
        bool deloc ;
    public :

        Delocalise(char* name , double volume , int number , Fabrication F , bool value): Vaccin(name , volume , number , F)
         , deloc(value) {};
         ~Delocalise( ){cout<<"Appel du destructeur Delocalise. "<<endl ;} ;
         void affiche() ;
         double  production() ;

};

#endif //DELOCALISER_H