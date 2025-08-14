#include<stdio.h>
int nbpr(int n){
	int i;
	for(i=2;i<n;i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int n;
	printf("donner votre nombre : ");
	scanf("%d",&n);
	if(nbpr(n)){
		printf("%d est premier ",n);
	}
	else{
		printf("%d n'est pas premier ",n);
	}
}
