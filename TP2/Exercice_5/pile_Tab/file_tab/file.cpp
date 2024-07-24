#include "File.hpp"


File::File(int nb){
    cout<<"Appel constructeur d'adresse"<<this<<endl ;
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
        delete[] Tab ;
    }

File::File(File& P){
    cout<<"appel constructeur de copie d'adresse"<<this<<endl ;
    maxsize = P.maxsize ;
    queue = 0 ;
    tete = 0 ;
    size = 0 ; 
    Tab = new int[maxsize] ;
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

File File::operator=(File& F){
    delete[] Tab ;
    maxsize = F.maxsize ;
    queue = 0 ;
    tete = 0 ;
    size = 0 ; 
    Tab = new int[maxsize] ;
    File temp(F.maxsize) ;
    while(F.Est_vide() == false){
            EnFiler(F.Sommet()) ;
            temp.EnFiler(F.Sommet()) ;

            F.DeFiler() ;
    }
    while(temp.Est_vide()){
       
        F.EnFiler(temp.Sommet()) ;
        temp.DeFiler();
    }

    return (*this) ;

}
File& File::operator<<(int el) {
    if (size == maxsize) {
        cout << "File est pleine!" << endl;
        return *this ;
    }
    Tab[queue] = el;
    queue = (queue + 1) % maxsize;
    size++;
    
    return *this ;
}
File& File::operator>>(int el){
    int n = el ;

     if (Est_vide()) {
        cout << "File est vide!" << endl;
        return *this;
    }
    tete = (tete+1) % maxsize;
    size--;
    return *this ;
}







