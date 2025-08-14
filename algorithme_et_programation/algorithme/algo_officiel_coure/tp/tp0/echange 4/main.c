#include <stdio.h>
#include <stdlib.h>
void echange2 (float &a ,float &b){
    float x;
    if(a>b){
        x=a;
        a=b;
        b=x;
    }
}
void echange4 (float &a, float &b, float &c, float &d){
echange2 (a,b);
echange2 (a,c);
echange2 (a,d);
}
void echange3 (float &b, float &c ,float &d){
echange2 (b,c);
echange2 (b,d);
echange2 (c,d);
}

int main()
{
    float a,b,c,d;
    printf(" saisir la valeur de a : "); scanf("%f",&a);
    printf("\nsaisir la valeur de b : "); scanf("%f",&b);
    printf("\nsaisir la valeur de c : "); scanf("%f",&c);
    printf("\nsaisir la valeur de d : "); scanf("%f",&d);
    printf(" les valeur avant l'echange est a = %f , b = %f , c = %f , d = %f \n",a,b,c,d);
    echange4 (a,b,c,d);
    echange3 (b,c,d);
    printf(" les valeur apres l'echange est a = %f , b = %f , c = %f , d = %f ",a,b,c,d);
    return 0;
}
