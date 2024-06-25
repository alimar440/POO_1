#include"Ensemble.hpp"

//constructor for inicialize the class 
Ensemble::Ensemble(int nb ): size(nb),tete(nullptr) , courant(nullptr){}


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
        std::cout << "L'ensemble est plein. " ;
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
}

//delete element fonction 
void Ensemble::supprimer(int el ){

    Node* prec = tete ;
    Node* courant = tete ;
    
    

    while(el !=  courant->data && courant != nullptr){

        prec = courant ;
        courant = courant->suiv ;

    }

    if(courant){
        
        prec->suiv = courant->suiv ;
        
    }

}