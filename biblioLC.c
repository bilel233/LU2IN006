#include "biblioLC.h"


int main(){
    
    return 0;
}
// allocation dynamique
// libererla memoire de l -> titre
Livre* creerlivre(int num,char* titre,char* auteur){
    /* creer un livre */

     Livre*l =(Livre*)malloc(sizeof(Livre));
     if (l ==NULL) return NULL;
     l->num=num;
     strdup(l->auteur);
     strdup(l->titre);
     l->suiv = NULL;
}