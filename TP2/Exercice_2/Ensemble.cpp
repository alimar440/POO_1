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
//redefinition of the fonction "ajouter" by "<<" , "supprimer " by ">>" en "contient" by "%"

Ensemble& Ensemble::operator<<(int el)
    {
        
        if(  (*this)%(el)  ){
            cout<<"l'element  "<<el <<"est dans l'ensemble ou" <<endl ;
        }else{
            
            if( card<size ){
                element[card++] = el ;
              
            }else
            {
            cout<<" Ensemble plein "<<endl ; 
             }
        }
  
        return *this ;
    }
Ensemble& Ensemble::operator>>(int el) {
  
           int i=0;
              
              
            while( i<card && el!= element[i]  )
            {

                i++ ;
               
            }
           
            if(i<card){

               for(int j= i+1 ; j<card-1 ; j++ ){
                   
                     this->element[i] = this->element[i+1] ;
                   

               }
                
               card-- ;
            }else{
                cout<<"element pas trouve"<<endl ;
            }
            
        
        return *this ;

        
    }

int Ensemble::operator%(int el ) {

    
    int i=0 ;
        while(i < card  ){

            if(el == element[i])    
                return 1 ;
            i++ ;
        }
        return 0 ;

}

Ensemble& Ensemble::operator=(const Ensemble& ens){

    delete(element) ;
    size = ens.Esize() ;
    element = new int [ens.size] ;
    
    int i= 0 ; 
    while( i< size  ){
            
        element[i]= ens.element[i] ;

        i++ ;
    } 
    
    return *this ;

}

    
Ensemble Ensemble::operator+(const Ensemble& ens ) {

    Ensemble ens1(size + ens.size) ;
    
    for(int i = 0 ; i< ens.card ; i++){

        ens1.ajouter(ens.element[i]) ; 
        
    }

    for(int i = 0 ; i< size ; i++){

        ens1.ajouter(element[i]) ; 
    
    }
    return  ens1 ;
    
}

Ensemble Ensemble::operator*( Ensemble& ens)  {

   
    Ensemble ens1(size+ens.size) ;

    for(int i = 0 ; i< ens.size ; i++){

        if(i<card && ens % element[i] )
            ens1.ajouter(element[i]) ; 
        
    }
    return ens1 ;
}

//init , prochain and exist 

void Ensemble::init(){
    i=0 ;
   
}

int Ensemble::exist(){

    return i != card ;
}
int Ensemble::prochain(){

    return element[i++] ;

}

int Ensemble::somme(){ 
        int S = 0 ; 
        init() ; 
        while(exist()){

            S += prochain() ;
        }
        return S ;
}

Ensemble suppell(Ensemble E){
   //Ensemble E1 = E ;
   cout<<"1ERE TEST"<<endl ;
   return E ;
}


void Ensemble::affiche_element(int a){

    cout<<a ; 
    
}

