#include"Matrice.hpp" 

//fonction who create a matrice with the number of row and colone 
Matrice::Matrice(int r , int c) {

    row = r ;
    col = c ;

    element = new int*[r] ;

    for(int i=0 ; i<r ; i++){

        element[i]=new int[c] ;
    }

    for(int i = 0 ; i<r ; i++){
        for(int j=0 ; j<c ; j++)
            element[i][j]=0 ;
    }
}


 Matrice::~Matrice() {

    for(int i=0 ; i<row ; i++)
        delete(element[i]) ;
    delete(element) ;
    cout<<"destruction matrice " ;

}

void Matrice::SetElement(int r , int c , int el ) const{

    element[r][c]= el ;
    
}
Matrice produit(const Matrice Mat ) const ;

void Matrice::printf() {

     std::cout<<"\nA F F I C H A G E \n" ;

    for(int i=0 ; i<row;i++){
        std::cout<<"\n";
        for(int j=0 ;j<col;j++){
            cout<<" "<<element[i][j] ;
        }
    }
}

 Matrice produit(const Matrice Mat ) const ; 
{ 
 int i, j, k; 
 float **m; 
 if (p1 != n2) { 
 cout << ! Attention : produit impossible…! << endl; 
 return(NULL); 
 } 
 m = creer _matrice(n1,p2); 
 if (m) { 
 for(i=0; i<n1; i++) 
 for(j=0; j<p2; j++) 
 for(k=0; k <p1; k++) 
 m[i][j] += m1[i][k] * m2[k][j]; 
 } 
 return(m); 
}

