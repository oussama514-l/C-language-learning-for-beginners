#include <stdio.h> 
main() 
{ 
  /* Prototypes des fonctions appelées */ 
  int TRANSPO_MATRICE (int *MAT, int *L, int LMAX, int *C, int CMAX);  void LIRE_DIM (int *L, int LMAX, int *C, int CMAX); 
  void LIRE_MATRICE (int *MAT, int L, int C, int CMAX); 
  void ECRIRE_MATRICE (int *MAT, int L, int C, int CMAX); 
  /* Variables locales */  int M[30][30]; /* Matrice d'entiers */ 
  int L, C; /* Dimensions de la matrice */ 
  /* Traitements */ 
  LIRE_DIM (&L,30,&C,30); 
  LIRE_MATRICE ((int*)M,L,C,30 ); 
 _ printf("Matrice donnée : \n"); 
  ECRIRE_MATRICE ((int*)M,L,C,30); 
  if (TRANSPO_MATRICE ((int*)M,&L,30,&C,30)) 
  { 
  printf("Matrice transposée : \n"); 
  ECRIRE_MATRICE ((int*)M,L,C,30); 
  } 
  else 
  printf("\aLa matrice n'a pas pu être transposée\n"); 
  return 0; 
} 
int TRANSPO_MATRICE (int *MAT, int *L, int LMAX, int *C, int CMAX) 
{ 
  /* Prototypes des fonctions appelées */ 
  void PERMUTER(int *A, int *B); 
  /* Variables locales */  int I,J; 
  int DMAX; /* la plus grande des deux dimensions */
  /* Transposition de la matrice */ 
  if (*L>CMAX || *C>LMAX) 
  return 0; 
  else 
  { 
  DMAX = (*L>*C) ? *L : *C; 
  for (I=0; I<DMAX; I++) 
  for (J=0; J<I; J++) 
  PERMUTER (MAT+I*CMAX+J, MAT+J*CMAX+I); 
  PERMUTER(L,C); /* échanger les dimensions */  return 1;  } 
} 
  
void PERMUTER(int *A, int *B) 
{ 
  . . . 
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