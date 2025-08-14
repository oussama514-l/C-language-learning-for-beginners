#include <stdio.h>

void afficherTriangle(int taille, char c, int inverse) {
    if (!inverse) {
        // مثلث عادي (X)
        for (int i = 0; i < taille; i++) {
            for (int j = 0; j <= i; j++) {
                printf("%c ", c);
            }
            printf("\n");
        }
    } else{
        // مثلث مقلوب على اليمين (O)
        for (int i = taille; i > 0; i--) {
            // طباعة المسافات الفارغة
            for (int j = 0; j < taille - i; j++) {
                printf("  ");
            }
            // طباعة الحروف 'O'
            for (int j = 0; j < i; j++) {
                printf("%c ", c);
            }
            printf("\n");
        }
    }
}
int main() {
    int n;

    while (1) {
        printf("Entrer une valeur entière (0 si arrêt): ");
        scanf("%d", &n);

        if (n == 0) break; // إذا دخل المستخدم 0، البرنامج يتوقف

        afficherTriangle(n, 'X', 0); // طباعة مثلث 'X' (عادي)
        afficherTriangle(n, 'O', 1); // طباعة مثلث 'O' (مقلوب على اليمين)
    }

    return 0;
}
