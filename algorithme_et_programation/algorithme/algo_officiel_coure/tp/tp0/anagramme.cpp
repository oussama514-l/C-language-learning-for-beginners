#include<stdio.h>
#include<string.h>
int anag(char x[],char y[]){
	int i,j,c;
	c=0;
	if(strlen(x) == strlen(y)){
		for(i=1;i<strlen(y);i++)
			for(j=1;j<=strlen(x);j++)
				if(x[j]==y[i])
					c++;
		if(c == strlen(x))
			return 1;
	/*	else
			return 0;*/
	}
	else
		return 0;
}
int main(){
	char x[50],y[50];
	printf("donner premier mot : ");scanf("%s",&x);fflush(stdin);
	printf("donner deuxiem mot : ");scanf("%s",&y);
	if(anag(x,y))
		printf("le mot %s est un anagramme du mot %s ",x,y);
	else
		printf("n'est pas anagramme");
}
