#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	int i;
	char t[50],c;
    printf("donner ton chain  : ");
	scanf("%s",&t);fflush(stdin);
	printf("donner ton caracter : ");
	scanf("%c",&c);
	for(i=0;i<strlen(t);i++){
		if(t[i]==c){
			printf("%c est existe dans %s \n",c,t);
		}
		else{
			printf("%c n-est  pas existe dans %s \n",c,t);
		}
	}
return 0;
}
