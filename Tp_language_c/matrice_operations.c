#include <stdio.h>
#define MAX_LIGNES 50
#define MAX_COLONNES 50
int main() {
    
    int T[MAX_LIGNES][MAX_COLONNES];
    int L, C;
    int somme = 0;
    printf("Entrez le nombre de lignes (L) : ");
    scanf("%d", &L);
    printf("Entrez le nombre de colonnes (C) : ");
    scanf("%d", &C);
    if (L <= 0 || L > MAX_LIGNES || C <= 0 || C > MAX_COLONNES) {
        printf("Les dimensions doivent �tre entre 1 et %d pour les lignes, et entre 1 et %d pour les colonnes.\n", MAX_LIGNES, MAX_COLONNES);
        return 1;
    }
    printf("Entrez les �l�ments du tableau %d x %d :\n", L, C);
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            printf("T[%d][%d] = ", i, j);
            scanf("%d", &T[i][j]);
            somme += T[i][j];
        }
    }
    printf("\nLe tableau T est :\n");
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            printf("%d ", T[i][j]);
        }
        printf("\n");
    }
    printf("\nLa somme de tous les �l�ments du tableau est : %d\n", somme);

    return 0;
}