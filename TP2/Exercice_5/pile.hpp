#ifndef File_HPP
#define File_HPP

using namespace std ;
#include <iostream> 

struct File_elt{
    int data ;
    File_elt *suiv ;

    File_elt(int d): data(d) , suiv(nullptr) {} ;
} ;


class File {

        File_elt *tete ;
        File_elt *queue ;
    public: 

        File() ;
        ~File() ;
        File(File& P) ;
        void EnFiler(int el) ;
        void DeFiler() ;
        int Sommet() { return tete->data ;} ;
        bool Est_vide() const ;
        friend void printf( File ens) ;



        //--------------------------------------------
        File operator=(File& ) ;
        File& operator<<(int el) ;
        File& operator>>(int el);
} ;

#endif