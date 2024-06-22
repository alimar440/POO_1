#include "Ensemble.hpp"

Ensemble::Ensemble(int nb ){

    
    size = nb ;
    element = new int(nb) ;

    for (int i = 0; i < nb; i++) {
        element[i] = 0;
        cout<<i;
        
    }

  }
//fonction who add an element in an ensemble 

    void Ensemble::ajouter( int el ) {
        
        if( this->contient(el) == -1){
            
            int i=0 ;
            while(element[i] != 0 && i<size  ){
                i++ ;
            }
            if(i!=size){
                element[i] = el ;
            }
         } 
        
    }
//fonction who return the number of element of an ensemble 
    int Ensemble::cardinal()const 
    {
        int i = 1 ;
        while(element[i] != 0 && i<size){
            i++;
        }

        return i+1 ;

    }
//fonction who delete an element in an ensemble 
    void Ensemble::supprimer(int el ) {

      
        if(this->contient(el) != -1 )
        {
            int i = this->contient(el) ;
            
            while(element[i+1] != 0  ){
                
                element[i] = element[i+1] ;
                i++ ;

            }
            element[i]=0 ;
        }
        
    }
//fonction who check if an element is in an ensemble 
    int Ensemble::contient(int el) {

        int i=0 ;
        while(element[i] != 0  ){
               
            if(el == element[i])    
                return i ;
            i++ ;
        }
        return -1 ;
    }


//fonction who show(print) the ensemble elements ; 
    void Ensemble::printf(){
        cout << "A F F I C H A G E" << endl;
        cout << "E = { ";
        if (size > 0) {
            cout << element[0];
            for (int i = 1; i < size; ++i) {
                cout << " , " << element[i];
            }
        }
        cout << " }" << endl;
    }
    Ensemble::~Ensemble(){

        delete(element) ;
        element=nullptr ;
        cout<<"appel de destructeur " ;
    }

//redefinition of the fonction "ajouter" by "<<" , "supprimer " by ">>" en "contient" by "%"

    Ensemble& Ensemble::operator<<(int el)
    {
        if( this->contient(el) == -1){
            
            int i=0 ;
            while(this->element[i] != 0 && i<this->size  ){
                i++ ;
            }
            if(i!=this->size){
                this->element[i] = el ;
            }
         } 
        return *this ;
    }
    Ensemble& Ensemble::operator>>(int el) {

      
        if(this->contient(el) != -1 )
        {
            int i = this->contient(el) ;
            
            while(this->element[i+1] != 0  ){
                
                this->element[i] = this->element[i+1] ;
                i++ ;

            }
            this->element[i]=0 ;
        }
        return *this ;
    }

int Ensemble::operator%(int el ) {

    int i=0 ;
        while(element[i] != 0  ){
               
            if(el == element[i])    
                return i ;
            i++ ;
        }
        return -1 ;

}

    


    
