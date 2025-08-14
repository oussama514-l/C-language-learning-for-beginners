#include<stdio.h>
void echange(int &a ,int &b){
	int v;
	v=a;
	a=b;
	b=v;
}
void tri_comparaison(int t[],int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(t[i]>t[j]){
				echange(t[i],t[j]);
			}
		}
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
	tri_comparaison(t,6);
	printf("\n l'affichage apres le tri est : \n");
	affich(t,6);
	return 0;	
}
