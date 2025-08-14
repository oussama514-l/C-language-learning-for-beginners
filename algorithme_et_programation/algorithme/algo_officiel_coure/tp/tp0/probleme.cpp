#include<stdio.h>
#include<string.h>
int phrase(char *s){
	int i,c;
	c=1;
	for(i=1;i<=strlen(s);i++){
		if(*(s+i)==" ")
			c+=1;
	}
	return c;
}
int main(){
	char s[50];
	int c;
	printf("donner votre phrase : ");scanf("%s",&s);
	c=phrase(s);
	printf("la phrase (%s) contien  %d mots ",s,c);
}
