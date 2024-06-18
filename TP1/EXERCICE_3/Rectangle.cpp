#include "Rectangle.hpp"

    Rectangle::Rectangle(unsigned int a, unsigned int b){
        H= a ; L=b;
    }
    bool Rectangle::Compare(Rectangle& R1) const{
        if(H==R1.H && L==R1.L){
            return true ;
        }else{
            return false ;
        }
    } ;
    void Rectangle::affiche() const {
        cout<<"longueur = "<<H <<"largeur="<<L<<"\n" ;
    }

    bool Rectangle::operator==(Rectangle& R2){
        if(H==R2.H && L==R2.L){
            return true ;
        }else{
            return false ;
        }
    }
    ostream& operator<<(ostream& sorti , Rectangle R1){
        sorti<<"longueur = "<<R1.H <<"  largeur="<<R1.L<<"\n" ;
        return sorti ;
    }