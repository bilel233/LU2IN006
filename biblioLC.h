#ifndef BIBLIOLC_H
#define BIBLIOLC_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct livre{
    int num;
    char* titre;
    char *auteur;
    char* titre;
    struct livre* suiv;
}Livre;

typedef struct{ // tete fictive
    Livre* L; // premier element

}Biblio;

Livre* creerlivre(int num,char* titre,char* auteur);


#endif