
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void echange(int *x,int *y){
	int temp=*x;
	*x=*y;
	*y=temp;
}

void tri_bule(int T[],int n){
	bool repass;
	int j;
	do{
		repass=false;
		for(j=0;j<n;j++){
			if(T[j]>T[j+1]){
				echange(&T[j],&T[j+1]);
				repass=true;
			}
		}
	}while(repass);
}

void affiche_tableau(int T[],int n){
	
	for(int i=0;i<n;i++){
		printf("%d ",T[i]);
	}
	printf("\n");
}


int main(){
	int n,i,T[100];
	
	printf("donner n : ");scanf("%d",&n);
	
	for (i=0;i<n;i++){
		printf("T[%d]=",i);
		scanf("%d",&T[i]);
	}
	
	tri_bule(T,n);
	
	affiche_tableau(T,n);
	return 0;
}
