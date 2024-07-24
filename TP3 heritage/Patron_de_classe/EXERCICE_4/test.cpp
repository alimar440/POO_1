italique 

int main() {
    // Code ANSI pour mettre le texte en italique
    const std::string italic_on = "\033[3m";
    const std::string italic_off = "\033[0m";

    std::cout << italic_on << "Texte en italique" << italic_off << std::endl;

    return 0;
}


gras 
#include <iostream>

int main() {
    // Code ANSI pour mettre le texte en gras
    const std::string bold_on = "\033[1m";
    const std::string bold_off = "\033[0m";

    std::cout << bold_on << "Texte en gras" << bold_off << std::endl;

    return 0;
}

couleurr



#include <iostream>

int main() {
    // Code ANSI pour la couleur rouge
    const std::string color_red = "\033[31m";
    const std::string color_reset = "\033[0m";

    // Affichage du texte en rouge
    std::cout << color_red << "Texte en rouge" << color_reset << std::endl;

    return 0;
}
Dans cet exemple :

\033[31m active la couleur rouge.
\033[0m réinitialise la couleur du texte à la normale.
Vous pouvez ajuster la couleur en utilisant d'autres codes ANSI pour différentes couleurs. Voici quelques codes pour d'autres couleurs de base :

\033[30m : Noir
\033[32m : Vert
\033[33m : Jaune
\033[34m : Bleu
\033[35m : Magenta
\033[36m : Cyan
\033[37m : Blanc