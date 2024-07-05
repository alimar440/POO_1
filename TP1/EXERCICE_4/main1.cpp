 #include "CERCLE.hpp"

int main(){

    point p ;   p.Cx = 2 ; p.Cy = 3 ;
    Cercle C1(78,p) , C2(5,p); 

    cout << C1 ;
    cout << C2 ;
   
    if(C1 == C2 ){
        cout<<"\ntrue" ;
    }else{
        cout<<"\nfalse" ;
    }

    return 0 ;
}
   