#include "CERCLE.hpp"

    Cercle::Cercle(unsigned int a, point p){
        cout<<"appel constructeur de copie d'adresse "<<this<<"de rayon "<<R<<"et de centre de coordonneer x = "<<C.Cx<<" y="<<C.Cy<<endl ;
        R= a ; C.Cx=p.Cx ; C.Cy= p.Cy ;
    }
    bool Cercle::Compare(Cercle& C1) const{
        if(R==C1.R && C.Cx==C1.C.Cx && C.Cy == C1.C.Cy){
            return true ;
        }else{
            return false ;
        }
    } 

    void Cercle::SetCentre(point a ){ 
        C.Cx=a.Cx ; 
        C.Cy=a.Cy ; 
        } 

    Cercle~Cercle(){


    }
    void Cercle::SetRayon(unsigned int a ){
         R=a ;
        } 

    void Cercle::affiche() const {

        
        cout<<"rayon = "<<R<<" centre="<<C.Cx<<" x = "<<C.Cy<<"\n" ;

        for(int i= 0 ;i<=2*R ; i++){
            for(int j = 0 ; j<= 2*R ; j++) {

                int x = i-R ;
                int y = j - R ;
                if(x*x + y*y <=R*R){
                    cout<<" *" ;

                }else{
                    cout<<" ";
                }
            }
            cout<<endl ;
        }
       
    }

    bool Cercle::operator==(Cercle& C1){

        if(R==C1.R && C.Cx==C1.C.Cx && C.Cy == C1.C.Cy){
            return true ;
        }else{
            return false ;
        }
    }

    
    ostream& operator<<(ostream& sorti , Cercle C1){
        
        sorti <<"rayon = "<<C1.R <<" centre="<<C1.C.Cx<<C1.C.Cy<<"\n" ;

        for(int i= 0 ;i<=2*R ; i++){
            for(int j = 0 ; j<= 2*R ; j++) {

                int x = i-R ;
                int y = j - R ;
                if(x*x + y*y <=R*R){
                    cout<<" *" ;

                }else{
                    cout<<" ";
                }
            }
            cout<<endl ;
        }
        
        return sorti ;
    }