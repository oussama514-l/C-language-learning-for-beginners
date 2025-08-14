#include <stdio.h>
void coppy1(int S[],int T[],int taill){
    int i;
    for(i=0;i<taill;i++)
        S[i]=T[i];
}
void saisir(int tab[],int n,int *p){
    for(p=tab;p<tab+n;p++){
        printf("Tab[%ld]=",(p-tab)+1);
        scanf("%d",p);
    }
}
void affichier(int tab[],int n,int *p ){
    for(p=tab;p<tab+n;p++)
        printf("%d ",*p);
    printf("\n");
}
int main(){
    int N;
    int q;
     
    int S[N];
    printf("entrer la taille du tableau:");
    scanf("%d",&N);
    int Tab[N];
    saisir(Tab,N,&q);
    affichier(Tab,N,&q);
    coppy1(S,Tab,N);

    affichier(S,N,&q);
    return 0;
}