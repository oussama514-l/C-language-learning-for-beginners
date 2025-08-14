#include <stdio.h>
main()
{
 /* Déclarations */
 /* Les tableaux et leurs dimensions */
 int A[50], B[50], FUS[100];
 int N, M;
 int IA, IB, IFUS; /* indices courants */

 /* Saisie des données */
 printf("Dimension du tableau A (max.50) : ");
 scanf("%d", &N );
 printf("Entrer les éléments de A dans l'ordre croissant :\n");
 for (IA=0; IA<N; IA++)
    {
     printf("Elément A[%d] : ", IA);
     scanf("%d", &A[IA]);
    }
 printf("Dimension du tableau B (max.50) : ");
 scanf("%d", &M );
 printf("Entrer les éléments de B dans l'ordre croissant :\n");
 for (IB=0; IB<M; IB++)
    {
     printf("Elément B[%d] : ", IB);
     scanf("%d", &B[IB]);
    }
 /* Affichage des tableaux A et B */
 printf("Tableau A :\n");
 for (IA=0; IA<N; IA++)
     printf("%d ", A[IA]);
 printf("\n");
 printf("Tableau B :\n");
 for (IB=0; IB<M; IB++)
     printf("%d ", B[IB]);
 printf("\n");
 
/* Fusion des éléments de A et B dans FUS */
 /* de façon à ce que FUS soit aussi trié. */
 IA=0; IB=0; IFUS=0;
 while ((IA<N) && (IB<M))
        if(A[IA]<B[IB])
            {
             FUS[IFUS]=A[IA];
             IFUS++;
             IA++;
            }
        else
            {
             FUS[IFUS]=B[IB];
             IFUS++;
             IB++;
            }
 /* Si IA ou IB sont arrivés à la fin de leur tableau, */
 /* alors copier le reste de l'autre tableau.          */
 while (IA<N)
        {
         FUS[IFUS]=A[IA];
         IFUS++;
         IA++;
        }
 while (IB<M)
        {
         FUS[IFUS]=B[IB];
         IFUS++;
         IB++;
        }
 
 /* Edition du résultat */
 printf("Tableau FUS :\n");
 for (IFUS=0; IFUS<N+M; IFUS++)
     printf("%d ", FUS[IFUS]);
 printf("\n");
 return 0;
}

/*
#include <stdio.h>
 
    void fusion(int tab[], int debut, int milieu, int fin)
    {
        int n1 = milieu - debut + 1;
        int n2 = fin - milieu;
     
        int G[n1], D[n2];
     
        for (int i = 0; i < n1; i++)
            G[i] = tab[debut + i];
        for (int j = 0; j < n2; j++)
            D[j] = tab[milieu + 1 + j];
     
        // maintient trois pointeurs, un pour chacun des deux tableaux et un pour
        // maintenir l'index actuel du tableau trié final
        int i, j, k;
        i = 0;
        j = 0;
        k = debut;
     
        while (i < n1 && j < n2)
        {
            if (G[i] <= D[j])
            {
                tab[k] = G[i];
                i++;
            }
            else
            {
                tab[k] = D[j];
                j++;
            }
            k++;
        }
     
        // Copiez tous les éléments restants du tableau non vide
        while (i < n1)
        {
            tab[k] = G[i];
            i++;
            k++;
        }
     
        while (j < n2)
        {
            tab[k] = D[j];
            j++;
            k++;
        }
    }
     
    // Tri par fusion
    void triFusion(int tab[], int debut, int fin)
    {
        if (debut < fin)
        {
     
            // Trouvez le point milieu pour diviser le tableau en deux moitiés
            int m = (debut + fin) / 2;
     
            triFusion(tab, debut, m);
            triFusion(tab, m + 1, fin);
     
            // Fusionnez les deux moitiés triées
            fusion(tab, debut, m, fin);
        }
    }
     
    void afficher(int tab[], int n)
    {
        for (int i = 0; i < n; i++)
            printf("%d ", tab[i]);
        printf("\n");
    }
     
     
    int main()
    {
        int tab[] = {64, 25, 12, 22, 11};
        int n = 5;
     
        triFusion(tab, 0, n - 1);
     
        printf("Tableau trié: \n");
        afficher(tab, n);
    }
*/

