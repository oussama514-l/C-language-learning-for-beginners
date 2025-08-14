//exercice1:
#include <stdio.h>
int main(){
    char c ;int nb_a=0,nb_e=0,nb_i=0,nb_o=0,nb_u=0;
    while((c=getchar())!=EOF){
        switch (c){
            case 'a':
                nb_a++;break;
            case 'e':
                nb_e++;break;
            case 'i':
                nb_i++;break;
            case 'o': 
                nb_o++;break;
            case 'u': 
                nb_u++;break;                
        }
    }
    printf("Nbre a =%d\n",nb_a);printf("Nbre e=%d\n",nb_e);
    printf("Nbre i =%d\n",nb_i);printf("Nbre o=%d\n",nb_o);
    printf("Nbre u =%d\n",nb_u);
    return 0;    
}
//exercice2:
#include <stdio.h>
int main(){
    int i,n;
    double a,x,resultat;
    printf("entrer le degre du polynome:");scanf("%d",&n);
    printf("entrer la valeur de x:");scanf("%lf",&x);
    for (i=n;i>=0;i--){
        printf("entrer le coefficient d'indice %d:",i);scanf("%lf",&a);
        if(i==n){
            resultat=a;
        }else{
            resultat*=x;
            resultat+=a;
        }
    }
    printf("\n la valeur en %lf du polynome est %lf\n",x,resultat); 
    return 0;    
}
//exerice3:
#include <stdio.h>
int main(){
    char c;
    while((c=getchar()) !=EOF){
        if(c>='o'&& c<='9')
            putchar('*');
        else
            putchar(c);
    }        
    return 0;    
}
//exercice4:
#include <stdio.h>
int main(){
    int T[50],N,I; 
    long SOM;
    //saisir des dones
    printf("Dimension du tableau (max.50) : ");
    scanf("%d", &N );
    for (I=0; I<N; I++){
        printf("Elément %d : ", I);
        scanf("%d", &T[I]);    
    }
    //affichier le tableau
    for (I=0; I<N; I++){
        printf("%d ", T[I]);
        printf("\n");
    }
    //calcul la somme
    for (SOM=0, I=0; I<N; I++){
        SOM += T[I];
    }
    //affichage la resultat
    printf("Somme de éléments : %ld\n", SOM);
    return 0;
} 
//exercice5:
#include <stdio.h>
int main(){
    int T[50],N,I,J; 
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
    
    /* Effacer les zéros et comprimer : */
    /* Copier tous les éléments de I vers J et augmenter J pour les éléments non nuls. */
    for (I=0, J=0 ; I<N ; I++){
        T[J] = T[I];
        if (T[I] !=0)
        J++;
    }
    /* Nouvelle dimension du tableau ! */
    N = J;
    /* Edition des résultats */
    printf("Tableau résultat :\n");
    for (I=0; I<N; I++)
        printf("%d ", T[I]);
    printf("\n"); 
    return 0;
}





















