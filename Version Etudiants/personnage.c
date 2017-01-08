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
        Personnage *perso = creerPersonnageAuto(noms[i]);
        listPersonnage = ajouterPersonnageListe(perso, listPersonnage);
    }
    return listPersonnage;
}

Personnage* creerPersonnageAuto(char *nom ){
    srand(time(NULL));
    return creerPersonnageManuel(nom, (rand()%100), (rand()%10), (rand()%10)) ;
}


Personnage* ajouterPersonnageListe(Personnage *personnageAAjouter, Personnage *dernierPersonnageDeLaListe){
    personnageAAjouter->nextPersonnage = dernierPersonnageDeLaListe;
    return personnageAAjouter;
}
