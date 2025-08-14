/*Ecrire un programme  permettant de saisir  20 notes et de les stocker dans
      un tableau nommé Etudiant, puis les afficher.*/
#include <stdio.h>  
int main() {
    float etudiants[20];
    int i;
    for(i=0;i<20;i++){
        while (1){
            printf("entrer la note de l'etudiant nm:%d\n",i+1);
            scanf("%f",&etudiants[i]);
            if(etudiants[i]>=0 && etudiants[i]<=20){
                break;
            }else{
            printf("error!! la note doit etre entrer entre 0 et 20\n");     
            }
        }
    }
    printf("les note saisies sont:\n");
    for(i=0;i<20;i++){
        printf("la note de l'etudiant nm%d est:%.2f\n",i+1,etudiants[i]); 
    }
    return 0;  
}
/*un programme  permettant de saisir  20 notes et de les afficher après avoir multiplié toutes ces 
  notes par un coefficient fourni par l’utilisateur*/
#include <stdio.h>
int main(){
    float etud[20],coif;
    int i=0;
    printf("entrer le coificient:"); scanf("%f",&coif);
    while(i<20){
        printf("entrer la note de l'etudiant nm %d:",i+1);
        scanf("%f",&etud[i]); 
        i++;
    }
    for(i=0;i<20;i++){
        printf("la note de l'etudiant nm%d aprer multiplier par %.1f est:%.2f\n",i+1,coif,etud[i]*coif);        
    }
    return 0;
}
/*un programme permettant de saisir 12 notes et qui affiche la moyenne de ces notes*/
#include <stdio.h>
int main(){
    float s=0,moy,etud[12];
    int i=0;
    while(i<12){
        printf("entrer la note de l'etudiant nm %d:",i+1);
        scanf("%f",&etud[i]); 
        i++;
    }
    for(i=0;i<12;i++){
        s=s+etud[i];
    }
    moy =s/12;
    printf("la moyenne des notes d'estudiants est:%.2f\n",moy);
    return 0;
}
/*un programme permettant de saisir 12 notes et qui affiche le maximum de
   ces notes et affichier qui sa etudiant*/
#include <stdio.h>
int main(){
    float maxx,etud[12];
    int index,i=0;
    while(i<12){
        printf("entrer la note de l'etudiant nm %d:",i+1);
        scanf("%f",&etud[i]); 
        i++;
    }
    maxx=etud[0];
    for(i=0;i<12;i++){
        if(etud[i]>maxx){
            maxx=etud[i]; 
            index=i+1;
        }
    }
    printf("la note maximum de l'etudiants est:%.2f qui est trouver en l'etudiant nm%d\n",maxx,index);
    return 0;
}
/*ecrire un algoritme qui est verifier si la valeur 3 exist dans un tablau*/
#include <stdio.h>  
#include <stdbool.h>  

int main() {  
    int tab[5] = {44, 2, 11, 3, 6}; // Déclaration et initialisation du tableau  
    int i;  
    bool exist_trois = false; // On suppose d'abord que '3' n'existe pas  

    // Vérifier chaque élément du tableau  
    for (i = 0; i < 5; i++) {  
        if (tab[i] == 3) {  
            exist_trois = true; // On a trouvé '3'  
            break; // Sortir de la boucle, '3' a été trouvé  
        }  
    }  

    // Affichage du résultat  
    if (exist_trois) {  
        printf("La valeur trois existe dans le tableau.\n");  
    } else {  
        printf("La valeur trois n'existe pas dans le tableau.\n");  
    }  

    return 0;  
}
/*ecrir un algorith qui verifier si tous les elements de tableau sont egales a 2*/
#include <stdio.h>  
#include <stdbool.h>  

int main() {  
    int tab[5] = {44, 2, 11, 4, 6}; // Déclaration et initialisation du tableau  
    int i;  
    bool tous_deux = true; // On suppose d'abord que tous les éléments sont égaux à 2  

    // Verifier chaque élément du tableau  
    for (i = 0; i < 5; i++) {  
        if (tab[i] != 2) {  
            tous_deux = false; // Si un élément n'est pas 2, on change à false  
            break; // On peut sortir de la boucle car on a trouvé un élément non égal à 2  
        }  
    }  

    // Affichage du résultat  
    if (tous_deux) {  
        printf("Alors toutes les valeurs de ce tableau sont égales à deux !\n");  
    } else {  
        printf("Alors toutes les valeurs de ce tableau ne sont pas égales à deux !\n");  
    }  
    
    return 0;  
}
/*Écrire un programme permettant de décaler les valeurs nulles vers la fin du tableau , en gardant l'ordre des éléments.
Exemple    1  2  0  6  9  0  0  8   0   3
Résultat     1  2  6  9  8  3  0  0   0   0*/

#include <stdio.h>

int main(){
    int Tab[10],aide,i,j;
 
    for(i=0;i<10;i++){
        printf("Element[%d]=",i);
        scanf("%d",&Tab[i]);
    }
 
    for(i=0;i<10;i++)
        printf("%d  ",Tab[i]);
   
    for(i=0;i<9;i++){
        if(Tab[i]==0) {
            j=i+1;
            while(Tab[j]==0 && j<9) {
                j++;
            }
        aide = Tab[i]; 
        Tab[i]= Tab[j]; 
        Tab[j]= aide ;
        }   
    } 
    printf("\n"); 
    for(i=0;i<10;i++)
        printf("%d  ",Tab[i]);
    printf("\n");
    return 0; 
}