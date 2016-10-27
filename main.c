#include <stdio.h>
#include <stdlib.h>
#include "affichage.h"
#include "personnage.h"


int main()
{

    personnage *listeDePersonnage = NULL;
    personnage *gimli = creerPersonnage("Le Nain", "Gimli", 105, 200, 200);
    personnage *legolas = creerPersonnage("L'elf", "Legolas", 400, 100, 100);
    personnage *boromir = creerPersonnage("L'humain", "Boromir", 30, 50, 100);
    personnage *isildur = creerPersonnage("Le Roi", "Isildur", 40, 300, 300);

    listeDePersonnage = ajouterPersonnageListe(legolas, gimli);
    listeDePersonnage = ajouterPersonnageListe(boromir, listeDePersonnage);
    listeDePersonnage = ajouterPersonnageListe(isildur, listeDePersonnage);

    afficherDesPersonnages(listeDePersonnage);

    return 0;
}
