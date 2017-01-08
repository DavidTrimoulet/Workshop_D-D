/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "personnage.h"
#include "PersonnageLoader.h"
#include "affichage.h"


void createMenu(Personnage *listPersonnage){
    int nbPersonnageAcreer = 0;
    char **nomPersonnageACreer;
    printf("Combien de personnage voulez vous créer?\n");
    scanf("%d", &nbPersonnageAcreer);
    int i = 0;
    nomPersonnageACreer = malloc(sizeof(char) * nbPersonnageAcreer);
    for(;i<nbPersonnageAcreer;i++){
        printf("Nom du personnage N°%d",i+1);
        //Stock le nom du personnage dans le table nomPersonnageACreer
    }
    //Cree les personnages avec la fonction creerDesPersonnages
    //Sauvegarde les personnages dans le fichier avec la fonction writePersonnage
}

void afficherMenu(Personnage *listPersonnage){
    //Charge les personnages avec la fonction loadPersonnage
    //Affiche les personnages avec la fonction afficherDesPersonnages
}

int startMenu(Personnage *listPersonnage){
    int choice = 1;
    char* userEntry;
    do{
        printf("Que voulez vous faire? creer | afficher | quitter?\n");
        char buffer[255];
        scanf("%s", buffer);
        userEntry = malloc(sizeof(char) * strlen(buffer));
        strcpy(userEntry, buffer);
        if(!strcmp(userEntry, "creer")){
            createMenu(listPersonnage);
        }
        else if(!strcmp(userEntry, "afficher")){
            afficherMenu(listPersonnage);
        }
        else if(!strcmp(userEntry, "quitter")){
            choice = 0;
        }
        
    }while(choice);
    
    return choice;
}