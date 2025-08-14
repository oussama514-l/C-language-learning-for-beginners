#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    float a,b,c,d; 
    float maxx,minn;
    char myname ='o';
    printf("entre les valeures de a et b et c et d:\n");
    scanf("%f%f%f%f%c",&a,&b,&c,&d,&myname);
    if (a>b){
        maxx =a;
        minn =b;
    }else{
        maxx = b;
        minn =a;
    }
    if(maxx<c){
        maxx=c;
    }else if(minn>c){
        minn =c;
    }
    if (d> maxx){
        maxx =d;
    }else if(minn>d){
        minn = d;
    }
    printf("le maximum est:%.2f et le minimum est:%.2f\n",maxx,minn);

// short hand if__else:
    int time = 20;
    (time < 18) ? printf("Good day\n") : printf("Good evening\n");

    return 0;
}















