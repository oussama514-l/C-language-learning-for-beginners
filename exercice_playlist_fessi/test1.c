/* une suite de n asterisques*/
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main(){
    char ch1[20]; 
    char ch2[20];
    char chMax[20];
    printf("entrer le premier mot:");
    scanf("%s",ch1);
    printf("entrer le deuxiem mot:");
    scanf("%s",ch2);

    
    int i,j,k;
    bool drp;
    int len1=strlen(ch1);
    int len2=strlen(ch2);
    int lenmax;
    if(len1>=len2){
        lenmax=len1;
        for(i=0,j=0;i<lenmax;i++,j++)
            chMax[j]=ch1[i];
    }
    else{
        lenmax=len2;
        for(j=0,i=0;j<lenmax;j++,i++)
            chMax[j]=ch2[i];
    }
    for(i=0;i<lenmax;i++){ 
        k=i+1;
        while(chMax[i]==chMax[k]&&k<lenmax){
            drp=false;
            i++;
            k++;
        }
        drp=true;
        if(drp==true){
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