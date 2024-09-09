#ifndef ARTICLELocal_H
#define ARTICLELocal_H

#include <iostream>
#include "Article.h"


using namespace std;


class ArticleLocal : public Article {

    int coutTransport ; 

public:

    ArticleLocal(int ref, char* design, int prix , int coutTransport ); 

    ArticleLocal(const ArticleLocal& other); 

    ~ArticleLocal();
    
    void affiche();
  
    ArticleLocal& operator=( ArticleLocal& other);

    int getPriceSold (){ return coutTransport + this->getBuyPrice() ; } ;

   
};

#endif
