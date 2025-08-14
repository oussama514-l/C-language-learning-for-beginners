#include <stdio.h>
#include <stab.h>

int main(){

    int T[]={5,23,13,66,7,}; //declarer un tableau du nombres de type int
    printf("%d\n",T[2]); //affichier le nombre de la position 2 -->13
    T[0]=0;     //affecter ou changer la valeur de la position 0
    printf("%d\n",T[0]); //affichier la valeur actuel de la position 0 -->0

    //declarer un tableau de quatre elements:
    int mytab[4];


    // afficher les elements du tableau tab en utilisant la boucle for
    int myNumbers[] = {25, 50, 75, 100,-22,10,0};
    int len = sizeof(myNumbers) / sizeof(myNumbers[0]);
    int i;
    for (i = 0; i < len; i++) {
        printf("%d\n", myNumbers[i]);
    }
    
    // affichier le tableau tab comme la fichage en python
    int tab[] = {22, 43, 55, 6, 7}; // Declare and initialize the array  
    int size = sizeof(tab) / sizeof(tab[0]); // Calculate the size of the array     
    printf("[");  
    for (int i = 0; i < size; i++) {  
        printf("%d", tab[i]);  
        if (i < size - 1) {  
            printf(", "); // Print a comma if it’s not the last element  
        }  
    }  
    printf("]\n"); // Print a closing bracket and a new line 

    return 0;
}
