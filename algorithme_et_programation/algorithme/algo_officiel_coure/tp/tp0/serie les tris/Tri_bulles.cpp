#include<stdio.h>
void echange(int &a,int &b){
	int v;
    v=a;
    a=b;
    b=v;
}
void tri_bulle(int t[],int n){
	int i,j;
	j=0;
	while(j!=(n-1)){
		for(i=0;i<=(n-2)-j;i++){
			if(t[i]>t[i+1]){
				echange(t[i],t[i+1]);
			}
		}
		j++;
	}
}
void affich(int t[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("\t|\t%d",t[i]);
	}
}
int main(){
	int t[6]={3,5,2,0,1,4};
	affich(t,6);
	tri_bulle(t,6);
	printf("\nl'affichage apres le tri est : \n");
	affich(t,6);
	return 0;	
}
