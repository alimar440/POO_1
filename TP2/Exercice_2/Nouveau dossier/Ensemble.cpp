#include "Ensemble.hpp"

Ensemble::Ensemble(int nb ){
   cout<<"appel constructeur d'adresse"<<this<<endl ;
    size = nb ;
    card = 0 ;
    element = new int[nb] ;

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

        ens1<<ens.element[i] ; 
        
    }

    for(int i = 0 ; i< size ; i++){

        ens1<<element[i] ; 
    
    }
    return  ens1 ;
    
}

Ensemble Ensemble::operator*( Ensemble& ens)  {

   int min=0 ; 
   if(size<ens.size){
        min = size ;
   }else{
        min = ens.size ;
   }
    Ensemble ens1(min) ;

    for(int i = 0 ; i< card ; i++){

        if(i<card && ens % element[i] )
            ens1<<element[i] ; 
        
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

