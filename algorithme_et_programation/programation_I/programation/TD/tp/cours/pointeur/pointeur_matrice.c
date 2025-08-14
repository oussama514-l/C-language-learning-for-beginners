#include<stdio.h>
#include<stdlib.h>

#define N 4 
#define M 3

int main(){
	int i,j,A[N][M],*pt;
	pt=&A[0][0];

	for(i=0;i<N;i++)
		for(j=0;j<M;j++){
			printf("entez A[%d}[%d]\n",i,j);
			scanf("%d" ,pt+i*M+j);
		}

	for(i=0;i<N;i++){
		printf("%d\t",*(pt+i*M+j));
		printf("\n");
	}
}
