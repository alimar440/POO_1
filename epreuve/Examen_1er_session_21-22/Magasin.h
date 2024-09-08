#ifndef MAGASIN_H
#define MAGASIN_H

#include <iostream>

#include "Article.h"

using namespace std;

class Magasin {
    
    int max_size ;
    Article **stock ;

public:
    Magasin(int ); 

    void ajouter(Article* ) ; 

    virtual ~Magasin();
    
    void affiche();
  
};

#endif
