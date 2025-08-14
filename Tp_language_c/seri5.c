//exercice1:
#include <stdio.h>
int main(){
    int tab[10]={4,80,-10,-11,950,-11,950,0,900,-3};
    int i,indice_max,indice_min;
    int min=tab[0],max=tab[0];
    for (i=0;i<10;i++){
        if (tab[i]>max){
            max=tab[i];    
            indice_max=i;
        }
        if(tab[i]<min){
            min=tab[i];
            indice_min=i;
        }
    }
    printf("le maximum est:%d\nl'indice de ce maximum est:%d\n",max,indice_max);  
    printf("le minimum est:%d\nl'indice de ce minimum est:%d\n",min,indice_min);
}
//exercice2:
#include <stdio.h>
int main(){
    int A[8]={-22,-1,0,9,10,22,100};
    int i,val;
    printf("entrer une valeur qui est inserer dans le tableau:");
    scanf("%d",&val);
    
    int k=7;
    for(i=k;i>0 && A[i-1]>val;i--)
            A[i]=A[i-1];
    A[i]=val; 

    printf("[ ");
    for(i=0;i<k+1;i++)
        printf("%d ",A[i]);
    printf("]\n");
    return 0;
}
//exercice4:
