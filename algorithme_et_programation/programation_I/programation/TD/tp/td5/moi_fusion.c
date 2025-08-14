#include<stdio.h>

void saisire(int T[],int dim);
void affich(int T[],int dim);

int main (){
	int N,M,j;
	
	printf("entrer dimention de 1er tableau : ");scanf("%d",&N);
	printf("entrer dimention de 2eme tableau : ");scanf("%d",&M);
	
	int Y=N+M;
	int A[N],B[M],Fus[Y];

	
	printf("donne 1er tableau \n");
	saisire(A,N);
	printf("donne de 2eme tableau \n");
	saisire(B,M);
	int ifus=0,ia=0,ib=0;

	while( (ia<N) && (ib<M) ){
		if (A[ia]<B[ib]){
			Fus[ifus]=A[ia];
			ifus++;
			ia++;
		}
		else{
			Fus[ifus]=B[ib];
			ifus++;
			ib++;
		}
	}
	while(ia<N){
		Fus[ifus]=A[ia];
		ifus++;
		ia++;
	}		
	while(ib<M){
		Fus[ifus]=B[ib];
		ifus++;
		ib++;
	}		

	printf("1er tableau  ");
	affich(A,N);
	printf("2eme tableau  ");
	affich(B,M);
	printf("tableau fusioner ");
	affich(Fus,Y);
}

void saisire(int T[],int dim){
	for (int i=0;i<dim;i++){
		printf("element %d : ",i+1);
		scanf("%d",&T[i]);
	}
	printf("\n");
}
void affich(int T[],int dim){
//	for (int i=0;i<dim;i++){
//		printf("%d ",T[i]);
//	}
	while (dim){
	printf("%d ",*T);
	T++;
	dim--;
	}
	printf("\n");
}


