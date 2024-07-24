#include <iostream>
#include "vect.h" 

int main(){
    vect v(2) ;
    vectb v1(4 , 7) ;

    v[1] = 1 ;
    v[2] = 2 ;
    v1[5] = 2 ;
    v1[6] = 5 ;
    v1[4] = 5 ;

    return 0 ;
}