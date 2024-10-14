#ifndef PERSONNELENSEIGNANT_HPP
#define PERSONNELENSEINGNANT_HPP

#include "personnel.hpp"

enum typeEnseignant {   NoVacataire , Vacataire } ;

class enseignant : public personnel
{
        string casier ;
        typeEnseignant permanence ;
        int salaireHoraire ;
        int volumeHoraire ;
    public : 
        enseignant(const string& no , const string& adr , int ann ,int sal, const string& cas):personnel(no , adr , ann ,sal ), permanence(NoVacataire) ,volumeHoraire(0) , salaireHoraire(0),casier(cas)
        {cout<<"appel constructeur Enseignant non Vacataire" ;} ;
        enseignant(const string& no , const string& adr , int ann ,const string& cas, int volH , int salH ):personnel(no , adr , ann , salH * volH ) , volumeHoraire(volH), salaireHoraire(salH), permanence(Vacataire),casier(cas) 
        {cout<<"appel constructeur Enseignant Vacataire" ;} ;

        ostream& affiche(ostream& out)const{

            personnel::affiche(out) ;
            out<<"  casier : "<<casier <<endl ;
            
            return out ;
        } ;
};

#endif ;