#ifndef FINALTEST_HPP
#define FINALTEST_HPP
#include <iostream>
#include <cstring>


using namespace std ;

struct paire{
    char* cle ;
    char* valeur ;

    
} ;

class TableAssociation {
         int tailleMax ;
         paire** Tab ;

    public :
    void affiche() ;
         TableAssociation(int) ;
         ~TableAssociation() ;
         void put(char* key , char* val) ;
         paire* get(char* key) ;
         void remove(char* key) ;
         bool contains(char* key) const ;
         int size () const ;
         bool isEmpty() const ;

         TableAssociation(TableAssociation& T) ;
         TableAssociation& operator=(TableAssociation& T) ;


} ;



#endif 