#ifndef ARTICLEImporter_H
#define ARTICLEImporter_H

#include <iostream>
#include "Article.h"


using namespace std;


class ArticleImporter : public Article {

    int taxeImportation ; 

public:

    ArticleImporter(int ref, char* design, int prix , int taxeImportation ); 

    ArticleImporter(const ArticleImporter& other); 

    ~ArticleImporter();
    
    void affiche();
  
    ArticleImporter& operator=( ArticleImporter& other);

    int getPriceSold (){ return (40 * taxeImportation )/100 + this->getBuyPrice() ; } ;

   

};

#endif
