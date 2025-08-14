#include <stdio.h>
#define N 100

void chercherVal(int tab[],int n,int A,int *pos,int *nb_occ){
    int i=0;
    while(i<n){
        if(tab[i]==A){
            (*nb_occ)++;
            *pos=i;
        }
        i++;
    }
}
void saisie(int *ptab,int *taill){
    int i;
    do{
        printf("Donner la tailler du tableau:");
        scanf("%d",taill);
    }while(*taill<=0);
    for(i=0;i<*taill;i++){
        printf("donner tab[%d]",i);
        scanf("%d",ptab+i);
    }
}
void affichier(int tab[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",tab[i]);
    }
}
int main(){
    int tab[N],n,val,nb_occ,pos=1;
    saisie(tab,&n);
    affichier(tab,n);
    printf("\n donner la valeur a chercher;");
    scanf("%d",&val);
    chercherVal(tab,n,val,&pos,&nb_occ);
    if(nb_occ==0)
    printf("Nexiste pas\n");
    else
    printf("exist %d fois a la position %d\n",nb_occ,pos);
    
    return 0;
}