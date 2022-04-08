#include "biblioLC.h"


int main(){
    Livre* l = creerlivre(13,"Miserables","Victor");
    free(l);
    return 0;
}
// allocation dynamique
// libererla memoire de l -> titre
Livre* creerlivre(int num,char* titre,char* auteur){
    /* creer un livre */

     Livre*l =(Livre*)malloc(sizeof(Livre));
     if (l ==NULL) return NULL;
     l->num=num;
     l->auteur=strdup(auteur);
     l->titre=strdup(titre);
     l->suiv = NULL;
    return l;
}