#include <stdio.h>  


int main() {  
    int lignes, colonnes;  
    int matrice[50][50];  
    int *p;  

    // Demander à l'utilisateur de saisir le nombre de lignes et de colonnes  
    printf("Entrez le nombre de lignes : ");  
    scanf("%d", &lignes);  
    printf("Entrez le nombre de colonnes : ");  
    scanf("%d", &colonnes);  

    // Remplir la matrice avec des valeurs saisies par l'utilisateur  
    printf("Remplissez la matrice :\n");  
    p = &matrice[0][0]; // Pointer vers le début de la matrice  
    for (int *end = p + (lignes * colonnes); p < end; p++) {  
        printf("Valeur : ");  
        scanf("%d", p);  
    }  

    // Afficher la matrice  
    printf("Contenu de la matrice :\n");  
    p = &matrice[0][0]; // Réinitialiser le pointeur au début de la matrice  
    for (int *end = p + (lignes * colonnes); p < end; p++) {  
        printf("%d ", *p);  
        if ((p - &matrice[0][0] + 1) % colonnes == 0) {  
            printf("\n"); // Nouvelle ligne après chaque ligne de la matrice  
        }  
    }  

    return 0;  
}