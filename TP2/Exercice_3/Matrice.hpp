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
    Matrice(const Matrice& Mat) ;
    ~Matrice() ;
    int GetElement(int r , int c)const {return element[r][c] ; } 
    void SetElement(int r , int c , int el ) ;
    Matrice produit(const Matrice Mat ) const ;
    Matrice& operator=(const Matrice& Mat ) ;
    int operator[](int )
    void saisie() ;
    void printf() ;
};

#endif 