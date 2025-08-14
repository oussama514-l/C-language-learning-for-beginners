#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main (){
    int nmbNote;
    printf("entrer le nmbr des notes:\n");
    scanf("%d",&nmbNote);
    int i =1;
    float note,s;
    int j;
    for (j=0 ;(j<nmbNote) ;j++) { 
        do {
        printf("saisir la valeur de la note%d:",i);
        scanf("%f",&note);

        if (note<0 || note>20){
            printf("don't run! you should chose a val enter o and 20\n");
        }
        }while (note>20 || note<0);

        s+=note;
        i++;
    }
    float moy =s/nmbNote;
    printf("la moyenne est:%.2f\n",moy);
        
    return 0;
}













