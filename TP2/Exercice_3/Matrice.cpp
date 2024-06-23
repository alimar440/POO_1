#include"Matrice.h" 

//fonction who create a matrice with the number of row and colone 
Matrice::Matrice(int r , int c) {

    row = r ;
    col = c ;

    element = new int*[r] ;

    for(int i=0 ; i<r ; i++){

        element[i]=new int[c]
    }

    for(int i = 0 ; i<r ; i++){
        for(int j=0 ; j<c ; j++)
            element[i][j]=0 ;
    }
}


void Matrice::~Matrice() {

    for(int i=0 ; i<r ; i++)
        delete(element[i]) ;
    delete(element) ;
    cout<<"destruction matrice " ;

}

void Matrice::SetElement(int r , int c , int el ) const{

    element[r][c]= el ;
    
}
Matrice produit(const Matrice Mat ) const ;

void Matrice::printf() {
     
}



