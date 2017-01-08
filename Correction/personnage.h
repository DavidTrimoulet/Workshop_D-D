#ifndef PERSONNAGE_H_INCLUDED
#define PERSONNAGE_H_INCLUDED

typedef struct Personnage Personnage;
struct Personnage{
    char *nom;
    int age;
    int force;
    int endurance;
    Personnage *nextPersonnage;
};
Personnage* creerPersonnageManuel(char *nom, int age,int force,int endurance );
Personnage* creerPersonnageAuto(char *nom );
Personnage* ajouterPersonnageListe(Personnage *personnageAAjouter, Personnage *dernierPersonnageDeLaListe);
Personnage* creerDesPersonnages(char *noms[], int nb );

#endif // PERSONNAGE_H_INCLUDED
