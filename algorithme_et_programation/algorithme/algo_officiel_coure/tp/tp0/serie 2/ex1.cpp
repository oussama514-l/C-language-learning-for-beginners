#include <stdio.h>
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
double SomTab(double t[],int n){
	int i;
	double s=0;
	for(i=0;i<n;i++){
		s+=t[i];
	}
	return s;
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
		printf("%7.2lf",t[i]);
	}
	printf("\n");
}
main(){
	double t[50];int n;
	printf("donner l'indice de tableau : ");
	scanf("%d",&n);
	RemTab(t,n);
	AfichTab(t,n);
	double p=MinRec(t,t[0],n,1);
	int m=SomTab(t,n);
	printf("le minimume d'un tableaux est : %.2f \n",p);
	printf("la somme d'element de tableau est : %d",m);
}
