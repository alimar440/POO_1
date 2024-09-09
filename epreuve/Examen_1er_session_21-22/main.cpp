
#include "Article.h"
#include "ArticleImporte.h"
#include "ArticleLocal.h"
#include "Magasin.h"
#include <iostream>

using namespace std;

int main() {
 
    Magasin magasin(5); 

<<<<<<< HEAD

=======
    
>>>>>>> 2864bc249ae0d3dc143546a1ef58a590d362b382
    char design1[] = "ordinateur";
    char design2[] = "telephone";
    char design3[] = "Tablette";
    char design4[] = "Camera";
    char design5[] = "velo";
    
    Article* article1 = new ArticleImporter(32123, design1, 100000, 15000); 
    Article* article2 = new ArticleImporter(2334, design4, 70000, 20000); 
    
<<<<<<< HEAD
    
=======
   
>>>>>>> 2864bc249ae0d3dc143546a1ef58a590d362b382
    Article* article3 = new ArticleLocal(12303, design2, 50000, 5000); 
    Article* article4 = new ArticleLocal(16404, design3, 20000, 30000); 
    Article* article5 = new ArticleLocal(12305, design5, 15000, 2000); 

   
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
