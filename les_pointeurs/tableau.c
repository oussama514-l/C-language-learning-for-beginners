#include <stdio.h>
int main(){
    int tab[6];
    long s=0;
    int *p;
    p=tab;  
    int min;
    printf("veuillez saisir les elements du tableau:\n");
    for (p=tab;p<&tab[6];p++){
        printf("tab[%ld]=",(p-tab)+1);
        scanf("%d",p); //car p=&tab[0];
    }
    for(p=tab;p<tab+6;p++)
        printf("%d ",*p);
    printf("\n");

    for(p=tab;p<tab+6;p++)
        s+=*p;
    printf("la some des elements du tableau est:%ld\n",s);
    min=*p;
    for(p=tab+1;p<tab+6;p++){
        if(*p<min)
            min=*p;
    }
    printf("le minimum de ce tableau est:%d\n",min);
}