#include<stdio.h>
void echange(int &a,int &b){
	int v;
    v=a;
    a=b;
    b=v;
}
void tri_bulles(int t[],int n){
	int rep,j;
	int i=0;
	do{
	    rep=0;
	    for(j=0;j<=(n-2)-i;j++){
	       if(t[j]>t[j+1]){
	   	    echange(t[j],t[j+1]);
	   	    rep=1;
	        }	
	    }
	    i++;
    }while(rep!=0);
}
void affich(int t[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("\t%d",t[i]);
	}
}
int main(){
	int t[6]={3,5,2,0,1,4};
	int k;
	affich(t,6);
	tri_bulles(t,6);
	printf("\n");
	affich(t,6);
	return 0;
}
