#include "str.hpp" 

//les Constructeurs de la classe str


str::str(){
    size = 0 ;
    word = nullptr ;
}

str::str(const char* strstr){

   size = strlen(strstr) ;

   word = new char(size) ;

   strcpy(word , strstr) ;


}
str::str(const str& strstr) {

   \

    size = strstr.size ;
    word = new char [strstr.size] ;

    strcpy(word , strstr.word ) ;

}

    //les sur-definitions d'operateur 

str& str::operator=(str& strstr ){

    delete word ;
    size = strstr.size ;
    word = new char [strstr.size];

    strcpy(word , strstr.word ) ;

    return *this ;
}
int str::operator==(str& strstr ){

    if(size==strstr.size && strcmp( word , strstr.word)){
        return 1 ;
    }
    return 0 ;
} 
// str& str::operator+(const str& strstr ){
//     str strstrstr ;

//     strstrstr.size = size + strstr.size ;
    
//     strstrstr.word = new char[strstrstr.size + 1] ;
    
//     if(word)
//         strcpy(strstrstr.word , word) ;
//     if(strstr.word){
//         int j =0;
//         for(int i = size  ; i< strstrstr.size ; i++){
            
//             strstrstr.word[i] = strstr.word[j] ;
//             j++ ;
//         }
//         //strcat(strstrstr.word , strstr.word) ;
//     }

//     return &strstrstr ;
// } 
str str::operator+(const str& strstr) {
    str strstrstr;
    strstrstr.size = size + strstr.size;
    strstrstr.word = new char[strstrstr.size + 1];
    
    if (word)
        strcpy(strstrstr.word, word);
    if (strstr.word) {
        int j = 0;
        for (int i = size; i < strstrstr.size; i++) {
            strstrstr.word[i] = strstr.word[j];
            j++;
        }
    }
    return strstrstr;
}

char& str::operator[](int i ){

    return this->word[i] ;
}

// pour la destruction d'un str ;

str::~str(){

    cout<<"\n appel du destructeur\n" ;
    delete word ;
}
