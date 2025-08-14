#include <stdio.h>
int main(){
    int T[6]={3,4,5,3,2,5};
    int T1[30];
    int len=6;
    int i,j,k=0;
    for(i=0;i<len;i++)
        printf("%d ",T[i]);
    printf("\n");
    for(i=0,j=0;i<len;i++){
        T[i]=T[j];
        if(T[i]!=T[j]){
            j++;
        }
    }
    len=j;
    for(i=0;i<len;i++)
        printf("%d ",T[i]);
    printf("\n");
    return 0;
}