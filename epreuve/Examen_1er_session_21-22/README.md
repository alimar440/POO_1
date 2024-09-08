# Gestion de Stock - Magasin

Ce projet est une simulation simple de gestion de stock dans un magasin. Le magasin peut gérer deux types d'articles : des articles importés et des articles locaux. Chaque article a une référence, une désignation et un prix d'achat, avec des spécificités supplémentaires pour les articles importés (taxe d'importation) et locaux (coût de transport).

## Fonctionnalités

- **Création d'articles** : Créez des articles importés et locaux avec des informations spécifiques.
- **Ajout d'articles au magasin** : Ajoutez des articles au stock du magasin.
- **Affichage des articles** : Affichez tous les articles du magasin avec leurs détails spécifiques.
- **Polymorphisme** : Le projet démontre l'utilisation du polymorphisme pour manipuler les articles dans le magasin de manière uniforme.

## Structure du projet

- `Article.h` et `Article.cpp` : Définition de la classe de base `Article`.
- `ArticleImporter.h` et `ArticleImporter.cpp` : Classe dérivée `ArticleImporter` pour les articles importés.
- `ArticleLocal.h` et `ArticleLocal.cpp` : Classe dérivée `ArticleLocal` pour les articles locaux.
- `Magasin.h` et `Magasin.cpp` : Classe `Magasin` pour gérer le stock d'articles.
- `main.cpp` : Fichier principal contenant la fonction `main()` pour exécuter le programme.

## Installation et compilation

### Prérequis

- Un compilateur C++ (par exemple, `g++` sous Linux/Mac ou MinGW sous Windows)
- Un terminal ou un environnement de développement intégré (IDE) tel que Visual Studio Code, CLion, ou Code::Blocks.

### Compilation

Pour compiler le projet, ouvrez un terminal dans le répertoire du projet et exécutez la commande suivante :

```bash
g++ -o start main.cpp Article.cpp ArticleImporter.cpp ArticleLocal.cpp Magasin.cpp
