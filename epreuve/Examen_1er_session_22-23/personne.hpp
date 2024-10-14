#ifndef PERSONNE_HPP
#define  PERSONNE_HPP
#include <iostream>
#include <string>

using namespace std ;

class personne {

        string nom ;
        string adresse ;
        int anneeEmbouche ;

    public :

        personne( const string& a ,const string& b , int c) : nom(a) , adresse(b) , anneeEmbouche(c)
        {cout<<"appel constructeur PERS \n" ;} ;
        virtual ostream& affiche(ostream& out) const {
            out << "    nom : "<<nom 
                <<" \nadresse : "<<adresse
                <<"   \nannee : "<<anneeEmbouche<<endl ; 
             return out ;   
                
        } ;
        friend ostream& operator<<(ostream& out ,const personne& pers) {

            return pers.affiche(out) ;
        } ;

};

#endif