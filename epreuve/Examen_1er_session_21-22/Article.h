#ifndef ARTICLE_H
#define ARTICLE_H

#include <iostream>

using namespace std;

class Article {
    int referance;
    char* designation;
    int prixAchat;

public:
    Article(int ref, char* design, int prix ); 

    Article(const Article& other); 

    virtual ~Article();
    
    void virtual affiche();
  
    Article& operator=(const Article& other);

    int getBuyPrice(){ return prixAchat ; } ;

    int getReferance(){ return referance ;} ;

    char* getDesignation (){ return designation ; } ;

};

#endif
