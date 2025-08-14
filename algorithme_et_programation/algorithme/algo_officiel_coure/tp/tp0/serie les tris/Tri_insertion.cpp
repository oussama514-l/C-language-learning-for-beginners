#include<stdio.h>
void tri_insertion(int t[],int n){
	int j,i,X;
	for(i=1;i<n;i++){
		X=t[i];
		for(j=i;j>0,X<t[j-1];j--){
			t[j]=t[j-1];
		}
		t[j]=X;
	}
}
void saisie(int t[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("t[%d]=",i);scanf("%d",&t[i]);
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
	tri_insertion(t,6);
	printf("\n l'affichage apres le tri est :  \n");
	affich(t,6);
	return 0;
}
