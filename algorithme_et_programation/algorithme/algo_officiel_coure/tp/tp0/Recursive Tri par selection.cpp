#include<stdio.h>
void echange(int t[],int i,int j){
	int v;
    v=t[i];
    t[i]=t[j];
    t[j]=v;
}
int imax(int t[],int n){
	int i,max=0;
	for(i=0;i<n;i++){
		if(t[i]>t[max]){
			max=i;
		}
	}
	return max;
}
void Rec_Selection(int t[],int n){
	int m;
	if(n>0){
	m=imax(t,n);
	echange(t,m,n-1);
	Rec_Selection(t,n-1);
	}
}
void affich(int t[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("\t%d",t[i]);
	}
}
int main(){
	int t[6]={3,5,2,0,1,4};
	affich(t,6);
	Rec_Selection(t,6);
	printf("\n");
	affich(t,6);
	return 0;
}
