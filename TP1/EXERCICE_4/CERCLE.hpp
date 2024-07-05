#ifndef CERCLE_HPP
#define CERCLE_HPP

#include<iostream>
# define M_PI 3.14159265358979323846 
using namespace std ;

struct point{
    unsigned int Cx ;
    unsigned int Cy ;
} ;
class Cercle{

    unsigned int  R ;
    point C ;
 
 public:

    Cercle(unsigned int a, point p  ) ;
    unsigned int GetRayon()const{return R;}  ;
    point GetCentre()const{return C;} ;
    unsigned int perimetre()const{return 2*R*M_PI ; }  ;
    unsigned int surface()const{ return M_PI*R*R ;} ;
    void SetRayon(unsigned int a );
    void SetCentre( point a ) ;
    bool Compare(Cercle& C1) const ;
    void affiche() const ;


    bool operator==(Cercle& C1)  ;
    friend ostream& operator<<(ostream& sorti , Cercle C1) ; 



};
#endif