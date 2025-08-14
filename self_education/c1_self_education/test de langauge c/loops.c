#include <stdio.h>

int main (){
    int i = 0;
    int j=0;
    while(i<5){
        printf("%d\n",i);
        i++;
    }
    printf("\n");
    for (j=0;j<6;j++){
        printf("%d\n",j);
    }
    printf("\n");
    // example of code withe a false condition 
    int k = 2;
    do {
    printf("%d\n", k);   //the loop will always be executed at least once, even if the condition is false, 
                         //because the code block executed before the condition is tested
    k++;
    }while (k < 1);
    printf("\n");
    // exemple of code with a true condition
    int h=0;
    do{
        printf("%d\n",h);
        h++;
    }while (h<4);
    int condition1,condition2;
    if (condition1 && condition2) {  
    // Code to execute if both condition1 and condition2 are true  
    }  
    if (condition1 || condition2) {  
    // Code to execute if either condition1 or condition2 is true  
    }

    return 0;
}
// calcule de la somme de 1 a N by using for loop:
#include <stdio.h>  
int main() {
    int i,N;
    int s=0;
    printf("entrer la valeur de N:");
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        s+=i;
    }
    printf("la somme de 1 a %d est:%d\n",N,s);
    return 0;  
}
// calcule de la somme de 1 a N by using for loop:
#include <stdio.h>  
int main() {
    int i=1,s=0;
    do{
        s+=i;
        i++;
    }while(i<=10);
    printf("la somme de 1 a 10 est:%d\n",s);
    return 0;  
}
