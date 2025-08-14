#include <stdio.h>
void changerpair(int n, int T[]) {
    int *p1 = T, *p2 = T + n - 1, temp;
    while (p1 < p2) {
        // T9der t3rf wach p1 wa7ed pair
        if (*p1 % 2 == 0)
            p1++;
        else {
            // Si p2 pair, on le swap
            if (*p2 % 2 == 0) {
                temp = *p1;
                *p1 = *p2;
                *p2 = temp;
                p1++;
                p2--;
            } else 
                p2--;
            
        }
    }
}
int main() {
    int tab[9] = {7, 4, 7, 8, 4, 6, 3, 9, 6};
    changerpair(9, tab);
    // Affichage du tableau modifié
    for (int i = 0; i < 9; i++)
        printf("%d ", tab[i]);
    printf("\n");
    return 0;
}
//;uh;
#include <stdio.h>

int main() {
    int base, i, j, space;

    printf("Nombre d'étoiles à la base du triangle (impair) ? ");
    scanf("%d", &base);

    if (base % 2 == 0) {
        printf("Veuillez saisir un nombre impair.\n");
        return 1;
    }

    int lines = (base + 1) / 2;

    for (i = 0; i < lines; i++) {
        space = lines - i - 1;
        for (j = 0; j < space; j++) {
            printf(" ");
        }
        for (j = 0; j < (2 * i + 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


