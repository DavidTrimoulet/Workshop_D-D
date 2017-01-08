#include "personnage.h"
#include <stdlib.h>

personnage* creerPersonnage(char *nom,char *prenom, int age,int force,int endurance ){

    personnage *personnageEnCoursDeCreation = malloc(sizeof(personnage));
    personnageEnCoursDeCreation->age = age;
    personnageEnCoursDeCreation->prenom = prenom;
    personnageEnCoursDeCreation->nom = nom;
    personnageEnCoursDeCreation->force = force;
    personnageEnCoursDeCreation->endurance = endurance;
    personnageEnCoursDeCreation->nextPersonnage = NULL;

    return personnageEnCoursDeCreation;

}

personnage* ajouterPersonnageListe(personnage *personnageAAjouter, personnage *dernierPersonnageDeLaListe){

    personnageAAjouter->nextPersonnage = dernierPersonnageDeLaListe;
    return personnageAAjouter;
}
