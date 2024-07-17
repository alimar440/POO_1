#include "File.hpp"


File::File():tete(nullptr){ 
    cout<<"appel constructeur d'adresse "<<this<<endl ;
} 
File::File(File& P){
     cout<<"appel constructeur de copie d'adresse "<<this<<endl ;
    if(P.tete){
        tete = new File_elt(P.tete->data) ;
        File_elt* courant1 ; courant1= tete ;
        File_elt* courant2 ; courant2 = P.tete->suiv ;
        while( courant2 ){
            courant1->suiv = new File_elt(courant2->data) ;
            courant1 = courant1->suiv ;
            courant2 = courant2->suiv ;

        }
    }
}
File::~File() {
    while(!Est_vide()){
        DeFiler() ;
    }
    cout<<"appel du destructeur"<<endl;
 }

void File::EnFiler(int el){
    if (Est_vide()) {
            cout << "La file est vide." << endl;
            return;
        }

    File_elt *node = new File_elt(el) ;

    if(tete == nullptr){
        tete = queue = node ;
    }else{

        queue->suiv = node ;
        queue = queue->suiv ;
    }

}
void File::DeFiler() {
    
      File_elt* newnode = tete ;
       tete = tete->suiv ;
       if (tete == nullptr) {
            queue = nullptr;
        }

    delete newnode ;

}
int File::Sommet() {
    return tete->data ;
}
bool File::Est_vide() const{
    return (tete == nullptr)? true : false ;
}
void printf(File ens )  {

    
        
        while(ens.Est_vide() == false){
            cout<<"("<<ens.Sommet()<<")-->" ;
            ens.DeFiler() ;
        }

        cout<<"NULL"<<endl ;
    }







