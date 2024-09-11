Épreuve de Programmation Orientée Objet (POO) - Examen 2021-2022
Ce dépôt contient les fichiers sources pour l'épreuve de programmation orientée objet (POO) de l'examen de la session 2021-2022 à l'Université Gaston Berger de Saint-Louis.

Objectif
L'objectif de cette épreuve est de mettre en pratique les concepts de la programmation orientée objet, notamment l'héritage, le polymorphisme et la gestion dynamique de la mémoire en C++. Le contexte de l'exercice est la simulation de gestion de stock d'une compagnie pharmaceutique, incluant les coûts de fabrication des vaccins et la gestion des vaccins délocalisés.

Contenu
Le dépôt contient les fichiers suivants :

vaccin.h : Déclarations des classes Vaccin et Delocalise, ainsi que des énumérations associées.
vaccin.cpp : Implémentation des méthodes des classes Vaccin et Delocalise.
main.cpp : Programme principal pour tester les fonctionnalités des classes.
README.md : Documentation du projet.
Classes et Méthodes
1. Classe Vaccin
Modélise un vaccin avec les attributs suivants :

nom : Nom du vaccin (chaîne de caractères).
volumeDose : Volume par dose (type double).
nombreDose : Nombre de doses à produire (type int).
fabrication : Mode de fabrication (Standard ou HighTech).
Méthodes :

Constructeur : Vaccin(const char* nomVaccin, double volume, int nbDoses, Fabrication modeFab = Standard) - Initialise les attributs du vaccin avec un mode de fabrication par défaut de Standard.
affiche() const : Affiche les détails du vaccin selon le format spécifié.
conditionnement() const : Calcule le coût de conditionnement.
calculerFabrication() const : Calcule le coût de fabrication, avec majoration pour HighTech.
production() const : Calcule le coût total de production (somme du coût de conditionnement et de fabrication).
2. Classe Delocalise (Hérite de Vaccin)
Modélise un vaccin délocalisé avec un attribut supplémentaire :

delocalisation : Booléen indiquant si la production est délocalisée dans un pays frontalier (true) ou non (false).
Méthodes :

Constructeur : Delocalise(const char* nomVaccin, double volume, int nbDoses, Fabrication modeFab = Standard, bool estDelocalise = false) - Initialise les attributs du vaccin, y compris la délocalisation.
affiche() const : Affiche les détails du vaccin, y compris l'information sur la délocalisation.
production() const : Redéfinit la méthode pour calculer le coût de production avec réduction selon la délocalisation.
3. Classe Compagnie
Modélise une compagnie pharmaceutique avec :

nom : Nom de la compagnie (chaîne de caractères).
stock : Tableau de vaccins.
Méthodes :

Constructeur : Compagnie(const char* nomCompagnie) - Initialise le nom de la compagnie.
Destructeur : Libère la mémoire allouée pour les vaccins.
ajouter(Vaccin* v) : Ajoute un vaccin au stock de la compagnie.
afficher() const : Affiche les détails de tous les vaccins dans le stock.
calcul() const : Calcule le coût total de production de tous les vaccins dans le stock.
