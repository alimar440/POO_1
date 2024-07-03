#ifndef MATRICE_HPP
#define MATRICE_HPP 

#include<iostream> 
using namespace std ;

class Matrice{
     int row ;
     int col ;
     int **element ;
public:
    Matrice(int r , int c) ;
     ~Matrice() ;
    int GetElement(int r , int c)const{return element[r][c] ; } 
    void SetElement(int r , int c , int el ) const;
    Matrice produit(const Matrice Mat ) const ;
    void printf() ;
};

#endif 