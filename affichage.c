#include "affichage.h"
#include "stdio.h"

void afficherPersonnage(personnage *monPersonnage){

    printf("personnage : %s %s \nAge : %d \nForce : %d \nEndurance : %d\n\n",
            monPersonnage->prenom,
            monPersonnage->nom,
            monPersonnage->age,
            monPersonnage->force,
            monPersonnage->endurance );
}

void afficherDesPersonnages(personnage *listeDePersonnage){

    personnage *personnageAAfficher = listeDePersonnage;
    while(personnageAAfficher){
            afficherPersonnage(personnageAAfficher);
            personnageAAfficher = personnageAAfficher->nextPersonnage;
    }

}
