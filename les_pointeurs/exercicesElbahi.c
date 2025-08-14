//exercice 1:(les operation calculatrice)
#include <stdio.h>
int main(){
    float a,b;
    float *p,*q;
    p=&a;
    q=&b;
    printf("entrer duex valuers:");
    scanf("%f%f",p,q);

    printf("a+b=%2.f",*p + *q);
    printf("\na-b=%2.f",*p - *q);
    printf("\na*b=%2.f",*p * *q);
    if(*q!=0)
        printf("\na/b=%2.f\n",*p / *q);
    else
        printf("\ndivision impossible!\n");
    return 0;
}
//exercice 2:(pair_noPair)
#include <stdio.h>
int main(){
    int n;
    int *p=&n;
    printf("entrer un nmbr entier:");
    scanf("%d",p);
    if(*p % 2==0)
        printf("le nmbr %d est pair!\n",*p);
    else
        printf("le nmbr %d est impair!\n",*p);
    return 0;  
}
//exercice 3:(affichage les diviseur d'un entier)
#include <stdio.h>
int main(){
    int n,i;
    int *p=&n;
    do{
        printf("entrer un nmbr entier positive non nul:");
        scanf("%d",p);
    }while(*p<=0);

    for(i=1;i<=*p;i++)
        if(*p % i==0)
            printf("%d ",i);
    printf("\n");
    return 0;  
}
//exercice 4:(foction echange)
#include <stdio.h>
void echange(int *a,int *b){
    int index;
    index=*a;
    *a=*b;
    *b=index;
}
void placer(int *a,int *b){
    int d;
    d=*a;
    *a=*a + *b;
    *b=d * *b; 
}
int main(){
    int n,m;
    printf("entrer deux entier:");
    scanf("%d%d",&n,&m);
    printf("%d et %d avant l'echange:",n,m);
    if(n*m>0){ 
        echange(&n,&m);
        printf("\n%d et %d aprer l'echange:\n",n,m);
    }
    else{
        placer(&n,&m);
        printf("\n%d et %d aprer l'emplacement:\n",n,m);
    }
    return 0;  
}
//exercice 5:(tri selection)
#include <stdio.h>
void triSelection(int taill,int tab[]){
    int *p1,*p2,*min;
    for(p1=tab;p1<tab+taill-1;p1++){
        min=p1;
        for(p2=p1+1;p2<tab+taill;p2++){ 
            if(*p2<*min)
                min=p2;
        }
        if(min!=p1){
            int temp=*p1;
            *p1=*min;
            *min=temp;
        }
    }
}
void afficher(int n,int T[]){
    int *p;
    for(p=T;p<T+n;p++)
        printf("%d ",*p);
    printf("\n");
}
int main(){
    int n;
    printf("Entrer la taille du tableau:");
    scanf("%d",&n);
    int T[n];
    int *p;
    for(p=T;p<T+n;p++){
        printf("T[%ld]=",(p-T)+1);
        scanf("%d",p);
    }
    printf("Voici le tableau avant le tri:\n");
    afficher(n,T);

    triSelection(n,T);

    printf("Voici le tableau après le tri:\n");
    afficher(n,T);
    
    return 0;
}
//exercice 6:(tri insersion)
#include <stdio.h>
void triInsertion(int taill,int tab[]){
    int *p1,*p2,key;
    for(p1=tab+1;p1<tab+taill;p1++){
        key=*p1;
        p2=p1-1;
        while(p2>=tab && *p2>key){
            *(p2+1)=*p2;
            p2--;
        }
        *(p2+1)=key;
    }
}
void afficher(int n,int T[]){
    int *p;
    for(p=T;p<T+n;p++)
        printf("%d ",*p);
    printf("\n");
}
int main(){
    int n;
    printf("Entrer la taille du tableau:");
    scanf("%d",&n);
    int T[n];
    int *p;
    for(p=T;p<T+n;p++){
        printf("T[%ld]=",(p-T)+1);
        scanf("%d",p);
    }
    printf("Voici le tableau avant le tri:\n");
    afficher(n,T);

    triInsertion(n,T);

    printf("Voici le tableau après le tri:\n");

    afficher(n,T);
    return 0;
}
//exercice 7:(suprimer un valeur dans un tableau)
#include <stdio.h>
void supprimerValeur(int *n,int tab[],int valeur){
    int *p1,*p2,trouve=0;
    for(p1=tab;p1<tab+*n;p1++){
        if(*p1==valeur){
            trouve=1;
            for(p2=p1;p2<tab+*n-1;p2++)
                *p2=*(p2+1);
            (*n)--;
            p1--; 
        }
    }
    if(!trouve)
        printf("Valeur non trouvée!\n");
}
void afficher(int n,int T[]){
    int *p;
    for(p=T;p<T+n;p++)
        printf("%d ",*p);
    printf("\n");
}
int main(){
    int n,valeur;
    printf("Entrer la taille du tableau:");
    scanf("%d",&n);
    int T[n];
    int *p;
    for(p=T;p<T+n;p++){
        printf("T[%ld]=",(p-T)+1);
        scanf("%d",p);
    }
    printf("Voici le tableau avant suppression:\n");
    afficher(n,T);
    printf("Entrer la valeur à supprimer:");
    scanf("%d",&valeur);
    supprimerValeur(&n,T,valeur);
    printf("Voici le tableau après suppression:\n");
    afficher(n,T);
    return 0;
}
//exercice 8:(suprimer les doublons)
#include <stdio.h>
void supprimerDoublons(int *n,int tab[]){
    int *p1,*p2,*p3;
    for(p1=tab;p1<tab+*n;p1++){
        for(p2=p1+1;p2<tab+*n;p2++){
            if(*p1==*p2){
                for(p3=p2;p3<tab+*n-1;p3++)
                    *p3=*(p3+1);
                (*n)--;
                p2--;
            }
        }
    }
}
void afficher(int n,int T[]){
    int *p;
    for(p=T;p<T+n;p++)
        printf("%d ",*p);
    printf("\n");
}
int main(){
    int n;
    printf("Entrer la taille du tableau:");
    scanf("%d",&n);
    int T[n];
    int *p;
    for(p=T;p<T+n;p++){
        printf("T[%ld]=",(p-T)+1);
        scanf("%d",p);
    }
    printf("Voici le tableau avant suppression des doublons:\n");
    afficher(n,T);
    supprimerDoublons(&n,T);
    printf("Voici le tableau après suppression des doublons:\n");
    afficher(n,T);
    return 0;
}
//exercice 9:(inverser tableau )
#include <stdio.h>
void inverserTableau(int n,int tab[]){
    int *p1,*p2,temp;
    for(p1=tab,p2=tab+n-1;p1<p2;p1++,p2--){
        temp=*p1;
        *p1=*p2;
        *p2=temp;
    }
}
void afficher(int n,int T[]){
    int *p;
    for(p=T;p<T+n;p++)
        printf("%d ",*p);
    printf("\n");
}
int main(){
    int n;
    printf("Entrer la taille du tableau:");
    scanf("%d",&n);
    int T[n];
    int *p;
    for(p=T;p<T+n;p++){
        printf("T[%ld]=",(p-T)+1);
        scanf("%d",p);
    }
    printf("Voici le tableau avant inversion:\n");
    afficher(n,T);
    inverserTableau(n,T);
    printf("Voici le tableau après inversion:\n");
    afficher(n,T);
    return 0;
}
//exercice 10:(translation tableau )
#include <stdio.h>
void decalerBas(int n,int tab[]){
    int *p,temp=tab[n-1]; 
    for(p=tab+n-1;p>tab;p--)
        *p=*(p-1);
    *tab=temp;
}
void afficher(int n,int T[]){
    int *p;
    for(p=T;p<T+n;p++)
        printf("%d ",*p);
    printf("\n");
}
int main(){
    int n;
    printf("Entrer la taille du tableau:");
    scanf("%d",&n);
    int T[n];
    int *p;
    for(p=T;p<T+n;p++){
        printf("T[%ld]=",(p-T)+1);
        scanf("%d",p);
    }
    printf("Voici le tableau avant décalage:\n");
    afficher(n,T);
    decalerBas(n,T);
    printf("Voici le tableau après décalage:\n");
    afficher(n,T);
    return 0;
}








