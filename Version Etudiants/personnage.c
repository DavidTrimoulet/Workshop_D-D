#include "personnage.h"
#include <stdlib.h>
#include <time.h>
#include <string.h>

Personnage* creerPersonnageManuel(char *nom, int age,int force,int endurance ){

    Personnage *personnageEnCoursDeCreation = malloc(sizeof(Personnage));
    personnageEnCoursDeCreation->age = age;
    personnageEnCoursDeCreation->nom = malloc(sizeof(char) * strlen(nom));
    strcpy(personnageEnCoursDeCreation->nom, nom );
    personnageEnCoursDeCreation->force = force;
    personnageEnCoursDeCreation->endurance = endurance;
    personnageEnCoursDeCreation->nextPersonnage = NULL;

    return personnageEnCoursDeCreation;

}

Personnage* creerDesPersonnages(char *noms[], int nb ){
    int i;
    Personnage *listPersonnage = malloc(sizeof(Personnage));
    for(i=0; i < nb;i++){
        //Cree un personnage avec la méthode creerPersonnageAuto
        //Ajoute un personnage à la liste
    }
    return listPersonnage;
}

Personnage* creerPersonnageAuto(char *nom ){
    //Cree un personnage avec la fonction creerPersonnageManuel et des valeurs aléatoires
}


Personnage* ajouterPersonnageListe(Personnage *personnageAAjouter, Personnage *dernierPersonnageDeLaListe){
    //Ajoute un personnage à la liste dernierPersonnageDeLaListe
}
