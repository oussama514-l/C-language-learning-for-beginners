#include <stdio.h>

void tri_insertion(int T[], int n) {  
    int i,tmp,j;  
    for (i=1;i<n;i++){  
        tmp=T[i]; 
        j=i-1;
        while (j>=0 && tmp < T[j]){  
            T[j+1]=T[j]; 
            j--;  
        }  
        T[j+1]=tmp; 
    }  
}  

void tri_selection(int T[],int n){
    int i,j,index,min;
    for (i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++)
            if(T[j]<T[min])
                min=j;
        if(i != min){
            index=T[i];
            T[i]=T[min];
            T[min]=index;
        }
    }
}
int main(){
    int n,T[50],i;
    printf("donnez le len de tableau:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("donnez l'element %d:",i+1);
        scanf("%d",&T[i]);
    }
    printf("avant le tri: [");
    for(i=0;i<n;i++)
        printf("%d ",T[i]);
    printf("]\n");

    //tri_selection(T,n);
    
    tri_insertion(T,n);

    printf("apres le tri: [ ");
    for(i=0;i<n;i++)
        printf("%d ",T[i]);
    printf("]\n");
    return 0;
}






