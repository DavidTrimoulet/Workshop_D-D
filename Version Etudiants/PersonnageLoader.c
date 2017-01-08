#include "PersonnageLoader.h"
#include <string.h>
#include <windows.h>
#include <stdio.h>

//formate une chaine de caractere du chemin vers le fichier
char* formatPath(char name[]){
    char path[] = "data\\";
    char extension[] = ".data";
    char *fullPath = malloc(sizeof(char) * ( strlen(path) + strlen(name) + strlen(extension) + 1 ));
    strcpy(fullPath,path);
    strcat(fullPath,name);
    strcat(fullPath, extension);
    return fullPath;
}

Personnage* loadPersonnage(char *name){
    FILE *f;
    char * fullPath = formatPath(name);
    f = fopen(fullPath, "r");
    Personnage *listPersonnage = malloc(sizeof(Personnage));
    if( f != NULL){
        char line[255];
        memset(line, '\0', 255);
        while(fgets(line, 255 ,f)){
            char *nom = malloc(sizeof(char)*255);
            int age;
            int force;
            int endu;
            sscanf(line," %s %d %d %d\n", nom, &age, &force, &endu);
            Personnage *lastPersonnage = creerPersonnageManuel(nom, age, force, endu);
            listPersonnage = ajouterPersonnageListe(lastPersonnage, listPersonnage);
        }
    }
    fclose(f);
    return listPersonnage;
}



void writePersonnage(char *name, Personnage *listPersonnage){

    FILE *f;
    char * fullPath = formatPath(name);
    f = fopen(fullPath, "a");
    Personnage *personnageAEcrire = listPersonnage;
    
    if( f != NULL){
        while(personnageAEcrire->nextPersonnage != NULL){
           fprintf(f, "%s %d %d %d\n", personnageAEcrire->nom, personnageAEcrire->age, personnageAEcrire->force,personnageAEcrire->endurance);
           personnageAEcrire = personnageAEcrire->nextPersonnage;
        }   
    }
    fclose(f);
}