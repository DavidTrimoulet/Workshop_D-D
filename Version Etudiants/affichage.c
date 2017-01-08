#include "affichage.h"
#include "stdio.h"

void afficherPersonnage(Personnage *monPersonnage){

    printf("personnage : %s \nAge : %d \nForce : %d \nEndurance : %d\n\n",
            monPersonnage->nom,
            monPersonnage->age,
            monPersonnage->force,
            monPersonnage->endurance );
}

void afficherDesPersonnages(Personnage *listeDePersonnage){

   Personnage *personnageAAfficher = listeDePersonnage;
    while(personnageAAfficher->nextPersonnage){
            afficherPersonnage(personnageAAfficher);
            personnageAAfficher = personnageAAfficher->nextPersonnage;
    }

}
