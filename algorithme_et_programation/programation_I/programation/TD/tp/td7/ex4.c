#include <stdio.h> 
main(){ 
  /* Prototypes des fonctions appelées */ 
  void MULTI_MATRICE(int X, int *MAT, int L, int C, int CMAX); 
  void LIRE_DIM (int *L, int LMAX, int *C, int CMAX); 
  void LIRE_MATRICE (int *MAT, int L, int C, int CMAX); 
  void ECRIRE_MATRICE (int *MAT, int L, int C, int CMAX); 
  /* Variables locales */  int M[30][30]; /* Matrice d'entiers */ 
  int L, C; /* Dimensions de la matrice */ 
  int X; 
  /* Traitements */ 
  LIRE_DIM (&L,30,&C,30); 
  LIRE_MATRICE ((int*)M,L,C,30 ); 
  printf("Introduire le multiplicateur (entier) : ");  scanf("%d", &X); 
  printf("Matrice donnée : \n"); 
  ECRIRE_MATRICE ((int*)M,L,C,30); 
  MULTI_MATRICE (X,(int*)M,L,C,30); 
  printf("Matrice résultat : \n"); 
  ECRIRE_MATRICE ((int*)M,L,C,30); 
  return 0; 
} 
void MULTI_MATRICE(int X, int *MAT, int L, int C, int CMAX) 
{ 
  /* Variables locales */ 
  int I,J; 
  /* Multiplication des éléments */ 
  for (I=0; I<L; I++) 
  for (J=0; J<C; J++) 
  *(MAT+I*CMAX+J) *= X; 
} 
void LIRE_DIM (int *L, int LMAX, int *C, int CMAX) 
{ 
  . . . 
} 
void LIRE_MATRICE (int *MAT, int L, int C, int CMAX) 
{ 
  . . . 
} 
void ECRIRE_MATRICE (int *MAT, int L, int C, int CMAX) { 
  . . . 
}