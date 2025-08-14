#include<stdio.h>
void echange(int &a,int &b){
	int v;
    v=a;
    a=b;
    b=v;
}
/*int RecBulle(int t[],int n, int i,int j){
	if(j==n-1){
		return 1;
	}
	else if(i==(n-2)-j){
		return RecBulle(t,n-1-j,i,j+1);
	}
	else if(t[i]>t[i+1]){
		echange(t[i],t[i+1]);
		return RecBulle(t,n,i+1,j);
	}
	else
		return RecBulle(t,n,i+1,j);
}*/
void RecBulle(int t[],int n, int i,int j){
	int rep=0;
    for(j=0;j<=(n-2)-i;j++){
		if(t[j]>t[j+1]){
			echange(t[j],t[j+1]);
			rep=1;
	    }	
	}
	if(rep==1){
		RecBulle(t,n,i,j+1);
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
//	RecBulle(t,6,0,0);
	printf("\nl'affichage apres le tri est : \n");
	RecBulle(t,6,0,0);
	affich(t,6);		
	return 0;	
}
