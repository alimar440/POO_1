
#ifndef PATRON_HPP
#define PATRON_HPP

template <class T , int n > class Vecteur{
        
        T tab[n] ;
    public:
        Vecteur(int) ;
        ~Vecteur();
        T& operator[](int);
        void affiche() ;
} ;

template <class T,int n > Vecteur < T ,n > :: Vecteur(){
    
        cout<<"appel constructeur"<<endl ;
        
}

template <class T ,int n > Vecteur < T  ,n > :: ~Vecteur(){
    cout<<"appel destructeur"<<endl ;
}
template <class T,int n > T& Vecteur < T , n > :: operator []{
    if(i<0 || i>n)
        i=0
    return tab[i] ;
}

template <class T , int n> void Vecteur < T , n > :: affiche(){
    for(int i = 0 ; i<n ;i++)
        cout<<tab[i]<<endl ;
}



#endif 