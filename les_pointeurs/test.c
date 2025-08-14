// exercice maximum de deux variable par utilisee les pointures
#include <stdio.h>
void maximum(int *a,int *b,int *m){
    if (*a>*b)
        *m=*a;
    else
        *m=*b;
}
int main(){
    int x,y,max; 
    printf("entrer la valeur de x:");
    scanf("%d",&x);
    printf("entrer la valeur de y:");
    scanf("%d",&y);
    maximum(&x,&y,&max);
    printf("le maximum de deux valeur est:%d\n",max);
    return 0;
}

// exercice de tri d'un tableau par utilisee les pointures
#include <stdio.h>

void echange(int *a,int *b){
    int tmp;
    tmp=*a;
    *a=*b;
    *b=tmp;
}
void tri_selection(int T[],int taill){
    int i,j,min;
    for (i=0;i<taill-1;i++){
        min=i;
        for(j=i+1;j<taill;j++){
            if (T[j]<T[min]){
                min=j;
            }
        }
        echange(&T[i],&T[min]);
    }
}
int main(){

    int i,j;
    int taill=5;
    int T[5]={5,-22,0,-1,77};

    printf("[ ");
    for(i=0;i<taill;i++)
        printf("%d ",T[i]);
    printf("]\n");

    tri_selection(T,taill);

    printf("[ ");
    for(i=0;i<taill;i++)
        printf("%d ",T[i]);
    printf("]\n");
    
    return 0;
}