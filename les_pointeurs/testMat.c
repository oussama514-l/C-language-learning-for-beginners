//exercice1: (cree et affichir un tableau 2d)
#include <stdio.h>

void remplir(int n,int m ,int tab[n][m]){
    int *p;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            p=&tab[i][j];
            printf("T[%d][%d]=",i,j);
            scanf("%d",p);
        }
    }
}
void inverserLignes(int n, int m, int tab[n][m]) {
    int *p1, *p2;
    for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j < m; j++) {
            p1 = &tab[i][j];
            p2 = &tab[n - i - 1][j];
            int temp = *p1;
            *p1 = *p2;
            *p2 = temp;
        }
    }
}
void afficher(int n, int m, int tab[n][m]) {
    int *p;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            p = &tab[i][j];
            printf("%d ", *p);
        }
        printf("\n");
    }
}
int main() {
    int l,c;
    printf("entrer le nmbr des linges du tableau:");
    scanf("%d",&l);
    printf("entrer le nmbr des colonnes du tableau:");
    scanf("%d",&c);
    int tab[l][c];
    remplir(l,c,tab);
    printf("avant l'echange:\n");
    afficher(l, c, tab); 
    inverserLignes(l,c,tab);
    printf("apres l'echange:\n");
    afficher(l, c, tab); 
    return 0;
}