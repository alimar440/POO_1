#include "Ensemble.hpp"

Ensemble::Ensemble(int nb ){
   cout<<"appel constructeur d'adresse"<<this<<endl ;
    size = nb ;
    card = 0 ;
    element = new int[nb] ;

}



//fonction who add an element in an ensemble 

    void Ensemble::ajouter( int el ) {
        
        if(card < size)
        {
            if( this->contient(el) == -1)
            {
        
                    element[card] = el ;
                    card++;
            }else
            {
                cout<<"l'element  "<<el <<"est das l'ensemble "<<endl ; 
            }
        }else{
            cout<<"Ensemble plein "<<endl ;
        }
        
        
    }
//fonction who return the number of element of an ensemble 
    // int Ensemble::cardinal()const 
    // {

    //     return card ;

    // }
//fonction who delete an element in an ensemble 
    void Ensemble::supprimer(int el ) {

        int p = this->contient(el) ;
        if(p != -1 )
        {
            int i = p ;
            
            while( i+1 < card-1  ){
                
                element[i] = element[i+1] ;
                i++ ;

            }
            card--;
        }else
        {
            cout<<"l'element  "<<el <<"est das l'ensemble "<<endl ; 
        }
        
    }
//fonction who check if an element is in an ensemble 

    int Ensemble::contient(int el) {

        int i=0 ;
        while(i < card  ){
               
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
        if (card) {
            cout << element[0];
            for (int i = 1; i < card; ++i) {
                cout << " , " << element[i];
            }
        }
        cout << " }" << endl;
    }
    Ensemble::~Ensemble(){

        delete(element) ;
        
        cout<<"appel de destructeur de "<<this<<endl ;
    }
    //copie constructor 
Ensemble::Ensemble(const Ensemble& ens){

    cout<<"appel constructeur de copie d'adresse"<<this<<endl ;
    size = ens.size ;
    card = ens.card ;
    element = new int [ens.size] ;
    
    int i= 0 ; 
    while( i< card  ){
            
        element[i]= ens.element[i] ;

        i++ ;
    } 
    
    
}
//init , prochain and exist 



Ensemble suppell(Ensemble E){
   //Ensemble E1 = E ;
   cout<<"1ERE TEST"<<endl ;
   return E ;
}




