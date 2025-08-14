#include <stdio.h>
int main(){
    float maxx,etud[12];
    int index,i=0;
    while(i<12){
        printf("entrer la note de l'etudiant nm %d:",i+1);
        scanf("%f",&etud[i]); 
        i++;
    }
    maxx=etud[0];
    for(i=0;i<12;i++){
        if(etud[i]>maxx){
            maxx=etud[i]; 
            index=i+1;
        }
    }
    printf("la note maximum de l'etudiants est:%.2f qui est trouver en l'etudiant nm%d\n",maxx,index);
    return 0;
}
