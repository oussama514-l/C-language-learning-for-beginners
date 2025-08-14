#include<stdio.h>
#include<string.h>
int voyelles(char c){
	char v[6]="aeiou";
	int i;
	for(i=1;i<=strlen(v);i++)
		if(c == v[i])
			return 1;
	return 0;
}
int nbvo(char s[]){
	int c,i;
	c=0;
	for(i=1;i<=strlen(s);i++){
		if(voyelles(s[i]))
			c++;
	}
	return c;
}
int main(){
	int nv,nc;
	char s[50];
	printf("donner votre chain : ");scanf("%s",&s);
	nv=nbvo(s);
	nc=strlen(s)-nv;
	printf("le mots %s contient %d voyelles et %d consonnes ",s,nv,nc);
}
