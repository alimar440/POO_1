#include "pile.hpp"


Pile::Pile():head(nullptr){ 
    cout<<"appel constructeur d'adresse "<<this<<endl ;
} 
Pile::Pile(Pile& P){
     cout<<"appel constructeur de copie d'adresse "<<this<<endl ;
    if(P.head){
        head = new Pile_elt(P.head->data) ;
        Pile_elt* courant1 ; courant1= head ;
        Pile_elt* courant2 ; courant2 = P.head->suiv ;
        while( courant2 ){
            courant1->suiv = new Pile_elt(courant2->data) ;
            courant1 = courant1->suiv ;
            courant2 = courant2->suiv ;

        }
    }
}
Pile::~Pile() {
    delete(head) ;
    cout<<"appel du destructeur"<<endl;
 }

void Pile::Empiler(int el){

    Pile_elt *node = new Pile_elt(el) ;
    node->suiv = head ;
    head = node ;
}
void Pile::Depiler() {

    if(head){
        head = head->suiv ;
    }
}
int Pile::Sommet() {
    return head->data ;
}
bool Pile::Est_vide() const{
    return (head == nullptr)? true : false ;
}
void printf(Pile ens )  {

    
        
        while(ens.Est_vide() == false){
            cout<<"("<<ens.Sommet()<<")-->" ;
            ens.Depiler() ;
        }

        cout<<"NULL"<<endl ;
    }







