#include "Vaccin.h"
#include <cstring>

Vaccin::Vaccin(char* name , double volume, int number , Fabrication F  ) 
{
    cout<<"Appel du constructeur d'adresse "<<this<<"  ." <<endl ;
    volumeDose = volume ;
    nombreDose = number ;
    fabication = F ;

    nom = new char[strlen(name) + 1 ] ;
    strcpy(nom , name ) ;
}
double Vaccin::fabrication(){
 
    double cout = nombreDose * volumeDose * PRIX_BASE ;

    if(HighTech == fabication ){

        cout += cout * MAJORATION_HIGHTECH ;

    }

    return cout ;
}

Vaccin::~Vaccin() {

    delete[] nom ;

    cout<<"Appel du destructeur Vaccin simple. "<<endl ;
}
void Vaccin::affiche() {

    cout<<nom<<endl ; 
    cout<<"volume/dose :  "<<volumeDose<<endl ;
    cout<<"nombre de doses :  "<<nombreDose<<endl ;

    if(fabication == 0 )
      cout<<"mode de fabrication Strandard "<<endl ;
    else{
      cout<<"mode de fabrication HighTech "<<endl ;
    }

}