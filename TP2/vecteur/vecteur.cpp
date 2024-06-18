#include "vecteur.hpp"



//constructeur de copie 
vecteur::vecteur(const vecteur &v){
    m_dimension=v.m_dimension ;
    m_x = new int[m_dimension] ;
    for(int i=0 ; i<m_dimension;i++)
        m_x[i]=v.m_x[i] ;
}
// sur-definition de l'operateur de sorti <<
ostream& operator<<(ostream &sorti , vecteur v1){

    for(int i=0 ; i< v1.m_dimension ; i++){
        sorti<<"m_x["<<i<<"]"<<"="<<v1.composante(i) <<"\n"; }
    return sorti ;
   
}

//sur-definition de l'operateur *
int vecteur::operator * (vecteur& v2){
        int resultat ;
        if(v2.m_dimension==this->m_dimension){
            for(int i=0 ; i<m_dimension ; i++){
            resultat+= m_x[i]*v2.m_x[i] ;
        }
       return resultat ; }
        
         cout<<"dimension different " ;
        return -1 ;
    }
//sur-defition de l'operateur +
vecteur vecteur::operator+(vecteur &v2){
        vecteur v3(m_dimension) ;
        for(int i = 0 ; i<m_dimension ; i++)
            v3.m_x[i]= m_x[i] + v2.m_x[i] ;
        return v3 ;
       
}

//sur definition de l'operateur =
vecteur vecteur::operator=(vecteur &v2){
   if(this == &v2){return *this ;} 
    delete m_x ; 
    m_dimension= v2.m_dimension ;
    m_x = new int[m_dimension] ;
    for(int i=0 ; i<m_dimension ; i++)
        m_x[i] = v2.m_x[i] ;

    return *this ;
}