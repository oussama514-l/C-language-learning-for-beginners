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
    afficher(l, c, tab); 
    return 0;
}
//exercice2:(calculer la some de tableau 2d)
#include <stdio.h>

int moy(int n, int m, int tab[n][m]) {
    int *p, sum = 0,count=0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            p = &tab[i][j];
            sum += *p;
            count++;
        }
    }
    return (float)sum/count;
}

int main() {
    int n = 3, m = 3;
    int tab[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int result = moy(n, m, tab);
    printf("La moyene des éléments est: %d\n", result);
    return 0;
}
//exercice3:(maximum)
#include <stdio.h>

int max2D(int l,int c,int T[l][c]){
    int *p,max;
    max=T[0][0];
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            p=&T[i][j];
            if(*p>max)
                max=*p;
        }
    }
    return max;
}
int main() {
    int n = 3, m = 3;
    int tab[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int result = max2D(n,m,tab);
    printf("Le plus grand élément est: %d\n",result);
    return 0;
}
//exercice4:(transfer 2d-->1d)

//exercice5:(echanger linges)
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
//exercice6:(suprimer doublons dans tableau 2d)


