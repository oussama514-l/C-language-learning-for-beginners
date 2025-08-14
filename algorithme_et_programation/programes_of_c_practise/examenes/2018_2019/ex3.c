#include<stdio.h>

int main (){
	int T[50][50],i,j,L,C,count=0,some=0,prod=1;
	//float moy;

	printf("donne dimention de matrice nb de lignes puis de colones (max=50)\n");scanf("%d%d",&L,&C);
	
	// remplire la matrice
	for(i=0;i<L;i++){
		for(j=0;j<C;j++){
			printf("T[%d][%d]=",i,j);
			scanf("%d",&T[i][j]);
			if(i==j){
				some+=T[i][j];
				count++;
			}
		}
	}
	
	printf("moyes des element de diagonale est %.4f\n",(float)some/count);

	some=0;
	for(i=0;i<L;i++){
		for(j=0;j<C;j++){
			if( T[i][j]%2 == 0){
				some+=T[i][j];
			}
		}
		printf("some des paire dans la ligne num %d = %d\n",i,some);
		some=0;
	}


	for(j=0;j<C;j++){
		for(i=0;i<L;i++){
			if( T[i][j]%2 != 0){
				prod*=T[i][j];
			}
		}
		printf("le produit des element impaire de chaque colone est %d = %d\n",i,prod);
		prod=1;
	}
}
