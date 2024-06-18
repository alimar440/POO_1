#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include<iostream>
using namespace std ;

class Rectangle{
    double L ;
    double H ;
 public:

    Rectangle(unsigned int a, unsigned int b) ;
    unsigned int Getlargeur()const{return L;}  ;
    unsigned int GetHauteur()const{return H;} ;
    unsigned int perimetre()const{return 2*(L+H) ; }  ;
    unsigned int surface()const{ return L*H ;} ;
    Rectangle* SetHauteur(unsigned int a ){H=a ; return this ;} ;
    Rectangle* SetLargeur(unsigned int a ){L=a ; return this ;} ;
    bool Compare(Rectangle& R1) const ;
    void affiche() const ;

    bool operator==(Rectangle& R2)  ;
    friend ostream& operator<<(ostream& sorti , Rectangle R1) ; 



};
#endif