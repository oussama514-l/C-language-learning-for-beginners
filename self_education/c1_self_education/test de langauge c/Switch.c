#include <stdio.h>

int main(){
    int mois;
    printf("enter le nomber du mois:");
    scanf("%d",&mois);
    switch (mois){
      case 1:
        printf("janvier\n");break;
      case 2:
        printf("fevrier\n");break;
      case 3:
        printf("mars\n");break;
      case 4 :
        printf("avril\n");break;
      case 5 :
        printf("mai\n");break;
      case 6 :
        printf("juin\n");break;
      case 7 :
        printf("juille\n");break;
      case 8 :
        printf("Aout\n");break;
      case 9 :
        printf("Septembre\n");break;
      case 10:
        printf("october\n");break;
      case 11 :
        printf("november\n");break;
      case 12 :
        printf("decembre\n");break;
      default:
      printf("le numero ne correspondant a aucun mois\n");
          break;
    }
    return 0;  
}