#include "Article.h"
#include "ArticleImporte.h"
#include "ArticleLocal.h"
#include "Magasin.h"
#include <iostream>

using namespace std;

int main() {
 
    Magasin magasin(5); 

    
    char design1[] = "Laptop";
    char design2[] = "Smartphone";
    char design3[] = "Table";
    char design4[] = "Camera";
    char design5[] = "Chair";
    
   
    Article* article1 = new ArticleImporter(101, design1, 1000, 15); 
    Article* article2 = new ArticleImporter(102, design4, 700, 20); 
    
   
    Article* article3 = new ArticleLocal(103, design2, 500, 50); 
    Article* article4 = new ArticleLocal(104, design3, 200, 30); 
    Article* article5 = new ArticleLocal(105, design5, 150, 20); 

   
    magasin.ajouter(article1);
    magasin.ajouter(article2);
    magasin.ajouter(article3);
    magasin.ajouter(article4);
    magasin.ajouter(article5);

  
    magasin.affiche();

    
    delete article1;
    delete article2;
    delete article3;
    delete article4;
    delete article5;

    return 0;
}
