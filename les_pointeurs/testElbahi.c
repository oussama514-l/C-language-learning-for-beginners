#include <stdio.h>
int main(){
    int x,i,j;
    printf("donnez un nm:");
    scanf("%d",&x);

    for(i=1;i<=x;i++){
        for(j=1;j<=i;j++)
            printf("x ");
        printf("\n");
    }

    for(i=1;i<=x;i++){
        for(int k=1;k<=x-i+1;k++)
            printf("+ ");
        printf("\n"); 
    }
    for(i=1;i<=x;i++){
        for(j=x-1;j>=i;j--)
            printf(" ");
        for(int k=1;k<=i;k++)
            printf("* ");
        printf("\n"); 
    }
    int l;
    for(i=-x;i<x+i;j++){
        if(i<0)
            l=-i;
        else
            l=i;
        for(j=0;j<x+1;j++){
            if(j<x-l)
                printf(" ");
            else   
                printf("* ");
        }
        printf("\n");
    }
    return 0;
}