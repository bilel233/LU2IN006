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