#ifndef COMPLEXE_HPP
#define COMPLEXE_HPP

#include<iostream>
using namespace std ;

class Complexe{
    double x ;
    double y ;
 public:

    Complexe(double,double) ;
    double reelle(){return x ;} const ;
    double imaginaire(){return y ;} const ;
    double module() const ;
    Complexe ajouter(Complexe& C2) const ;
    Complexe multiplier(Complexe& C2) const;
    void affiche() ;
    Complexe operator+(Complexe& C2) ;
    friend ostream& operator<<(ostream& sorti , Complexe C1) ;
    Complexe operator*(Complexe& C2) ;
} ;

#endif