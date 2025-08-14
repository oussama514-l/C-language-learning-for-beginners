#include<stdio.h>
int main(){
	int n,i;
	double x,p=1;
	printf("enter x\n");
	scanf("%lf",&x);
	printf("entrer l'enitier n \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		p*=x;
	}
	printf("x^n=%.2lf\n",p);
	
	/*
	i=1;
	while(i<=n){
		p*=x;
		i++;
	}
	printf("resulta est %.2lf\n",p);
	*/

}