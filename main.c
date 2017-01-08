#include <stdio.h>
#include <stdlib.h>
#include "affichage.h"
#include "personnage.h"
#include "PersonnageLoader.h"
#include <string.h>
#include "menu.h"

int main()
{
    int choice = 0;
    Personnage *listeDePersonnage = malloc(sizeof(Personnage));
    do{
    
        choice = startMenu();
       
    }while(choice);
    return 0;
}
