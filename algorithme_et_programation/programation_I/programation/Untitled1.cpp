#include<stdio.h>
int main(){
	int t[50],n,i;
	printf("donne la taiile du tableau : ");scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("t[%d]= ",i);
		scanf("%d",&t[i]);
	}
	for(i=0;i<n;i++){
		printf("%7d",t[i]);
	}
	if(n%2==0){
		for(i=0;i<n;i++){
			if(i==n/2){
				scanf("%d",&t[i]);
			}
		}
	}
	if(n%2!=0){
		for(i=0;i<n;i++);//tfrtiite -_-//
	}
	return 0;
}


