#include "File.hpp"


File::File(int nb){
    // cout<<"Appel constructeur d'adresse"<<this<<endl ;
    maxsize = nb ;
    queue = 0 ;
    tete = 0 ;
    size = 0 ;
    Tab = new int[nb] ;
   
} ;



void printf(File ens){
    cout<<"A F F I C H A G E "<<endl ;
    
    while(ens.Est_vide()== false){
            cout<<"("<<ens.Sommet()<<")-->" ;
            ens.DeFiler() ;
        }
        cout<<endl ;
}

File::~File(){
        // cout<<"Appel du destructeur"<<endl;
        delete Tab ;
    }

File::File(File& P){
    // cout<<"appel constructeur de copie d'adresse"<<this<<endl ;
    maxsize = P.maxsize ;
    queue = 0 ;
    tete = 0 ;
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

void File::EnFiler(int el) {
    if (size == maxsize) {
        cout << "File est pleine!" << endl;
        return;
    }
    Tab[queue] = el;
    queue = (queue + 1) % maxsize;
    size++;
}

void File::DeFiler() {
    if (Est_vide()) {
        cout << "File est vide!" << endl;
        return;
    }
    tete = (tete + 1) % maxsize;
    size--;
}

// void File::EnFiler(int el){

//     if(queue < maxsize){
            
//             Tab[queue++]=el ;
           

//         }
// } ;
// void File::DeFiler(){

//     if(tete<queue){
//         tete++ ;
//         cout<<"tete"<<tete<<endl;
//         cout<<"queue :"<<queue<<endl;
//     }   
// }









