#include<stdio.h>
void Rec_Insertion(int t[],int n,int i){
	int x,j;
	if(i<n){
		x=t[i];
		j=i;
	//	for(j=i;j>0,x<t[j-1];j--)
		while(j>0 && x<t[j-1]){
			t[j]=t[j-1];
			j--;
		}
		t[j]=x;
		Rec_Insertion(t,n,i+1);
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
	Rec_Insertion(t,6,0);
	printf("\n");
	affich(t,6);
	return 0;
}
