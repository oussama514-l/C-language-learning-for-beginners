#include <stdio.h>
void affichier(int T[],int lenT){
    for(int i=0;i<lenT;i++)
        printf("%d ",T[i]);
    printf("\n");
}
int main(){
    int T[10];
    int i=0,j,aide;
    while(i<10){
        printf("T[%d]=",i+1);
        scanf("%d",&T[i]);
        i++;
    }
    affichier(T,10);
    for(i=0;i<9;i++){
        if(T[i]==0){
            j=i+1;
            while(T[j]==0 && j<9){
                j++;
            }
            aide=T[i];
            T[i]=T[j];
            T[j]=aide;
        }
    }
    printf("\n");
    affichier(T,10);
    return 0; 
}