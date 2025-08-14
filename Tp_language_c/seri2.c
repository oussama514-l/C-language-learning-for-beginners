//exercice1:
#include <stdio.h>
int main(){
   char rep;
   printf("voulez-vous jouer?");
   rep=getchar();
   if (rep=='o'||rep=='O'){
      printf("c'est parti!\n");
   }else if(rep=='n'||rep=='N'){
      printf("tant pis\n");
   }
   return 0;
}
//exercice2:
#include <stdio.h>
int main(){
   int n,i;
   printf("entrer un entier:");
   scanf("%d",&n);
   //int i=1;
   int fact=1;
   //--> by while loop
   while(i<=n){
      fact*=i;
      i++;
   }
   // --> by for loop
   for(i=1;i<=n;i++){
      fact*=i;
   }
   printf("le factoriel de %d est:%d\n",n,fact);
   return 0;
}
//exercice 3:
#include<stdio.h>
int main(){
int i=1,a,b,pgcd;   
printf("entrer deux entiers:\n");
printf("a=");
scanf("%d",&a);
printf("b=");
scanf("%d",&b);
//-->using the while loop
while(i<=a && i<=b ){
   if (a%i==0 && b%i==0){
      pgcd=i; 
   }
   i++;
}
//-->using the for loop
for (int i=1;i<=b;i++){     //b is the minimum entre a and b
   if (a%i==0 && b%i==0){  
      pgcd=i;   
   }  
} 
printf(" PGCD(%d,%d)= %d\n",a,b,pgcd);      
return 0;
}
//exercice 3:dans la seance de tp:
#include <stdio.h>
int main(){
   int a,b,r;
   
   printf("entrer deux entiers:\n");
   printf("a=");
   scanf("%d",&a);
   printf("b=");
   scanf("%d",&b);
   while((r=(a%b))!=0){
      a=b;
      b=r;
   }
   printf("le pgcd est:%d\n",b);
   return 0;
}
//exercice 4:
#include <stdio.h>
int main(){
   int n=0,x=0,somme=0;
   // --> by using do__while loop:
   do{
      somme+=x; // is nacecerry to put the line of somme on the top when using do while in this example
      printf("entrer un entier positif:");
      scanf("%d",&x);
      n++;
   }while(x!=-1);
   // by using while loop:
   while(x!=-1){ 
      somme+=x; // is nacecerry to put the line of somme on the top when using do while in this example
      printf("entrer un entier positif:");
      scanf("%d",&x);
      n++;
   }
   printf("la moyenne de ces %d entiers vaut %f\n",n-1,(float)somme/(n-1));
   return 0;    
}
//exercice 5:
#include <stdio.h>
#include <math.h>
int main(){
   double x,somme,terme_suivant;
   int n,i,j,fact,signe=1;
   printf("saisir x:");
   scanf("%lf",&x);
   printf("saisir n:");
   scanf("%d",&n);
   somme=0;
   for(i=0;i<=(n-1)/2;i++){
      fact=1;
         for(j=1;j<=i;j++){
            fact=fact*j;
            signe=pow(-1,1);
            terme_suivant=signe*pow(x,2*i+1)/fact;
            somme=somme+terme_suivant;
         }
      }
   printf("le devloppement llimite de %lf a l'order %d est:%lf",x,n,somme);
   return 0;    
}

