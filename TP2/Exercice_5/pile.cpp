#include "pile.hpp"


File::File():tete(nullptr),queue(nullptr){ 
    //cout<<"appel constructeur d'adresse "<<this<<endl ;
} 




File::File(File& P):tete(nullptr),queue(nullptr){
    // cout<<"appel constructeur de copie d'adresse"<<this<<endl ;
    
    File myfile ;
    
    while(P.Est_vide() == false){
        
        int sommet = P.Sommet() ;
        myfile.EnFiler(sommet) ;
        EnFiler(sommet);
        P.DeFiler();
    }

    while(myfile.Est_vide() == false){
        P.EnFiler(myfile.Sommet());
        myfile.DeFiler();
    }

   

}










File::~File() {
    while(!Est_vide()){
        DeFiler() ;
    }
    // cout<<"appel du destructeur"<<endl;
 }

void File::EnFiler(int el){
    

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
// File File::operator=(File& ){

// }
File& File::operator<<(int el){
    if (Est_vide()) {
            cout << "La file est vide." << endl;
            return *this;
        }

    File_elt *node = new File_elt(el) ;

    if(tete == nullptr){
        tete = queue = node ;
    }else{

        queue->suiv = node ;
        queue = queue->suiv ;
    }
    return *this ;
}
File& File::operator>>(int el){
    File_elt* newnode = tete ;
       tete = tete->suiv ;
       if (tete == nullptr) {
            queue = nullptr;
        }

    delete newnode ;
    return *this ;
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







