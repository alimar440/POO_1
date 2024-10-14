#ifndef PERSONNEL_HPP 
#define PERSONNEL_HPP

#include "personne.hpp"

class personnel : public personne 
{

        bool bureau ; 
        int salaire ;
    public : 
        personnel(const string& n , const string& ad , int an , int sal) : personne(n,ad,a ) , salaire(sal), bureau(true) {} ;
        ostream& affiche(ostream& out){
            personne::affiche(out) ;
            out<<"     bureau: "<<bureau
                <<"   salaire :"<<endl ;
        };
};