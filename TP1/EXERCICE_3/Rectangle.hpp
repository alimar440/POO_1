#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include<iostream>
using namespace std ;

class Rectangle
{   private :
        double L ;
        double H ;
    public:

        Rectangle(unsigned int a, unsigned int b) ;
        unsigned int Getlargeur()const  {return L;}  ;
        unsigned int GetHauteur()const  {return H;} ;
        unsigned int perimetre()const   {return 2*(L+H) ; }  ;
        unsigned int surface()const{ return L*H ;} ;
        void SetHauteur(unsigned int a )    {H=a ; } ;
        void SetLargeur(unsigned int a )    {L=a ; } ;
        bool Compare(Rectangle& R1) const ;
        void affiche() const ;

        bool operator==(Rectangle& R2)  ;
        friend ostream& operator<<(ostream& sorti , Rectangle R1) ; 
        ~Rectangle() ;


};
#endif