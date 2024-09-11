#include "Delocaliser.h"

 void Delocalise::affiche(){
    Vaccin::affiche() ;
     if(deloc){
        cout<<nom<<"est delocalise"<<endl ;
    }else 
         cout<<nom<<"n'est pas delocalise"<<endl ;
 }

 double Delocalise::production(){
    double cout ;
    double c = Vaccin::production() ;

    if(deloc){
       cout =  c - c * REDUCTION_DELOC ;
    }else 
        cout =  c / 2 ;
    
    return cout ;
 }