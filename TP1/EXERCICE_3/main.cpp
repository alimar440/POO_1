#include "Rectangle.hpp"

int main(){

    Rectangle R1(1,2) , R2(1,2); 

    cout<<R1 ;
    R1.SetHauteur(4);
    R1.SetLargeur(4);
    cout<<R1 ;
    if(R2==R1){
        cout<<"\ntrue" ;
    }else{
        cout<<"\nfalse" ;
    }
    return 0 ;
}