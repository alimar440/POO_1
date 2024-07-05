 #include "CERCLE.hpp"

int main(){

     point p ;   p.Cx = 2 ; p.Cy = 3 ;
    Cercle C1(2,p) , C2(6,p); 

    C1.affiche() ;


    C1.affiche() ;


    point p1 ;   p1.Cx = 5 ;  p1.Cy = 7 ;
    C1.SetCentre(p1);

    C1.affiche() ;
    C2.affiche() ;

    if(C1.Compare(C2) == true){
        cout<<"\ntrue" ;
    }else{
        cout<<"\nfalse" ;
    }
    return 0 ;
}