#include "PersonnageLoader.h"
#include <string.h>
#include <windows.h>
#include <stdio.h>

//formate une chaine de caractere du chemin vers le fichier
char* formatPath(char name[]){
    char path[] = "data\\";
    char extension[] = ".data";
    //Format la chaine vers le fichier de donnee
    return fullPath;
}

Personnage* loadPersonnage(char *name){
    FILE *f;
    char * fullPath = formatPath(name);
    f = fopen(fullPath, "r");
    Personnage *listPersonnage = malloc(sizeof(Personnage));
    if( f != NULL){
       //Lit chacune des lignes du fichier puis créer un personnage avec creerPersonnageManuel
        //Ajoute le personnage à la liste listPersonnage
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
        //Ecrit dans le fichier une ligne pour chaque personnage dans la liste.
    }
    fclose(f);
}