#include<stdio.h>
#include<stdlib.h>
    
void affich(float B[], int n);
void cal(float T[],int n);
void valeur(float V[],int n);
    
int main(){
    int n;
   
    printf("entrer le nb des entecednt entre 1 et 100:");
    scanf("%d",&n);
    
    float T[n];
          
    valeur(T,n);
    getchar();
}
   
void valeur(float V[],int n){

    for (int i=0;i<n;i++){
    	printf("entre la valeur %d:",i);
        scanf("%f",&V[i]);
   
	}
	cal(V,n);
}
   
  /*float fonc(){
          float expr;
          float f;
          char
          printf("entrer la fonction f(x)=");
          scanf("%f",
  }*/
void cal(float C[],int n){
	int i=0;
    float image[n];
    float F(float x);
    while(i<n){
    	image[i]=F(C[i]);
        i++;
	}
          
    affich(image,n);
   
  }

float F(float x){
    return (float)(x*x*x)-(2*x)+1;

}

void affich(float A[], int n){
	printf("f(x)={");
          
    for (int j=0;j<n;j++)
	printf(" %.2f ",A[j]);
          
    printf("}\n");
   
  }


  /*

  #include<stdio.h>
#include<stdlib.h>


void acq(int *N);
void valeur(float X[],int N);
void cal(float X[],float V[],int N);
void affich(float X[],float V[],int N);


int main(){
	float X[100],V[100];
	int N;
	
	
	acq(&N);
	valeur(X,N);
	cal(X,V,N);
	affich(X,V,N);
	
}


void acq(int *N){
	do{
	printf("entrer un entier entre 1 et 100 : ");
	scanf("%d",N);
	}while(*N<1||*N>100);
	

}

void valeur(float X[],int N){
	for (int i=0;i<N;i++){
		printf("entre la valeur %d:",i);
		scanf("%f",&X[i]);

	}
}


void cal(float X[],float V[],int N){
	float F(float X);
	int i=0;
	while(i<N){
		V[i]=F(X[i]);
		i++;
	}
}

float F(float X){
	return 	(float)(X*X*X)-(2*X)+1;

}

void affich(float X[],float V[],int N){
	int j;
	printf("\nX={");
	for (j=0;j<N;j++)
		printf(" %.2f ",X[j]);
	printf("}\nF={");	
	
	for(j=0;j<N;j++)
		printf(" %.2f ",V[j]);
	printf("}\n");


}

*/