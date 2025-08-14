#include<stdio.h>
#include<stdlib.h>

int main(){
	int s=0,n=0,nb=0;


	do{

		s+=n;
		printf("donner n\n");
		scanf("%d",&n);
		nb++;
		
	}while(n!=-1);

	printf("le moyen de %d entier est %.2f\n",nb-1,(float)s/(nb-1));

	return 0;
}


	
