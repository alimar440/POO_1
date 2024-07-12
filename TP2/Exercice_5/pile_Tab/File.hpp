#include <iostream>

using namespace std ;


class File{
        int size ;
        int maxsize ;
        int* Tab ;
    public:
        File(int nb);
       ~File();
        File(File& P) ;
        void EnFiler(int el) ;
        void DeFiler() ;
        int Sommet(){return Tab[0] ;} ;
        bool Est_vide() const { return( 0 == size ? true : false );} ;
        friend void printf( File ens) ;
        
        
};