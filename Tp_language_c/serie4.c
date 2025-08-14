//exercice1:
#include <stdio.h>
 int main(){
        int T[50],N,I,J,aide; 
        //saisir des dones
        printf("Dimension du tableau (max.50) : ");
        scanf("%d", &N );
        for (I=0; I<N; I++){
            printf("Elément %d : ", I);
            scanf("%d", &T[I]);    
        }
        //affichier le tableau
        printf("Tableau donné : \n");
        for (I=0; I<N; I++)
            printf("%d ", T[I]);
        printf("\n");
        /* Echange de T[I] et T[J] */
        for(I=0,J=N-1;I<(N/2);I++,J--){
        aide=T[I];
        T[I]=T[J];
        T[J]=aide;
        }
        /* Edition des résultats */
        printf("tableau resultat:\n");
        for(I=0;I<N;I++)
        printf("%d ",T[I]);
        printf("\n");
        return 0;
    } 
    //exercice2:
#include <stdio.h>
    int main(){
    /* Déclarations */
    /* Les tableaux et leurs dimensions */
    int T[50], TPOS[50], TNEG[50];
    int N, NPOS, NNEG;
    int I; /* indice courant */
    /* Saisie des données */
    printf("Dimension du tableau (max.50) : ");
    scanf("%d", &N );
    for (I=0; I<N; I++){
        printf("Elément %d : ", I);
        scanf("%d", &T[I]);
    }
    /* Affichage du tableau */
    printf("Tableau donné :\n");
    for (I=0; I<N; I++)
        printf("%d ", T[I]);
    printf("\n");
    /* Initialisation des dimensions de TPOS et TNEG */
    NPOS=0;
    NNEG=0;
    /* Transfer des données */
    for (I=0; I<N; I++){
        if (T[I]>0){
            TPOS[NPOS]=T[I];
            NPOS++;
        }
        if (T[I]<0){
            TNEG[NNEG]=T[I];
            NNEG++;
        }
    }
    /* Edition du résultat */
    printf("Tableau TPOS :\n");
    for (I=0; I<NPOS; I++)
        printf("%d ", TPOS[I]);
    printf("\n");

    printf("Tableau TNEG :\n");
    for (I=0; I<NNEG; I++)
        printf("%d ", TNEG[I]);
    printf("\n");
return 0;
}
//exercice3:
#include <stdio.h>
    int main(){
      int U[50], V[50],N,I;
      long PS=0;

      printf("Dimension des tableaux (max.50) : ");
      scanf("%d", &N );
      printf("** Premier tableau **\n");
      for (I=0; I<N; I++){
        printf("Elément %d : ", I);
        scanf("%d", &U[I]);
      }
      printf("** Deuxième tableau **\n");
      for (I=0; I<N; I++){
        printf("Elément %d : ", I);
        scanf("%d", &V[I]);
      }
      /* Calcul du produit scalaire */
      for (PS=0, I=0; I<N; I++)
        PS += (long)U[I]*V[I];
      /* Edition du résultat */
      printf("Produit scalaire : %ld\n", PS);
    return 0;
}
//exercice4:
#include <stdio.h>
int main(){ 
    int T[50][50];
    int L, C;
    int I, J;
    long SOM;

    printf("Nombre de lignes (max.50) : ");
    scanf("%d", &L );
    printf("Nombre de colonnes (max.50) : ");
    scanf("%d", &C );
    for (I=0; I<L; I++)
        for (J=0; J<C; J++){
            printf("Element[%d][%d] : ",I,J);
            scanf("%d", &T[I][J]);
        }
    /* Affichage du tableau */
    printf("Tableau donné :\n");
    for (I=0; I<L; I++){
        for (J=0; J<C; J++)
            printf("%d", T[I][J]);
        printf("\n");
    }
    /* Calcul de la somme */
    for (SOM=0, I=0; I<L; I++)
        for (J=0; J<C; J++)
            SOM += T[I][J];
    printf("Somme des éléments : %ld\n", SOM);
    return 0;
}
//exercice5:
    #include <stdio.h>
    int main(){
        int T[50][50]; 
        int L, C;
        int I, J;
        long SOM;

        printf("Nombre de lignes (max.50) : ");
        scanf("%d", &L );
        printf("Nombre de colonnes (max.50) : ");
        scanf("%d", &C );
        for (I=0; I<L; I++)
            for (J=0; J<C; J++){
                printf("Elément[%d][%d] : ",I,J);
                scanf("%d", &T[I][J]);
            }
        /* Affichage du tableau */
        printf("Tableau donné :\n");
        for (I=0; I<L; I++){
            for (J=0; J<C; J++)
                printf("%7d", T[I][J]);
            printf("\n");
        }
        /* Calcul et affichage de la somme des lignes */
        for (I=0; I<L; I++){
            for (SOM=0, J=0; J<C; J++)
                SOM += T[I][J];
            printf("Somme - ligne %d : %ld\n",I,SOM);
        }
        /* Calcul et affichage de la somme des colonnes */
        for (J=0; J<C; J++){
            for (SOM=0, I=0; I<L; I++)
                SOM += T[I][J];
            printf("Somme - colonne %d : %ld\n",J,SOM);
        }
        return 0;
    }












