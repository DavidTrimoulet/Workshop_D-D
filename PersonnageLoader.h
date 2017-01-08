/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   dataReader.h
 * Author: david
 *
 * Created on 29 décembre 2016, 11:32
 */

#ifndef DATAREADER_H
#define DATAREADER_H
#include "personnage.h"

Personnage* loadPersonnage(char *name);
char* formatPath(char name[]);
void writePersonnage(char *name,Personnage *personnage);

#endif /* DATAREADER_H */

