#include<stdio.h>
double MinRec(double t[],double m,int n,int i){
	if(i>=n){
		return m;
	}
	else{
		if(t[i]<m){
			m=t[i];
		}
		return MinRec(t,m,n,i+1);
	}
}
void RemTab(double t[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("t[%d]= ",i);
		scanf("%lf",&t[i]);
	}
}
void AfichTab(double t[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("\t%.2lf",t[i]);
	}
	printf("\n");
}
int main(){
	int t[50];
	int n;
	double m=MinRec(t,t[0],6,1);
	printf("dounner la taille de tableau : ");scanf("%d",&n);
	RemTab(t,n);
	AfichTab(t,n);
	printf("la valeur minimumm est : %.2f",m);
	
}
