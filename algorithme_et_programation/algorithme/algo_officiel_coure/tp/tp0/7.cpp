#include<stdio.h>
void echange(int &a ,int &b){
    int x;
        x=a;
        a=b;
        b=x;
}
void tr_in(int t[],int n){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=i+1;j>0;j--){
			if(t[j]<t[j-1])
				echange(t[j],t[j-1]);
		}
	}
}
void aleatoire(int t[],int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=n-1;j>n-(n/2);j--){
			echange(t[j],t[i]);
			i++;
		}
	}
}
void sesie(int t[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("t[%d]= ",i);
		scanf("%d",&t[i]);
	}
}
void affich(int t[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("\t%d",t[i]);
	}
	printf("\n");
}
int main(){
	int t[50],n;
	printf("donner la taille de tableau : ");scanf("%d",&n);
	sesie(t,n);
	affich(t,n);
	printf("\n l'affichage apres le tri est :  \n\n");
	tr_in(t,n);
	affich(t,n);
	printf("\n l'affichage apres aleatoire est :  \n\n");
	aleatoire(t,n);
	affich(t,n);
	return 0;
}
