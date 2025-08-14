#include<stdio.h>
int PGCD(int a,int b){
	if(a==b){
		return b;
	}
	else {
		if(a>b){
			return PGCD(a-b,b);
		}
		if(a<b){
			return PGCD(a,b-a);
		}
	}
}
main(){
	int p,a,b;
	printf("donner a= ");scanf("%d",&a);
	printf("donner b= ");scanf("%d",&b);
    p=PGCD(a,b);
	printf("PGCD(%d,%d)=%d",a,b,p);
}
