#include "Article.h"
#include <cstring>

Article::Article(int ref, char* design, int prix) {

    cout<<"appel du constructeur d'un article d'adresse "<<this<<endl ;

    referance = ref ;

    prixAchat = prix ;

    designation = new char[strlen(design) +1 ] ;

    strcpy(designation, design); 
}
 
Article::~Article(){

    delete designation ;

     cout<<"appel du destructeur d'un article "<<endl ;
}

void Article::affiche(){

    cout<<"Refenrence :"<<referance <<"  |  prixAchat :  "<<prixAchat <<"  |  designation :"<<designation<<endl ;

}

Article::Article(const Article& other): referance(other.referance), prixAchat(other.prixAchat)

 {

    designation = new char[strlen(other.designation) + 1];

    strcpy(designation, other.designation);
}

Article& Article::operator=(const Article& other) {

    if (this != &other) { 

        delete[] designation; 

        referance = other.referance;
        prixAchat = other.prixAchat;

       
        designation = new char[strlen(other.designation) + 1];
        strcpy(designation, other.designation);
    }
    
    return *this;
}