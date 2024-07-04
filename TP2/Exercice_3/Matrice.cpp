#include"Matrice.hpp" 

//fonction who create a matrice with the number of row and colone 
Matrice::Matrice(int r , int c) {

    cout<<"APPEL CONSTRUCTEUR D'ADRESSE <<  "<<this<<"  >>" <<endl;
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

void Matrice::saisie(){

    for(int i = 0 ; i< row ; i++){
        for(int j = 0 ; j < col ; j++)
            this->SetElement(i,j,rand()) ;
    }
}

 Matrice::~Matrice() {

    for(int i=0 ; i<row ; i++)
        delete(element[i]) ;
    delete(element) ;
    cout<<"destruction matrice "<<endl;

}

void Matrice::SetElement(int r , int c , int el ) {

    element[r][c]= el ;
    
}

void Matrice::printf() {

     std::cout<<"\nA F F I C H A G E \n" ;

    for(int i=0 ; i<row;i++){
        std::cout<<"\n";
        for(int j=0 ;j<col;j++){
            cout<<" "<<element[i][j] ;
        }
    }
    std::cout<<"\n";
}

 Matrice Matrice::produit(const Matrice Mat ) const 
{ 
    int i, j, k; 
    
        if (col != Mat.row) { 
            cout << "! Attention : produit impossible...!" << endl; 
            exit(-1) ; 
    } 
    Matrice m(row , Mat.col) ;
    if (m.element) { 
    for(i=0; i<row; i++) 
        for(j=0; j<Mat.col; j++) 
            for(k=0; k <col; k++) 
                 m.element[i][j] += element[i][k] * Mat.element[k][j]; 
    } 
    return m ; 
}

Matrice& Matrice::operator=(const Matrice& Mat ){

    //delete space
    for(int i = 0 ; i<row ; i++){
        delete element[i] ;
    }
    delete element ;

    row =Mat.row ;
    col = Mat.col ;

    //allocation dynamique  
    element = new int*[row] ;

    for(int i=0 ; i<row ; i++){

        element[i]=new int[col] ;
    }

    for(int i = 0 ; i<row ; i++)
        for(int j = 0 ; j<col ; i++){
            element[i][j] = Mat.element[i][j] ;
            }

        return(*this) ;

}

Matrice::Matrice(const Matrice& Mat){

    cout<<"appel constructeur de recopie "<<endl;
    row =Mat.row ;
    col = Mat.col ;

    element = new int*[row] ;

    for(int i=0 ; i<row ; i++){

        element[i]=new int[col] ;
    }

    for(int i = 0 ; i<row ; i++)
        for(int j = 0 ; j<col ; j++){
            element[i][j] = Mat.element[i][j] ;
            }


}