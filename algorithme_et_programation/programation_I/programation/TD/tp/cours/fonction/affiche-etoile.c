#include<stdio.h>
#include<stdlib.h>

int main(){
	int N,L;

	void rect(int k,int m);
	printf("entre la dimention du rectongle N(ligne) et L(colone) respictivent\n");
	scanf("%d%d",&N,&L);

	rect(N,L);

	return 0;

}

void rect(int k,int m){
	int i;
	void Lcolone(int m);

	for (i=1;i<=k;i++){
		Lcolone(m);
		printf("\n");
	}

}


void Lcolone(int m){
	int j;

	for (j=1;j<=m;j++)
		printf("*");
}