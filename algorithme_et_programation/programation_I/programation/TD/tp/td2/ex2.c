#include<stdio.h>

void main(){
	
	int i,n;
	long double f=1;
	
	printf("entrer n\n");
	scanf("%d",&n);
	
	while(0<n){
		f*=n;
		n--;
	}
	/*
	for(i=1;i<=n;i++){
		f*=i;
	}
	*/
	printf("resultat est %.0Lf\n",f);
	
	

}
