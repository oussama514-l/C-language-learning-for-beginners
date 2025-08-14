#include<stdio.h>
float MinRec(float t[],float m,int n,int i){
	if(i<=n){
		return m;
	}
	else{
		if(t[i] <= m){
			m = t[i];
		}
		else
			return MinRec(t,m,n,i+1);
	}
}
void RemTab(float t[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("t[%d]= ",i);
		scanf("%f",&t[i]);
	}
}
void AfichTab(float t[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("\t%f",t[i]);
	}
	printf("\n");
}
int main(){
	float t[50];
	int n;
	printf("dounner la taille de tableau : ");scanf("%d",&n);
	float m = MinRec(t,t[0],n,1);
	RemTab(t,n);
	AfichTab(t,n);
	printf("la valeur minimumm est : %f",m);
	
}
