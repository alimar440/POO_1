#ifndef PERSONNEL_HPP 
#define PERSONNEL_HPP

#include "personne.hpp"

class personnel : public personne 
{

        bool bureau ; 
        int salaire ;
    public : 
        personnel(const string& n , const string& ad , int an , int sal) : personne(n,ad,an ) , salaire(sal), bureau(true) 
        {cout<<"appel constructeur personnel \n" ;} ;
        ostream& affiche(ostream& out)const {
            personne::affiche(out) ;
            out<<"     bureau : "<<bureau
                <<"   salaire :"<<salaire<<endl ;
                return out ;
        };
};

#endif ;