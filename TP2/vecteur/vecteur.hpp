#ifndef VECTEUR_HPP
#define VECTEUR_HPP

#include <iostream> 

using namespace std ;

class vecteur{
    int m_dimension ;
    int *m_x ;
public:
//contructeur et constructeur de copie 
    vecteur(int d) { 
        m_dimension = d;
        cout <<"\nappel de constructeur\n" ;
        m_x = new int[d] ;
        for(int i=0 ; i<d ;i++) m_x[i]= i ;
     }

    vecteur(const vecteur &v);
    
//destructeur
    ~vecteur() {delete m_x ;}

   int dimension()  { return m_dimension; }
    int composante(int i ) {return m_x[i] ;} ;
    void composante(int i , int x){ m_x[i]=x ;};
    
    
    
//test sur operator
    int operator*(vecteur& v2) ;

    vecteur operator+(vecteur &v2) ;
    friend ostream& operator<<(ostream &sorti , vecteur v1) ;
    vecteur operator=(vecteur &v2) ;
   // friend iostream& operator>>(iostream &entree , vecteur &v) ;

    
};


#endif 