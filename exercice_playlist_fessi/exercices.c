/* une suite de n asterisques*/
#include <stdio.h>
int main(){
    int x,i,j;
    printf("donnez un nm:");
    scanf("%d",&x);
    for(i=1;i<=x;i++){
        for(j=1;j<=i;j++)
            printf("*");
        printf("\n");
    }   
    return 0;
                    /*
    donnez un nm:6
        *
        **
        ***
        ****
        *****
        ******
                  */
}
/* exercice2*/
#include <stdio.h>
int main(){
    int x,i=1,j,k=1;
    printf("donnez un nm:");
    scanf("%d",&x);
    for(i=1;i<=x;i++){
        for(j=x-i;j>=1;j--)
            printf(" ");
        for(j=1;j<=k;j++)  // on peut ecrire aussi for(j=1;j<=i+i-1;j++) et ilimineer le k
            printf("*");
        printf("\n");
        k=k+2;
    }
    return 0;
                       /*
 donnez un nm:9
        *
       ***
      *****
     *******
    *********
   ***********
  *************
 ***************
*****************
                    */
}
/*  ecrir un programme qui affichier si un mot donnez par vous est palindrom ou non*/
#include <stdio.h>  
#include <string.h>  
#include <stdbool.h>  

int main() {  
    char chain[30];  // Exemple : RADAR  
    printf("Entrer un mot : ");  
    scanf("%s", chain);    //utiliser sa pour saisir un mot 

    int len = strlen(chain);  
    bool estPalindrome = true;  

    // Vérification du palindrome  
    for (int i = 0; i < len / 2; i++) {  
        if (chain[i] != chain[len-1-i]) {  
            estPalindrome = false; // Ce n'est pas un palindrome  
            break;  
        }  
    }

    // Affichage du résultat  
    if (estPalindrome) {  
        printf("Alors le mot est un palindrome.\n");  
    } else {  
        printf("Alors le mot n'est pas un palindrome.\n");  
    }  
    return 0;  
}
/* ecrire un programme qui est affichier si una text est tautogramme ou non le text doit etre entrer par l'etulisateur*/
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main(){
    char ch[30];
    int i;
    printf("entrer un text:");
    fgets(ch,sizeof(ch),stdin);    //utiliser sa pour saisir un text ou multiple de chain de caracter avec les espaces

    int len=strlen(ch);
    char caracter=ch[0];
    bool text_tautogramme=true;
    for(i=0;i<len;i++){
        if(ch[i]== ' ' ){
            if(i+1<len && ch[i+1]!=caracter){
                text_tautogramme=false;
                break;
            }
        }
    }
    if(text_tautogramme){
        printf("le text est tautogramme\n");
    }else{
        printf("le text n'est pas tautogramme\n");
    }
    return 0;
}
/* ecrire un programme c qui est affichier sont repetition les lettres comuns aux deux mots sont*/
#include <stdio.h> 
#include <stdbool.h>
#include <string.h>
int main(){
    char ch1[20]; 
    char ch2[20];
    printf("entrer le premier mot:");
    //fgets(ch1,sizeof(ch1),stdin);
    gets(ch1);
    printf("entrer le deuxiem mot:");
   // fgets(ch2,sizeof(ch2),stdin);
    gets(ch2);
    
    int i,j,k,drp=0;
    int len1=strlen(ch1);
    int len2=strlen(ch2);
    for(i=0;i<len1;i++){
        drp=0;
        for(k=i-1;k>=0;k--){
            if (ch1[i]==ch2[k]){
                drp=1;
                break;
            }
        }
        if(drp==0){
            for(j=0;j<len2;j++){
                if(ch1[i]==ch2[j]){
                    printf("la lettre %c est commune entre les deux mots\n",ch1[i]);
                    break;
                }
            }
        }
    }   
    return 0;
}
/* ecrire un programme qui permuter deux variables entre deux et sans utiliser un autre variable valeur_index*/
#include <stdio.h>
int main(){
    int a=5,b=8;
    printf("avant: a=%d & b=%d\n",a,b);

    //methode1:
    //par utiliser l'addition
    a=a+b; // 13=5+8
    b=a-b; // 5=13-8
    a=a-b; // 8=13-5

    //methode2:
    //par utiliser la multiplication et la division
    a=a*b;  //40=5*8
    b=a/b;  //5=40/8
    a=a/b;  //8=40/5

    printf("apres: a=%d & b=%d\n",a,b);
    return 0;
}
/* ecrire un algrithme qui affichier le nmbr si est premier ou non*/
#include <stdio.h>
int main(){
    int n,i,j=0;
    printf("entrer un entier positifs:");
    scanf("%d",&n);
    for(i=2;i<n-1;i++){
        if((n%i)==0){
            j++;
        }
    }
    if(j==0){
        printf("alors le nombre est premier\n");
    }else{
        printf("alors le nombre n'est pas premier\n");
    }
    return 0;
}
/*ecrire un programme qui est affichier le maximum et le minimum d'un tableau donnz par l'utilisateur*/
#include <stdio.h>
int main(){
    int tab[10],i,n;
    int max,min;

    printf("entrer len de ce tableau a saisie:");
    scanf("%d",&n);
    printf("donnez les elements du tableaux de 1 a 10 element:\n");
    for (i=0;i<n;i++){
        printf("l'element nm %d est:",i+1);
        scanf("%d",&tab[i]);
    }
    printf("tableaux donnez:\n");
    for(i=0;i<n;i++){
        printf("%d ",tab[i]);
    }
    printf("\n");

    max=tab[0];
    for(i=0;i<n;i++){
        if(tab[i]>=max)
            max=tab[i];
    }
    min=tab[0];
    for(i=0;i<n;i++){
        if(tab[i]<=min)
            min=tab[i];
    }
    printf("alors le maximum du tablau est:%d\nle minimum du tableau est:%d\n",max,min);
    return 0;
}
