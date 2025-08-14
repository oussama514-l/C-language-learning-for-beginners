#include<stdio.h>
void echange(int &a,int &b){
	int v;
	v=a;
	a=b;
	b=v;
}
void t_a_b(int t[],int n){
	int i,j=0;
	do{
		for(i=0;i<=(n-2)-j;i++){
			if(t[i]>t[i+1]){
				echange(t[i],t[i+1]);
			}
		}
		j++;
	}while(j!=(n-1));
}
void Affich(int t[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%7d",t[i]);
	}
	printf("\n");
}
int main(){
	int t[6]={3,5,2,0,1,4};
	Affich(t,6);
	t_a_b(t,6);
	Affich(t,6);
}
