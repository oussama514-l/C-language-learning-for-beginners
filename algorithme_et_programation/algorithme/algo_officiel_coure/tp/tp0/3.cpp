#include<stdio.h>
int PGCD(int a,int b){
	if(a%b==0){
		return b;
	}
	else{
		return PGCD(b,a%b);
	}
}
int main(){
	int a,b,P;
	printf("donner la valeur de a : ");scanf("%d",&a);
	printf("donner la valeur de b : ");scanf("%d",&b);
	P=PGCD(a,b);
	printf("le PGCD(%d,%d)=%d",a,b,P);
}
