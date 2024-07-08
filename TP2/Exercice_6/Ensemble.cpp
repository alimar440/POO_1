#include"Ensemble.hpp"

//constructor for inicialize the class 
Ensemble::Ensemble(int nb ): size(nb),tete(nullptr) , courant(nullptr){

    cout<<"appel constructeur d'adresse "<<this<<endl ;
    
}

Ensemble::Ensemble(Ensemble& ens ) : size(ens.size) , tete(nullptr), courant(nullptr)  {
    cout<<"appel constructeur de copie d'adresse  "<<this<<endl ;
    if(ens.tete){

        tete = new Node(ens.tete->data) ;
        courant = tete ;
        ens.courant = ens.tete->suiv ;

        while(courant->suiv ){
            courant->suiv = new Node(ens.courant->data) ;
            courant = courant->suiv ;
            ens.courant = ens.courant->suiv ;

        }
    }

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
 //add element in Ensemble fonction   
void Ensemble::ajouter( int el ){

    if (cardinal() < size) {

        if(!contient(el))
        {

            Node* newNode = new Node(el) ;

            if(tete == nullptr)
                tete = newNode ;  
            else
            {
                newNode->suiv = tete ;
                tete = newNode ;
            }
        }else
            cout << "L'element " << el << " est deja present dans l'ensemble." <<endl;
    }
    else 
        cout << "L'ensemble est plein. " ;
}
 
//check in fonction
int Ensemble::contient(int el)const{

    Node* newNode = tete ;

    while(newNode!=nullptr){

        if(el == newNode->data )
            return 1 ;

        newNode = newNode->suiv ;

    }
    return 0 ;
}

//print fonction
void Ensemble::printf()const{

        Node* newNode = tete ;

    while(newNode!=nullptr){
        cout<<" "<<newNode->data ;
        newNode = newNode->suiv ;
    }
    }

//destructor 
Ensemble::~Ensemble() {

    while(tete != nullptr)
    {
        Node* temp = tete;
        tete = tete->suiv;
        delete temp;
    }
    cout<<"appel destructeur"<<endl ;
}

//delete element fonction 
void Ensemble::supprimer(int el ){

    Node* prec = tete ;
    courant = tete ;

    while(el !=  courant->data && courant != nullptr){

        prec = courant ;
        courant = courant->suiv ;

    }

    if(courant){
        
        prec->suiv = courant->suiv ;
        
    }

}
Ensemble& Ensemble::operator<<(int el ){


    if (cardinal() < size) {
        if(!contient(el)){

            Node* newNode = new Node(el) ;
            if(!tete){
               tete = newNode ;
            }
            newNode->suiv= this->tete ;
            this->tete = newNode ;

        }else
            cout << "L'element " << el << " est deja present dans l'ensemble." <<endl;
    }else
        cout << "L'ensemble est plein. " ;
    
    return *this ;

}
 Ensemble& Ensemble::operator>>(int el) {

    if(contient(el)){

        if(el == tete->data){
            tete = nullptr ;
        }

        courant =tete ;
        Node* precedant = tete ;

        while(courant->data != el && courant !=nullptr){

            precedant = courant ;
            courant = courant->suiv ;

        }
        if(courant!= nullptr){
            precedant->suiv = courant->suiv ;
        }

        

    }
    return *this ;
 }
int Ensemble::operator%(int el){

    
     Node* newNode = tete ;

    while(newNode!=nullptr){

        if(el == newNode->data )
            return 1 ;

        newNode = newNode->suiv ;

    }
    return 0 ;
}