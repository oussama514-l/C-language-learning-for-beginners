#include<stdio.h>
#include<stdlib.h>

void main(){	//declaration
	int n,x,*p1,*p2;	//pointeur d'aide
	
	printf("\n");
	printf("dimension du tableau:");
	scanf("%d",&n);

	int A[n];
	//saisire le tableau
	for(p1=A;p1<A+n;p1++){
		printf("element %ld:",p1-A);
		scanf("%d",p1);
	}	
	printf("\n");	
	printf("introduire l'element X à éliminer du tableau:");
	scanf("%d",&x);
	
	printf("\n");
	printf("avant l'ilimination\n");
	for(p1=A;p1<A+n;p1++){

		printf("%d ",*p1);
	
	// copier les element de p1 vers p2 et augmenter
	// p2 pour tous les elements differnts de x
	}
	printf("\n");

	for(p1=p2=A;p1<A+n;p1++){
		*p2=*p1;
		if(*p2!=x)
			p2++;
	
	}
	// nouvelle dimention de A
	n=p2-A;
	//edition du resultat
	printf("apres l'ilimination\n");
	for(p1=A;p1<A+n;p1++)
		printf("%d  ",*p1);

	printf("\n\n");	
	//return 0;


}
/*
void main(){
	int dimention,*p1,N;

	//dimention du tableau et le tableau
	printf("entrer dimention du tableau : ");scanf("%d",&N);
	int T[N];

	//saisire du tableau
	for(p1=T;p1<T+N;p1++){
		printf("entrer l'entier %d : ",p1-T);scanf("%d",p1);
	}

	//l'element a iliminer 
	int x;
	printf("enter l'element a iliminer : ");scanf("%d",&x);

	//ilimination d'element 
	int *p2;
	for (p2=p1=T;p1<T+N;p1++){
		*p2=*p1;
		if (x!=*p1){
			p2++;
			
		}
	}

	N=p2-T;

	//affichage du tableau apre l'ilimination

	for(p1=T;p1<T+N;p1++){
		printf(" %d ",*p1);
	}

	printf("\n");
}
*/