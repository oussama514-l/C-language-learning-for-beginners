#include<stdio.h>
int main(){
	int i,j,n,m;
	m = 0;
	printf("donner n : ");scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("X");
		}
		printf("\n");
	}
	printf("\n");
	for(i=n;i>=1;i--){
		for(j=0;j<m;j++){
			printf(" ");
		}
		for(j=i;j>=1;j--){
			printf("O");
		}
		m++;
		printf("\n");
	}
	return 0;
}
