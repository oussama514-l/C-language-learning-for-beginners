#include <stdio.h>

void affichier_mat(int mat[50][50],int L,int C){
    int i,j;
    for(i=0;i<L;i++){
        for(j=0;j<C;j++)
            printf("%d ",mat[i][j]);
        printf("\n");
    }
}


int main() {
    int l1, c1;
    int l2,c2;
    int mat1[50][50],mat2[50][50],mat3[50][50];

    printf("Entrer le nombre de lignes et de colonnes pour la première matrice : ");
    scanf("%d %d", &l1, &c1);
    printf("Entrer les éléments de la première matrice : \n");
    for (int i = 0; i < l1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("mat2=[%d][%d]=",i,j);
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("la matriche1 est:\n");
    affichier_mat(mat1,l1,c1);
    printf("\n");

    printf("Entrer le nombre de lignes et de colonnes pour la deuxieme matrice : ");
    scanf("%d %d", &l2, &c2);
    printf("Entrer les éléments de la deuxième matrice :\n");
    for (int i = 0; i < l2; i++) {
        for (int j = 0; j < c2; j++) {
            printf("mat2=[%d][%d]=",i,j);
            scanf("%d", &mat2[i][j]);
        }
    }
    printf("la matrice2 est:\n");
    affichier_mat(mat2,l2,c2);
    printf("\n");

    if (l1 != l2 || c1!= c2) 
        printf("Les matrices ne peuvent pas être ajoutées.\n");
    else{
        for (int i = 0; i < l1; i++) {
            for (int j = 0; j < c1; j++) {
                mat3[i][j]=mat1[i][j]+mat2[i][j];
            }
        }
        printf("la somme de la matrice1 et la matrice 2 est:\n");
        affichier_mat(mat3,l1,c1);
    }
    printf("\n");
    if(c1!=l2){
        printf("multiplication impossible\n");
    }else{
    for (int i = 0; i < l1; i++) 
        for (int j = 0; j < c2; j++) 
            for (int k = 0; k < c1; k++) 
                mat3[i][j]+= mat1[i][k] * mat2[k][j];
    
    printf("la multiplication de matrice1 et matrice2 est:\n");
    affichier_mat(mat3,l1,c1);
    }
    return 0;
}


