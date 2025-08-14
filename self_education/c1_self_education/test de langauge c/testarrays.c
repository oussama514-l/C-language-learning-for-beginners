#include <stdio.h>  
int main() {
    float etudiants[20];
    int i;
    for(i=0;i<20;i++){
        while (1){
            printf("entrer la note de l'etudiant nm:%d\n",i+1);
            scanf("%f",&etudiants[i]);
            if(etudiants[i]>=0 && etudiants[i]<=20){
                break;
            }else{
            printf("error!! la note doit etre entrer entre 0 et 20\n");     
            }
        }
    }
    printf("les note saisies sont:\n");
    for(i=0;i<20;i++){
        printf("la note de l'etudiant nm%d est:%.2f\n",i+1,etudiants[i]); 
    }
    return 0;  
}