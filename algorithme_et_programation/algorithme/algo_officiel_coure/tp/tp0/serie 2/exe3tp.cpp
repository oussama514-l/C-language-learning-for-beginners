#include<stdio.h>
#include<string.h>
int existeCar(char x[],char c,int i){
	if(i>strlen(x)){
		return 0;
	}
	else{
		if(c==x[i]){
			return 1;
		}
		else{
		    return existeCar(x,c,i+1);
		}
	}
}
int main(){
	char x[50],c;
	printf("donner la chain : ");scanf("%s",&x);fflush(stdin);
	printf("donner la caractere : ");scanf("%c",&c);
	//printf("donner la chain : ");scanf("%s",&x);
	if(existeCar(x,c,0))printf("%c est dans %s.\n",c,x);
	else printf("%c n'est pas existe dans %s.\n",c,x);
	return 0; 
}
