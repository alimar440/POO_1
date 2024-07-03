#ifndef CERCLE_HPP
#define CERCLE_HPP

#include<iostream>
# define M_PI 3.14159265358979323846 
using namespace std ;

class Cercle{
    unsigned int  R ;
    unsigned int C ;
   
 public:

    Cercle(unsigned int a, unsigned int b ) ;
    unsigned int GetRayon()const{return R;}  ;
    unsigned int GetCentre()const{return C;} ;
    unsigned int perimetre()const{return 2*R*M_PI ; }  ;
    unsigned int surface()const{ return M_PI*R*R ;} ;
    void SetRayon(unsigned int a ){ R=a ;} ;
    void SetCentre(unsigned int a ){C=a ; } ;
    bool Compare(Cercle& C1) const ;
    void affiche() const ;

    bool operator==(Cercle& C1)  ;
    friend ostream& operator<<(ostream& sorti , Cercle C1) ; 



};
#endif