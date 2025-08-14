#include<stdio.h>
void lire(int *m, int n){
	int i,j;
	//printf("donné n:");scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=1;j<=n;j++){
			printf("M[%d,%d] : ",i,j);
			scanf("%d",m+i+j);
		}
	}
}
int id(int *m,int n){
	int i,j;
	for(i=0;i<n;i++){
		if(*(m+i+i) != 1)
			return 0;
	}
	for(i=1;i<n;i++){
		for(j=1;j<=i-1;j++){
			if(*(m+i+i) != 0)
				return 0;
		}
	}
	for(i=1;i<=n;i++){
		for(j=i+1;i<=n;j++)
			if(*(m+i+i) != 0)
				return 0;
	}
	return 1;
}
void affich(int *m,int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			printf("\t%d",*(m+i+i));
		printf("\n");
	}
}
int main(){
	int M[50][50];
	int n,i,j;
	printf("donné n:");scanf("%d",&n);
	lire(&M,n);
	affich(&M,n);
/*	for(i=1;i<=n;i++){
    	for(j=1;j<=n;j++){
        	printf("\t%d",M[i][j]);
    	}
    	printf("\n");
    }*/
	if(id(&M,n))
		printf("\nle matrice est identite");
	else
		printf("\nNON");	
}
