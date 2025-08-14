#include<stdio.h>
double PGCD(int a,int b){
	if(a==b){
		return b;
	}
	else{
		if(b<a)
			return PGCD(a-b,b);
		if(a<b)
			return PGCD(a,b-a);	
	}
}
int main(){
	int a,b,P;
	printf("donner la valeur de a : ");scanf("%d",&a);
	printf("donner la valeur de b : ");scanf("%d",&b);
	P=PGCD(a,b);
	printf("le PGCD(%d,%d)=%d",a,b,P);
}
