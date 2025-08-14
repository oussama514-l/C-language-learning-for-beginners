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
void tri_selection(int t[],int n){
	int i;
	int m; 
	do{
		m=imax(t,n);
		echange(t,m,n-1);
		n--;
	}while(n>1);
}
void affich(int t[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("\t%d",t[i]);
	}
	printf("\n");
}
int main(){
	int t[6]={3,5,2,0,1,4};
	affich(t,6);
	tri_selection(t,6);
	affich(t,6);
	return 0;
}
