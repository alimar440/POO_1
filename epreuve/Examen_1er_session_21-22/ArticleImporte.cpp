#include "ArticleImporte.h"

ArticleImporter::ArticleImporter(int ref, char* design, int prix, int taxe) : Article(ref , design , prix){
        cout<<"appel du constructeur d'un article d'adresse importe"<<this<<endl ;
        taxeImportation = taxe ;
}

ArticleImporter::ArticleImporter(const ArticleImporter& other): Article(other){

     cout<<"appel du constructeur de recopie d'un article d'adresse importe"<<this<<endl ;
    taxeImportation = other.taxeImportation ;

}
ArticleImporter::~ArticleImporter(){
     cout<<"appel du destructeur d'adresse importe"<<endl ;
    }
    
void ArticleImporter::affiche(){
    Article::affiche() ;
    cout<<"| taxe d'importation :"<<taxeImportation<<endl ;
}
    
ArticleImporter& ArticleImporter::operator=( ArticleImporter& other){

    Article *adr1 ,*adr2 ;

    adr1 = this ; 
    adr2 = &other ;

    *adr1 = *adr2 ;

    taxeImportation = other.taxeImportation ;

    return *this;
}