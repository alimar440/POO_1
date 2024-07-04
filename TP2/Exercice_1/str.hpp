#ifndef STR_HPP
#define STR_HPP



#include<iostream>
#include<cstring> 

using namespace std ;


class str{
        int size ;
        char* word ;
    public:

    //les Constructeurs de la classe str
        str() ;
        str(const char* strstr) ;
        str(const str& strstr) ;
    //les sur-definitions d'operateur 

        str& operator=(const str& strstr ) ;
        int operator==(sonst str& strstr ) const; 
        str operator+(const str& strstr ) const ;
        char& operator[](int i ) const ;

    //affihage
        void printf() const {
        if (word) {
            std::cout << word;
        } else {
            std::cout << "chaine vide\n" ;
        }
    }

    //destructeur 
      ~str() ;


} ;

#endif 