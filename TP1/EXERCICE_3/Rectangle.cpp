#include "Rectangle.hpp"

    Rectangle::Rectangle(unsigned int a, unsigned int b){
        
        H= a ; L=b;
        cout<<"creation d'un rectangle d'addresse "<<this<< "de longueur :"<<H<<"et de largeur"<<L<<endl ;
    }
    bool Rectangle::Compare(Rectangle& R1) const{
        if(H==R1.H && L==R1.L){
            return true ;
        }else{
            return false ;
        }
    } ;
    void Rectangle::affiche() const {

        cout<<"longueur = "<<H <<"largeur="<<L<<"\n" ;
        
        for(int i = 0 ; i<L ; i++ ){
            cout<<"*" ;
        }
        cout<<endl ;

        for(int i = 0 ; i<H-1 ; i++){
            cout<<"*";
            for(int j = 1 ;j < L-1 ; j++){
                cout<<" " ;
            }
            cout<<"*"<<endl ;

        }
        for(int i = 0 ; i<L ; i++ ){
            cout<<"*" ;
        }
    }

    bool Rectangle::operator==(Rectangle& R2){
        if(H==R2.H && L==R2.L){
            return true ;
        }else{
            return false ;
        }
    }
    ostream& operator<<(ostream& sorti , Rectangle R1){

        sorti<<"longueur = "<<R1.H <<"  largeur="<<R1.L<<"\n" ;
        

        
        
        for(int i = 0 ; i<R1.L ; i++ ){
            cout<<"*" ;
        }
        cout<<endl ;

        for(int i = 0 ; i<R1.H-1 ; i++){
            cout<<"*";
            for(int j = 1 ;j < R1.L-1 ; j++){
                cout<<" " ;
            }
            cout<<"*"<<endl ;

        }
        for(int i = 0 ; i<R1.L ; i++ ){
            cout<<"*" ;
        }

        return sorti ;
    }
    Rectangle::~Rectangle(){
        cout<<"destruction d'un rectangle d'addresse "<<this<<endl;
    }