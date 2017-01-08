#ifndef PERSONNAGE_H_INCLUDED
#define PERSONNAGE_H_INCLUDED

typedef struct personnage personnage;
struct personnage{
    char *nom;
    char *prenom;
    int age;
    int force;
    int endurance;
    personnage *nextPersonnage;
};

personnage* creerPersonnage(char *nom,char *prenom, int age,int force,int endurance );
personnage* ajouterPersonnageListe(personnage *personnageAAjouter, personnage *dernierPersonnageDeLaListe);

#endif // PERSONNAGE_H_INCLUDED
