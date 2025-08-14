#include <stdio.h>
int main(){
    int T[50],N,I,J; 
    //saisir des dones
    printf("Dimension du tableau (max.50) : ");
    scanf("%d", &N );
    for (I=0; I<N; I++){
        printf("Elément %d : ", I);
        scanf("%d", &T[I]);    
    }
    //affichier le tableau
    printf("Tableau donné : \n");
    for (I=0; I<N; I++)
        printf("%d ", T[I]);
    printf("\n");
    
    /* Effacer les zéros et comprimer : */
    /* Copier tous les éléments de I vers J et augmenter J pour les éléments non nuls. */
    for (I=0, J=0 ; I<N ; I++){
        T[J] = T[I];
        if (T[I] !=0)
            J++;
    }
    /* Nouvelle dimension du tableau ! */
    N = J;
    /* Edition des résultats */
    printf("Tableau résultat :\n");
    for (I=0; I<N; I++)
        printf("%d ", T[I]);
    printf("\n"); 
    return 0;
}