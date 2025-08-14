#include<stdio.h>
#include<stdlib.h>

int main (){
	int i,n,signe=-1;
	double x,puiss=1,some=-1;

	printf("donne n et x (respectivement)\n");scanf("%d%lf",&n,&x);
	
	for (i=1;i<=n;i++){
		signe*=-1;
		puiss*=x;
		some+=(double)signe/puiss;
	}

	printf("le resulta est %7.4lf\n",some);
}
