#include <stdio.h> 
main() 
{ 

  /* prototypes des fonctions appelées */ 
  void multi_2_matrices (int *mat1, int *mat2, int *mat3, 
  int n, int m, int p, int cmax); 
  void lire_dim (int *l, int lmax, int *c, int cmax); 
  void lire_matrice (int *mat, int l, int c, int cmax); 
  void ecrire_matrice (int *mat, int l, int c, int cmax); 

  /* variables locales */  /* les matrices et leurs dimensions */ 
  int m1[30][30], m2[30][30], m3[30][30]; 
  int n, m, p; 
  int dummy; /* pour la lecture de la première dimension de */ 
  
  /* mat2 à l'aide de lire_dim. */ 
  /* traitements */ 

  printf("*** matrice 1 ***\n"); 
  lire_dim (&n,30,&m,30); 
  lire_matrice ((int*)m1,n,m,30 ); 
  
  printf("*** matrice 2 ***\n"); 
  lire_dim (&dummy,30,&p,30); 
  lire_matrice ((int*)m2,m,p,30 ); 

  printf("matrice donnée 1 : \n"); 
  ecrire_matrice ((int*)m1,n,m,30); 

  printf("matrice donnée 2 : \n"); 
  ecrire_matrice ((int*)m2,m,p,30); 
  multi_2_matrices ((int*)m1 , (int*)m2 , (int*)m3 , n,m,p,30); 

  printf("matrice résultat : \n"); 
  ecrire_matrice ((int*)m3,n,p,30); 
  return 0; 
} 
void multi_2_matrices (int *mat1, int *mat2, int *mat3, 
  int n, int m, int p, int cmax) 
{ 
  /* variables locales */ 
  int i,j,k;  /* multiplier mat1 et mat2 en affectant le résultat à mat3 */ 
  for (i=0; i<n; i++) 
  for (j=0; j<p; j++)  { 
  *(mat3+i*cmax+j)=0;  for (k=0; k<m; k++) 
  *(mat3+i*cmax+j) += *(mat1+i*cmax+k) * *(mat2+k*cmax+j); 
  } 
} 
void lire_dim (int *l, int lmax, int *c, int cmax) 
{ 
  . . . 
} 
void lire_matrice (int *mat, int l, int c, int cmax) 
{ 
  . . . 
} 
void ecrire_matrice (int *mat, int l, int c, int cmax) { 
  . . . 
}
