#include<stdio.h>
#include<string.h>
int plindrome(char *s, int i,int j){
	while(i<=j){
		if(s[i]!=s[j]){
			return 0;
		//	break;
		}	
		else{
			i++;
			j--;
		}
	}		
	return 1;
}
int main(){
	char s[50];
	printf("donné votre chain : ");scanf("%s",&s);
	if(plindrome(s,0,strlen(s)-1))
		printf("%s est palindrome ",s);
	else
		printf("%s n'est pas palindrome ",s);
}
