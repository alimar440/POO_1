#include "CERCLE.hpp"

    Cercle::Cercle(unsigned int a, unsigned int b){
        R= a ; C=b;
    }
    bool Cercle::Compare(Cercle& C1) const{
        if(R==C1.R && C==C1.C){
            return true ;
        }else{
            return false ;
        }
    } ;
    void Cercle::affiche() const {
        cout<<"variable:"<<this<<endl ;
        cout<<"rayon = "<<R<<" centre="<<C<<"\n" ;
    }

    bool Cercle::operator==(Cercle& C1){
        if(R==C1.R && C==C1.C){
            return true ;
        }else{
            return false ;
        }
    }
    ostream& operator<<(ostream& sorti , Cercle C1){
        cout<<"variable:"<<this<<endl ;
        sorti <<"rayon = "<<C1.R <<" centre="<<C1.C<<"\n" ;
        return sorti ;
    }