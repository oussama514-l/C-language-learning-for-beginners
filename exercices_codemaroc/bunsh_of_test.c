//exercic6:
#include <stdio.h>
#include <stdlib.h>
int main(){
    float note;
    printf("saisir la note:\n");
    scanf("%f",&note);
    int i;
    while(note>20||note<0){
        printf("saisir la note:\n");
        scanf("%f",&note);
        i++;
    }
    if(note>=10){
        printf("valide\n");
    }else{
        printf("non valide\n");
    }
   
    return 0;
}
//exercice 20:
#include <stdio.h>
int main(){
    int i;
    for(i=0;i<=10;i++){
        printf("%d*5=%d\n",i,i*5);
    }
    return 0;
    
}
//exercice24:
#include <stdio.h>

int main(){
    int i=0;
    do{
        printf("8*%d=%d\n",i,i*8);
        i++;
    }while(i<=10);
    return 0;
}
//exercice28:
#include <stdio.h>

int main(){
    int n,i;
    int fact=1;
    printf("entrer un nommbre entier:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("le factoriel de %d est:%d\n",n,fact);
    return 0;
}
//exercice