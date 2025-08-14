#include <stdio.h> 
main() 
{ 
  /* Prototypes des fonctions appelées */ 
  void ADDITION_MATRICE (int *MAT1, int *MAT2, int L, int C, int CMAX); 
  void LIRE_DIM (int *L, int LMAX, int *C, int CMAX); 
  void LIRE_MATRICE (int *MAT, int L, int C, int CMAX); 
  void ECRIRE_MATRICE (int *MAT, int L, int C, int CMAX); 
  /* Variables locales */  /* Les matrices et leurs dimensions */ 
  int M1[30][30], M2[30][30]; 
  int L, C; 
  /* Traitements */ 
  LIRE_DIM (&L,30,&C,30); 
  printf("*** Matrice 1 ***\n"); 
  LIRE_MATRICE ((int*)M1,L,C,30 ); 
  printf("*** Matrice 2 ***\n"); 
  LIRE_MATRICE ((int*)M2,L,C,30 ); 
  printf("Matrice donnée 1 : \n"); 
  ECRIRE_MATRICE ((int*)M1,L,C,30); 
  printf("Matrice donnée 2 : \n"); 
  ECRIRE_MATRICE ((int*)M2,L,C,30); 
  ADDITION_MATRICE( (int*)M1 , (int*)M2 ,L,C,30); 
  printf("Matrice résultat : \n"); 
  ECRIRE_MATRICE ((int*)M1,L,C,30); 
  return 0; 
} 
void ADDITION_MATRICE (int *MAT1, int *MAT2, int L, int C, int CMAX) 
{ 
  /* Variables locales */ 
  int I,J; 
  /* Ajouter les éléments de MAT2 à MAT1 */ 
  for (I=0; I<L; I++) 
  for (J=0; J<C; J++) 
  *(MAT1+I*CMAX+J) += *(MAT2+I*CMAX+J); 
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
