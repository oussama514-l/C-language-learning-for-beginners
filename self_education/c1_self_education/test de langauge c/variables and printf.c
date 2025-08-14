#include <stdio.h>
#include <stab.h>
#include <stdbool.h>
#include <stdlib.h>

int main(){

// declaration variables:
  const float pi = 3.14;
  const char moins[] ="september"; 
  //const int minutesPerHour;
  //minutesPerHour = 60; // error
  int mynum = 15;
  char myletter ='D';
  float mynmbr = 12.11119;
  // Create a variable and assign the value 15 to it
  int myNum = 13;

  // Declare a variable without assigning it a value
  int myOtherNum;
  myOtherNum=myNum;
  char myName[] ="oussama";
  int sum1 = 100 + 50;        // 150 (100 + 50)  i could use any operation in diclaration variable
  int sum2 = sum1 + 250;      // 400 (150 + 250)
  int sum3 = sum2 + sum2;     // 800 (400 + 400)
  int X = 5;
  float Y=10;
  // creat boolien variables
  bool money = true;
  bool magic = false;

// affichage la resultat :
  printf("my number is:%d and myletter is:%c and mynmbr is:%.2f\n",mynum,myletter,mynmbr); 
  printf("%.2f\n",mynum+mynmbr);
  printf("my favorite number is:%d\n",231);
  printf("my favorite letter is:%c\n",'S');
  printf("my0therNum=%d\n",myOtherNum);
  printf("my name is:%s\n",myName);
  printf("le moins est:%s\n",moins);
  printf("%.2f\n",pi);
  printf("sum3 is:%d\n",sum3);
  printf("%d\n",++X);
  printf("%.2f\n",--Y);
  // return boolien values :
  printf("%d\n",money);
  printf("%d\n",magic);

  printf("%d\n", 10 == 10); // Returns 1 (true), because 10 is equal to 10
  printf("%d\n", 18 <= 15); // Returns 0 (false), because 18 is big than 15
  printf("%d\n", 5 ==55);  // Returns 0 (false) because 5 is not equal to 55

  printf("%d\n",X<=Y);

// test in real live:
  int my_age =19;
  float voting_age =24;

  if (my_age <= voting_age){
    printf("old enough to vote!\n");
  } else{
    printf("old not enough to vote!\n");
  }

 return 0;

}




