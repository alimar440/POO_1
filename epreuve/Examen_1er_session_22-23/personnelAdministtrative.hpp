#ifndef PERSONNELADMINISTRATIVE_HPP
#define PERSONNELADMINISTRATIVE_HPP

#include "personnel.hpp"

class admin : public personnel
{
        string poste ;
    public :

        admin(const string& no , const string& adr , int an , int sal ,const string& pos) : personnel(no,adr,an,sal),poste(pos)
        {cout<<"appel constructeur administratif " ;} ;
        ostream& affiche(ostream& out )const{
            personnel::affiche(out) ;
            out << "   post : "<<endl ;
            return out ;

        } ;
} ;

#endif ;