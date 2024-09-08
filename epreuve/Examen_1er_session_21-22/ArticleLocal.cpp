#include "ArticleLocal.h"

ArticleLocal::ArticleLocal(int ref, char* design, int prix, int coutTr) : Article(ref , design , prix){
       
        cout<<"appel du constructeur d'un article d'adresse importe"<<this<<endl ;
       
        coutTransport = coutTr ;
}

ArticleLocal::ArticleLocal(const ArticleLocal& other): Article(other){

     cout<<"appel du constructeur de recopie d'un article d'adresse importe"<<this<<endl ;
     coutTransport = other.coutTransport ;

}
ArticleLocal::~ArticleLocal(){
     cout<<"appel du destructeur d'adresse importe"<<endl ;
    }
    
void ArticleLocal::affiche(){
    Article::affiche() ;
    cout<<"| taxe d'importation :"<<coutTransport<<endl ;
}
    
ArticleLocal& ArticleLocal::operator=( ArticleLocal& other){

    Article *adr1 ,*adr2 ;

    adr1 = this ; 
    adr2 = &other ;

    *adr1 = *adr2 ;

    coutTransport = other.coutTransport ;

    return *this;

}