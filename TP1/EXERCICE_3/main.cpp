#include "Rectangle.hpp"

int main(){


    cout<<"\n\n\n" ;
    Rectangle R1(5,20) , R2(5,30); 

    cout<<"\n\n\n" ;

    cout<<"\n\n" ;
    // if(R1.Compare(R2)){
    //     cout<<"\ntrue les deux rectangle sont les memes" ;
    // }else{
    //     cout<<"\nfalse les deux rectangle ne sont pas les memes" ;
    // }
    
    // cout<<"\n\n A F F I C H A G E "<<endl ;
    // cout<<"\n\n" ;
    // R1.affiche() ;
    // cout<<"\n\n" ;
    // R2.affiche() ;


    cout<<"\n\n\n" ;


    


    if(R2==R1){
        cout<<"\ntrue les deux rectangle sont les memes" ;
    }else{
        cout<<"\nfalse les deux rectangle ne sont pas les memes" ;
    }

    cout<<"utilisation de SetHauteur et SetLargeur "<<endl ;

    cout<<"\n\n\nA F F I C H A G E "<<endl ;
    cout << R1 ;
    cout<<"\n\n";
    cout <<R2 ;

    R1.SetHauteur(4);
    R2.SetLargeur(4);
    return 0 ;

}