//ecrire un programme a l'aide des fonctions qui est verifier l'anne est besixtil ou non
#include <stdio.h>
void besextile(int anne){
    if(anne%4==0 && anne%100!=0 ||anne%400==0)
        printf("%d est bisextile\n",anne);
    else
        printf("%d n'est pas bisextile\n",anne);
}
int main(){
    int a;
    printf("entrer l'anne a verifier:");
    scanf("%d",&a);
    besextile(a);
}
//exrire un programe a l'aide des fonction qui determie si un nmbr est premier ou non
#include <stdio.h>
void est_premier(int n){
    int i,j=0;
    for(i=2;i<n;i++){
        if(n%i==0)
            j++;
    }
    if(j==0)
        printf("le nmbr est premier\n");
    else
        printf("le nmbr n'est pas premier\n");    
} 
int main(){
    int n;
    printf("entrer un nmbr entier positive:");
    scanf("%d",&n);
    est_premier(n);
}
//ecrire un proramme qui compt et affichier le nmbr des chiffres pour un entier
#include <stdio.h>
int cmpt_nmbr(long N){
    int cmpt=0;
    do{
        N=N/10;
        cmpt++;
    }while(N!=0);
    return cmpt;
}
int main(){
    long N;
    printf("entrer un entier:");
    scanf("%ld",&N);
    printf("le nmbr des chifres de %ld est:%d\n",N,cmpt_nmbr(N));
}
//ecrire un programe qui demande a l'utilisateur de saisir le rayon du cercle ,
//puis le programme affiche le diametre ,la surface et le perimetre du cercle.
#include <stdio.h>
float diametre(float R){
    int D;
    D=R*2;
    return D;
}
float surface(float R){
    int S;
    S=R*R*3.14;
    return S;
}
float perimetre(float R){
    return R*2*3.14;
}
int main(){
    float r;
    printf("entrer le rayon de cercle:");
    scanf("%f",&r);
    float d=diametre(r);
    float s=surface(r);
    float p=perimetre(r);
    printf("alors le diametre de cercle est:%.f ,et la surface est:%.2f,et le piremetre est:%.2f\n",d,s,p);
}
/* 
ecrire un programme qui est saisir et affichier le minimum et le maximum et affichier tableau inverser
*/
#include <stdio.h>
void saisir_tab(int T[10]){
    int i;
    for (i=0;i<10;i++){
        printf("entrer l'element nm%d:",i+1);
        scanf("%d",&T[i]);
    }
}
void maximum(int T[10]){
    int i,max=T[0];
    for (i=0;i<10;i++)
        if(T[i]>=max)
            max=T[i];
    printf("le maximum des eslements du tableau est:%d\n",max);
}
void minimum(int T[10]){
    int i,min=T[0];
    for(i=0;i<10;i++)
        if(T[i]<=min)
            min=T[i];
    printf("le minimum de ce tableau est:%d\n",min);
}
void inverse(int T[10]){
    int Ts[10],i;
    for (i=0;i<10;i++)
        Ts[9-i]=T[i];

    printf("l'inverse du tableau:");
    for (i=0;i<10;i++)
        printf("%d ",T[i]);
    printf("\n"); 
}
/*
methode 2:
void inverse(int T[10]){
    int tmp,i,j;
    for (i=0,j=9;i<10/2;i++,j--){
        tmp=T[i];
        T[i]=T[j];
        T[j]=tmp;
    }
    printf("l'inverse de tableau est:\n");
    for (i=0;i<10;i++)
        printf("%d ",T[i]);
    printf("\n");
}
*/
void affichier(int T[10]){
    printf("tableau origine:");
    for (int i=0;i<10;i++)
        printf("%d ",T[i]);
    printf("\n");
}
int main(){
    int T[10];
    saisir_tab(T);
    maximum(T);
    minimum(T);
    affichier(T);
    inverse(T);
}
/* ecrire un programme a laide des fonctions qui trier
 un tableau donnz a l'order croissante et decroissante*/
#include <stdio.h>
void affichier(int T[6]){
    for(int i=0;i<6;i++)
        printf("%d ",T[i]);
    printf("\n");
}
void tri_croissante(int T[]){
    int i,j,aide;
    int n=6;
    for (i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(T[i]>T[j]){
                aide=T[i];
                T[i]=T[j];
                T[j]=aide;
            }
    affichier(T);
}
void tri_decroissante(int T[]){
    int i,j,aide;
    int n=6;
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(T[i]<T[j]){
                aide=T[i];
                T[i]=T[j];
                T[j]=aide;
            }
    affichier(T);
}
int main(){
    int T[6]={2,34,-11,4,0,-22};
    affichier(T);
    tri_croissante(T);
    tri_decroissante(T);
}
// matrice addition et multiplication 
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
