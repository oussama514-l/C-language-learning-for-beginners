#include <stdio.h>
int main(){
    int l,c,i,j;
    printf("donnez les lines:");
    scanf("%d",&l);
    printf("donnez les collones:");
    scanf("%d",&c);
    for(i=1;i<=l;i++){
        for(j=1;j<=c;j++){ 
            if(i==1 || j==1 || i==l || j==c)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
    /*
                * * * * * * * * 
                *             * 
                *             * 
                *             * 
                *             * 
                *             * 
                * * * * * * * * 
    */
}
//exercice2:
#include <stdio.h>
int main(){
    int l,i,j;
    printf("donnez les lines:");
    scanf("%d",&l);

    for(i=1;i<=l;i++){
        for(j=1;j<=l;j++){ 
            if(i==1 || j==1 || i==l || j==l || i==j || j==l-i+1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    /*
    donnez les lines:5
                                    * * * * *  
                                    * *   * * 
                                    *   *   * 
                                    * *   * * 
                                    * * * * *
    */
    return 0;
}
//exercice 3:
#include <stdio.h>
int main(){
    int l,i,j;
    printf("donnez les lines:");
    scanf("%d",&l);

    for(i=1;i<=l;i++){
        for(j=1;j<=l-i;j++)
            printf(" ");
        for(int k=1;k<=l;k++)
            printf("* ");
        printf("\n");
    }
    return 0;
    /*
    donnez les lines:6       
     * * * * * * 
    * * * * * * 
   * * * * * * 
  * * * * * * 
 * * * * * * 
* * * * * * 

    */
}
//exercice 4:
#include <stdio.h>
int main(){
    int l,i,j,x;
    printf("donnez les lines:");
    scanf("%d",&x);
    
    for(i=-x;i<=x;i++){
        if(i<0)
            l=-i;
        else
            l=i;
        for(j=0;j<x+1;j++){
            if(j<x-l)
                printf(" ");
            else   
                printf("* ");
        }
        printf("\n");
    }
    return 0;
    /*
* * * * * * * * 
 * * * * * * * 
  * * * * * * 
   * * * * * 
    * * * * 
     * * * 
      * * 
       * 
      * * 
     * * * 
    * * * * 
   * * * * * 
  * * * * * * 
 * * * * * * * 
* * * * * * * *     
    */
}
//exercice5:
#include <stdio.h>
int main(){
    int l,i,j,x;
    printf("donnez les lines:");
    scanf("%d",&x);

    for(i=-x;i<=x;i++){
        if(i<0)
            l=-i;
        else
            l=i;
        for(j=0;j<l+1;j++)
            printf("* ");
        printf("\n");
    }
    return 0;
/*
* * * * * * * * 
* * * * * * * 
* * * * * * 
* * * * * 
* * * * 
* * * 
* * 
* 
* * 
* * * 
* * * * 
* * * * * 
* * * * * * 
* * * * * * * 
* * * * * * * * 
*/
}
//exercice 6:
#include <stdio.h>
int main(){
    int l,i,j,x;
    printf("donnez les lines:");
    scanf("%d",&x);

    for(i=-x;i<=x;i++){
        if(i<0)
            l=-i;
        else
            l=i;
        for(j=0;j<2*x-l+1;j++){ 
            if(j<l)
                printf("  ");
            else
                printf("* ");
        }
        printf("\n");
    }
    return 0;
/*
              * 
            * * * 
          * * * * * 
        * * * * * * * 
      * * * * * * * * * 
    * * * * * * * * * * * 
  * * * * * * * * * * * * * 
* * * * * * * * * * * * * * * 
  * * * * * * * * * * * * * 
    * * * * * * * * * * * 
      * * * * * * * * * 
        * * * * * * * 
          * * * * * 
            * * * 
              * 
*/
}
//exercice8:
#include <stdio.h>
int main(){
    int l,i,j,x;
    printf("donnez les lines:");
    scanf("%d",&x);

    for(i=0;i<=x;i++){
        for(j=-x;j<=x;j++){ 
            if(-(x-i)<j && j<(x-i))
                printf("  ");
            else
                printf("* ");
        }
        printf("\n");
    }
    return 0;
/*
*                           * 
* *                       * * 
* * *                   * * * 
* * * *               * * * * 
* * * * *           * * * * * 
* * * * * *       * * * * * * 
* * * * * * *   * * * * * * * 
* * * * * * * * * * * * * * * 
*/
}
//exercice9:
#include <stdio.h>
int main(){
    int l,i,j,x;
    printf("donnez les lines:");
    scanf("%d",&x);

    for(i=0;i<=x;i++){
        for(j=-x;j<=x;j++){ 
            if(-i<j && j<i)
                printf("  ");
            else
                printf("* ");
        }
        printf("\n");
    }
    return 0;
/*
* * * * * * * * * * * * * * * 
* * * * * * *   * * * * * * * 
* * * * * *       * * * * * * 
* * * * *           * * * * * 
* * * *               * * * * 
* * *                   * * * 
* *                       * * 
*                           * 
*/
}