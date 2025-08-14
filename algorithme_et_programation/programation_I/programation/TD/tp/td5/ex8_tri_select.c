#include <stdio.h> 
int main() { 

 /* declarations */ 
 int T[50]; 
 int n,i,j,taid,pmtx;  

 /* maximal à droite de T[i] */ 
 /* Saisie des données */ 

 printf("Dimension du tableau (max.50) : ");scanf("%d", &n ); 
 
 for (j=0; j<n; j++){ 
 	printf("Elément %d : ", j); 
 	scanf("%d", &T[j]); 
 } 

 /* Tffichage du tableau */ 
 printf("Tableau donné :\n"); 
 
 for (j=0; j<n; j++){
 	printf("%d ", T[j]); 
 }
 printf("\n");


/* Tri du tableau par sélection directe du maximum. */ 

 for (i=0; i<n-1; i++) { 
 	pmtx=i; 
 	for (j=i+1; j<n; j++){ 
 		if (T[j]>T[pmtx])
 			pmtx=j; 
 		taid=T[i]; 
 		T[i]=T[pmtx]; 
		T[pmtx]=taid; 
	}
 } 

 /* Edition du résultat */ 

 printf("Tableau trié :\n");

 for (j=0; j<n; j++){
 	printf("%d ", T[j]);
 } 
 printf("\n"); 

 return 0;
}
