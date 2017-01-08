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
    printf("Combien de personnage voulez vous créer?");
    scanf("%d", &nbPersonnageAcreer);
    int i = 0;
    nomPersonnageACreer = malloc(sizeof(char) * nbPersonnageAcreer);
    for(;i<nbPersonnageAcreer;i++){
        char* nom;
        char buffer[255];
        printf("nom du personnage n°%d", i+1);
        scanf("%s", buffer);
        nomPersonnageACreer[i] = malloc(sizeof(char) * strlen(buffer));
        strcpy(nomPersonnageACreer[i], buffer);
    }
    listPersonnage = creerDesPersonnages(nomPersonnageACreer, nbPersonnageAcreer);
    afficherDesPersonnages(listPersonnage);
    writePersonnage("personnages", listPersonnage);
}

void afficherMenu(Personnage *listPersonnage){
    listPersonnage = loadPersonnage("personnages");
    afficherDesPersonnages(listPersonnage);
}

int startMenu(Personnage *listPersonnage){
    int choice = 1;
    char* userEntry;
    do{
        printf("Que voulez vous faire? creer | afficher | quitter?");
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