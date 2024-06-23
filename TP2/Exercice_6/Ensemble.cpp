#include"Ensemble.hpp"

//constructor for inicialize the class 
Ensemble::Ensemble(int nb ){

    size = nb ;
    tete = nullptr ;
    courant = nullptr ;

    Node(int d) : data(d), suiv(nullptr) {}

}


int Ensemble::cardinal()const{

    Node* courant = tete ; 
    int count=0 ;
    while( courant!=nullptr ){
        count++ ;
        courant= courant->suiv ;
    }
    return count ;
}
   
void Ensemble::ajouter( int el ){

    if(contient(el)){
        cout << "L'élément " << el << " est déjà présent dans l'ensemble." << std::endl;
        return;
    }

    Node* newNode = new Node(el) ;
    if(tete == nullptr){
        tete = newNode ;
        return ;
    }

    newNode->suiv = tete ;
    tete = newNode ;

}
    void supprimer(int el ) ;
    int contient(int el) ;
    void printf() ;
    ~Ensemble();