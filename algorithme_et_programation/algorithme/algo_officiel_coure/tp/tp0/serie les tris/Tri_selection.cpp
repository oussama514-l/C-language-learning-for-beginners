#include<stdio.h>
void echange(int t[],int i,int j){
	int v;
    v=t[i];
    t[i]=t[j];
    t[j]=v;
}
int max(int t[],int n){
	int i;
	int imax=0;
	for(i=0;i<n;i++){
		if(t[imax]<t[i]){
			imax=i;
		}
	}
	return imax;
}
void tri_selection(int t[],int n){
	int m,i;
	for(i=n-1;i>=0;i--){
		m=max(t,i+1);
		echange(t,m,i);
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
	tri_selection(t,6);
	printf("\n l'affichage apres le tri est : \n");
	affich(t,6);
	return 0;
}
