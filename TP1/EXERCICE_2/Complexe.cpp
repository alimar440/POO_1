#include "Complete.hpp"
#include <cmath>
Complexe::Complexe(double a , double b){
    x=a ; y=b ;
}
double Complexe::module()const{
    return sqrt(x*x + y*y) ;
}
Complexe Complexe::ajouter(Complexe& C2)const{
        Complexe C3(x+C2.x , y+C2.y);
        return C3;
    }
Complexe Complexe::multiplier(Complexe& C2)const {
        Complexe C3(x*C2.y + y*C2.x , y*C2.y-x*C2.x) ;
        return C3 ;
    }
void Complexe::affiche(){

    cout<<"\n"<<x<<"+"<<y<<".i\n" ;
}
Complexe Complexe::operator+(Complexe& C2){
    Complexe C3(x+C2.x , y+C2.y);
        return C3;
 }

Complexe Complexe::operator*(Complexe& C2){
    Complexe C3(x*C2.y + y*C2.x , y*C2.y-x*C2.x) ;
    return C3 ;
}

ostream& operator<<(ostream& sorti ,Complexe C1){
    sorti<<"\n"<<C1.x<<"+"<<C1.y<<".i\n" ;
    return sorti ;
}