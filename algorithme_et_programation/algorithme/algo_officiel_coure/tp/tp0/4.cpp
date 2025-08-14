#include<stdio.h>
#include<string.h>
int ExistCara(char *s,char c,int i){
	if(i>strlen(s)){
		return 0;
	}
	else{
		if(c==s[i]){
			return 1;
		}
		else{
			return ExistCara(s,c,i+1);
		}
	}
}
int main(){
	char s[50],c;
	printf("donner la chain : ");scanf("%s",&s);fflush(stdin);
	printf("donner la caractere : ");scanf("%c",&c);
	//printf("donner la chain : ");scanf("%s",&x);
	if(ExistCara(s,c,0))printf("%c est dans %s.\n",c,s);
	else printf("%c n'est pas existe dans %s.\n",c,s);
	return 0; 
}
