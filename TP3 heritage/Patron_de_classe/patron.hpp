#ifndef PATRON_HPP
#define PATRON_HPP

template <class T> class Vecteur{
        int n ;
        T* tab ;
    public:
        Vecteur(int) ;
        ~Vecteur();
        T& operator[](int);
        void affiche() ;
} ;

template <class T> Vecteur < T > :: Vecteur(int nb){
    tab new T[n] ;
    if(!tab){
        cout<<"pas d'espace" ;
        exit(-1) ;
    }
}

template <class T> Vecteur < T > :: ~Vecteur(){
    if(tab){
        delete(tab) ;
    }
}
template <class T> T& Vecteur < T > :: operator []{
    if(i<0 || i>n)
        i=0
    return tab[i] ;
}

template <class T> void Vecteur < T > :: affiche(){
    for(int i = 0 ; i<n ;i++)
        cout<<tab[i]<<endl ;
}


//=========================================
#endif