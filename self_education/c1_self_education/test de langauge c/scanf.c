#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main () {

// exemple for input one number in scanf
    int x;
    printf("entrer la valeur de x:");
    scanf("%d",&x);
    printf("la valeur de x est:%d\n",x);

// exemple for input 2 numbers at the same time in scanf
    float a,b;
    printf("donner la valeur de a et b:\n");
    scanf("%f%f",&a,&b);
    printf("la valeur de a est:%.2f et la valeur de b est:%.2f\n",a,b);
    printf("A=%.2f ,B=%.2f\n",a,b);
    printf("A+B=%.2f\n",a+b);
  
// exemple for input a character
    char myCharacter;
    printf("donner un character:");
    scanf(" %c",&myCharacter);   // it's importent to add the space befor %c at using scanf with characters
    printf("mon character est:%c\n",myCharacter);

// exemple for string without space like:"oussama"  NB:if you input a string like oussama lksafhsf --> output:oussama
    char myNayme[30];
    printf("entre your first name:");
    scanf("%s",myNayme);   // you don;t have to use the reference operator(&) when you working in with the strings in scanf
    printf("Hello %s\n",myNayme);

// exemple for input string with space like:"oussama elqate"   
      //From the example above, you would expect the program to print "oussama elqate if you try", but it only prints "oussama".
              //That's why, when working with strings, we often use the fgets() function to read a line of text. Note that you must include the following arguments: the name of the string variable, sizeof(string_name), and stdin:
    char fullName[30];
    printf("type youre full name:");
    fgets(fullName,sizeof(fullName),stdin);
    printf("Hello %s\n",fullName);
   //NB: use the scanf() function to input a single word ,and use fgets() for multiple words

    return 0;
}