/*
#include <stdio.h>

void triFusion(int i, int j, int tab[], int tmp[]) {
    if(j <= i){ return;}
  
    int m = (i + j) / 2;
    
    triFusion(i, m, tab, tmp);     //trier la moitié gauche récursivement
    triFusion(m + 1, j, tab, tmp); //trier la moitié droite récursivement

    int pg = i;     //pg pointe au début du sous-tableau de gauche
    int pd = m + 1; //pd pointe au début du sous-tableau de droite
    int c;          //compteur

// on boucle de i à j pour remplir chaque élément du tableau final fusionné
    for(c = i; c <= j; c++) {
        if(pg == m + 1) { //le pointeur du sous-tableau de gauche a atteint la limite
            tmp[c] = tab[pd];
            pd++;
        }else if (pd == j + 1) { //le pointeur du sous-tableau de droite a atteint la limite
            tmp[c] = tab[pg];
            pg++;
        }else if (tab[pg] < tab[pd]) { //le pointeur du sous-tableau de gauche pointe vers un élément plus petit
            tmp[c] = tab[pg];
            pg++;
        }else {  //le pointeur du sous-tableau de droite pointe vers un élément plus petit
            tmp[c] = tab[pd];
            pd++;
        }
    }

    for(c = i; c <= j; c++) {  //copier les éléments de tmp[] à tab[]
        tab[c] = tmp[c];
    }
}


int main() {
  int  nbr, i, tab[100], tmp[100];
 
  printf(" Entrez le nombre d'éléments dans le tableau: ");
  scanf("%d", &nbr);
 
  printf(" Entrez %d entiers : ", nbr);
 
  for (i = 0; i < nbr; i++)
    scanf("%d", &tab[i]);
 
  triFusion(0, nbr-1, tab, tmp);
 
  printf("\n Tableau trié : ");
  for(i = 0; i < nbr; i++)  {
     printf(" %4d", tab[i]);
  }
  printf("\n");
  return 0;
}
*/

/*
#include <stdio.h>

#define max 10

int a[11] = { 10, 14, 19, 26, 27, 31, 33, 35, 42, 44, 0 };
int b[10];

void merging(int low, int mid, int high) {
   int l1, l2, i;

   for(l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++) {
      if(a[l1] <= a[l2])
         b[i] = a[l1++];
      else
         b[i] = a[l2++];
   }
   
   while(l1 <= mid)    
      b[i++] = a[l1++];

   while(l2 <= high)   
      b[i++] = a[l2++];

   for(i = low; i <= high; i++)
      a[i] = b[i];
}

void sort(int low, int high) {
   int mid;
   
   if(low < high) {
      mid = (low + high) / 2;
      sort(low, mid);
      sort(mid+1, high);
      merging(low, mid, high);
   } else { 
      return;
   }   
}

int main() { 
   int i;

   printf("List before sorting\n");
   
   for(i = 0; i <= max; i++)
      printf("%d ", a[i]);

   sort(0, max);

   printf("\nList after sorting\n");
   
   for(i = 0; i <= max; i++)
      printf("%d ", a[i]);
}

*/


/* C program for Merge Sort */
/*
 #include<stdlib.h> 
#include<stdio.h> 

// Merges two subarrays of arr[]. 
// First subarray is arr[l..m] 
// Second subarray is arr[m+1..r] 
void merge(int arr[], int l, int m, int r) 
{ 
  int i, j, k; 
  int n1 = m - l + 1; 
  int n2 = r - m; 

  /* create temp arrays */
  int L[n1], R[n2]; 

  /* Copy data to temp arrays L[] and R[] */
  for (i = 0; i < n1; i++) 
    L[i] = arr[l + i]; 
  for (j = 0; j < n2; j++) 
    R[j] = arr[m + 1+ j]; 

  /* Merge the temp arrays back into arr[l..r]*/
  i = 0; // Initial index of first subarray 
  j = 0; // Initial index of second subarray 
  k = l; // Initial index of merged subarray 
  while (i < n1 && j < n2) 
  { 
    if (L[i] <= R[j]) 
    { 
      arr[k] = L[i]; 
      i++; 
    } 
    else
    { 
      arr[k] = R[j]; 
      j++; 
    } 
    k++; 
  } 

  /* Copy the remaining elements of L[], if there 
  are any */
  while (i < n1) 
  { 
    arr[k] = L[i]; 
    i++; 
    k++; 
  } 

  /* Copy the remaining elements of R[], if there 
  are any */
  while (j < n2) 
  { 
    arr[k] = R[j]; 
    j++; 
    k++; 
  } 
} 

/* l is for left index and r is right index of the 
sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r) 
{ 
  if (l < r) 
  { 
    // Same as (l+r)/2, but avoids overflow for 
    // large l and h 
    int m = l+(r-l)/2; 

    // Sort first and second halves 
    mergeSort(arr, l, m); 
    mergeSort(arr, m+1, r); 

    merge(arr, l, m, r); 
  } 
} 

/* UTILITY FUNCTIONS */
/* Function to print an array */
void printArray(int A[], int size) 
{ 
  int i; 
  for (i=0; i < size; i++) 
    printf("%d ", A[i]); 
  printf("\n"); 
} 

/* Driver program to test above functions */
int main() 
{ 
  int arr[] = {12, 11, 13, 5, 6, 7}; 
  int arr_size = sizeof(arr)/sizeof(arr[0]); 

  printf("Given array is \n"); 
  printArray(arr, arr_size); 

  mergeSort(arr, 0, arr_size - 1); 

  printf("\nSorted array is \n"); 
  printArray(arr, arr_size); 
  return 0; 
} 

*/
