#include "finaltest.hpp" 


TableAssociation::TableAssociation(int nb) {
    cout<<"appel du constructeur d'adresse   "<<this <<endl;
    tailleMax = nb ;

    Tab = new paire* [nb] ;
    
    for(int i = 0 ; i< nb ; i++ ){
        Tab[i] = nullptr ;
    } 

}
TableAssociation::~TableAssociation(){
     for(int i = 0 ; i< tailleMax ; i++ ){
        delete Tab[i] ;
    } 
    cout<<"appel du destructeur   "<<this <<endl;
}

void TableAssociation::put(char* key , char* val){
    
    if(size() < tailleMax ){
        paire *P ; 
        int i = 0 ;
        P->cle = new char( strlen (key ) + 1 ) ;
        P->valeur = new char( strlen (val ) + 1 ) ;

        strcpy(P->cle , key ) ;
        strcpy(P->valeur , val ) ;

        while(Tab[i] != nullptr ){
            i++ ;
        }

        Tab[i] = P ;
    }


}
paire* TableAssociation::get(char* key){
    int i = 0 ;
    while(Tab[i] != nullptr && strcmp(key , Tab[i]->cle) != 0 ){
        i++ ;
    }
    if(i<tailleMax)
        return Tab[i] ;
    else {
        cout<<"-----------------element introuvable !!!----------------"<<endl ;
        return nullptr ;
    }
}
void TableAssociation::remove(char* key) {

    if(contains(key)){
        int i = 0 ;

        while(Tab[i] != nullptr && strcmp(key , Tab[i]->cle) != 0 ){
            i++ ;
        if(i<tailleMax){
            while(i < size() - 1 )  
                Tab[i] = Tab[i+1] ;
        }
        delete Tab[i]->cle ;
        delete Tab[i]->valeur;
        Tab[i] = nullptr ;
    }
    }
}
bool TableAssociation::contains(char* key) const {

    int i = 0 ;

    while(Tab[i] != nullptr && strcmp(key , Tab[i]->cle) != 0 ){
        i++ ;
    }
    if(i<tailleMax)

        return true ;

    return false ;
}
int TableAssociation::size () const {
    int i = 0 ;
    while(Tab[i] != nullptr ){
            i++ ;
        }

    return 1 ;
}
bool TableAssociation::isEmpty() const {

    if(Tab[0] == nullptr)
        return true ;
    
    return false ;
}


TableAssociation::TableAssociation(TableAssociation& T) {
    cout<<"appel du constructeur de recopie d'adresse   "<<this <<endl;
    tailleMax = T.tailleMax ;

    Tab = new paire* [tailleMax] ;

    for(int i = 0 ; i< tailleMax ; i++ ){
        Tab[i] = T.Tab[i] ;
    } 

}
TableAssociation& TableAssociation::operator=(TableAssociation& T) {

    for(int i = 0 ; i< size() ; i++ ){
            delete Tab[i]->cle ;
            delete Tab[i]->valeur;
            Tab[i] = nullptr ;
    } 
    tailleMax = T.tailleMax ;

    Tab = new paire* [tailleMax] ;

    for(int i = 0 ; i< tailleMax ; i++ ){
        Tab[i] = T.Tab[i] ;
    
    }

    return *this ;
}

 void TableAssociation::affiche(){
    int i = 0 ;
    while(Tab[i] != nullptr){
        cout<<"   POUR TAB["<<i<<"]->cle ="<<Tab[i]->cle<<"         TAB["<<i<<"]->valeur = "<<Tab[i]->valeur<<endl ;
    i++ ;
 }
}