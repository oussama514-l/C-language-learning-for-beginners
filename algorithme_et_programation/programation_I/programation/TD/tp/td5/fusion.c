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
