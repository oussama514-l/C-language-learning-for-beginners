#include<stdio.h>
void echange(int &i,int &j){
	int v;
    v=i;
    i=j;
    j=v;
}
void affich(int t[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("\t%d",t[i]);
	}
}
int recinv(int t[],int n,int i,int j){
	if(i>=j){
		return 1;
	}
	else{
			echange(t[i],t[j]);
			return recinv(t,n,i+1,j-1); 
	}	
}
int main(){
	int t[]={3,5,2,0,1,4};
	int n=6;
	affich(t,6);
	recinv(t,6,0,n-1);
	printf("\n");
	affich(t,6);
	return 0;	
}
