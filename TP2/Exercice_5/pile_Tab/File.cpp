#include "File.hpp"


File::File(int nb){
    cout<<"Appel constructeur d'adresse"<<this<<endl ;
    maxsize = nb ;
    size = 0 ;
    Tab = new int[nb] ;
   
} ;



void printf(File ens){
    cout<<"A F F I C H A G E "<<endl ;
    while(ens.Est_vide()== false){
            cout<<"("<<ens.Sommet()<<")-->" ;
            ens.DeFiler() ;
        }
}

File::~File(){
        cout<<"Appel du destructeur"<<endl;
        delete Tab ;
    }

File::File(File& P){
    cout<<"appel constructeur de copie d'adresse"<<this<<endl ;
    maxsize = P.maxsize ;
    size = 0 ;
    Tab = new int(maxsize) ;
    File myfile(P.maxsize) ;
    
   
    while(P.Est_vide() == false){
        
        int sommet = P.Sommet() ;
        myfile.EnFiler(sommet) ;
        this->EnFiler(sommet);
        P.DeFiler();
    }

    while(myfile.Est_vide() == false){
        P.EnFiler(myfile.Sommet());
        myfile.DeFiler();
    }

   
}


void File::EnFiler(int el){

    

    if(size < maxsize){
        
        Tab[size++]=el ;

    }
} ;
void File::DeFiler(){

    int i = 0 ;
    while(i<size-1){
        Tab[i]=Tab[i+1] ;
        i++;
    }
    size--;
    
}










