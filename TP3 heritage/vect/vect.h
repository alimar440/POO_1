#ifndef VECT_HPP
#define VECT_HPP

using namespace std ;

class vect {
    private:

        int nb ;
        int *adr ;
    public :
        vect(int) ;
        ~vect() ;
        int& operator[](int i);

};

class vectb: public vect {
    private:

        int inf ;
        int sup ;
    public :
        vectb(int , int) ;
        ~vectb() ;
        int& operator[](int i);

};

#endif 