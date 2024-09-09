# Épreuve de Programmation Orientée Objet (POO) - Examen 2021-2022

Ce dépôt contient les fichiers sources pour l'épreuve de programmation orientée objet (POO) de l'examen de la session 2021-2022 à l'Université Gaston Berger de Saint-Louis.

## Objectif

L'objectif de cette épreuve est de mettre en pratique les concepts de la programmation orientée objet, notamment l'héritage, le polymorphisme et la gestion dynamique de la mémoire en C++. Le contexte de l'exercice est une simulation simplifiée de gestion de stock d'un magasin.

## Contenu

Le dépôt contient les fichiers suivants :

- `Article.h` et `Article.cpp` : Classe de base représentant un article générique dans le magasin.
- `ArticleImporte.h` et `ArticleImporte.cpp` : Classe dérivée représentant un article importé avec une taxe d'importation.
- `ArticleLocal.h` et `ArticleLocal.cpp` : Classe dérivée représentant un article local avec un coût de transport.
- `Magasin.h` et `Magasin.cpp` : Classe `Magasin` qui gère un stock d'articles (importés et locaux).
- `main.cpp` : Fichier principal pour tester le fonctionnement des classes et simuler un magasin.

## Instructions pour l'examen

L'épreuve consiste à :

1. Créer et gérer des articles locaux et importés dans un magasin.
2. Utiliser les mécanismes de l'héritage et du polymorphisme pour permettre la gestion uniforme des articles.
3. Afficher les informations spécifiques à chaque type d'article dans le magasin.

## Compilation et exécution

### Prérequis

- Un compilateur C++ tel que `g++`.

### Compilation

Pour compiler tous les fichiers, utilisez la commande suivante dans votre terminal :

```bash
g++ *.cpp -o start 
