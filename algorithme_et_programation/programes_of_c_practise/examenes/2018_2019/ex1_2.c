#include<stdio.h>

int main(){
	int N,i,imp=0,pai=0,n;
	int T[50];
	printf("doner N (N>=0)");
	scanf("%d",&n);
	for(i=0;i<N;i++){
		printf("element %d ",i);
		scanf("%d",&T[i]);
	}

	for(i=0;i<N;i++){
		printf("element %d ",i);
		scanf("%d",&T[i]);
		int a;
		if (T[i]%2 != 0){
			T[n-imp]=T[i];	
		}
	}
}
