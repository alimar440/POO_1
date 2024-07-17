#include <iostream>

using namespace std ;


class File{
        int size ;
        int maxsize ;
        int* Tab ;
        int tete ;
        int queue ;
    public:
        File(int nb);
       ~File();
        File(File& P) ;
        void EnFiler(int el) ;
        void DeFiler() ;
        int Sommet(){return Tab[tete] ;} ;
        bool Est_vide() const { return( tete==queue ? true : false );} ;
        friend void printf( File ens) ;
        
        
};