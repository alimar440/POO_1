#include <iostream>
#include "vect.h"


vect::vect(int n){
    nb = n ;
    adr = new int(n) ;
}
vect::~vect(){
    delete[] adr ;
}
int& vect::operator[](int i){
    return adr[i] ;
}
int& vectb::operator[](int i){
    
    return this->vect::operator[](i - inf ) ;
}
vectb::vectb(int S , int I) : vect(S-I +1){
    inf = I ;
    sup = S ;
}
vectb::~vectb(){
    vect::~vect() ;
};

