#include<stdio.h>
#include<string.h>
/*int plindrome(char *s, int i,int j){
	if(i>=j){
		return 1;
	}
	else{
		if(s[i]==s[j])
			return plindrome(s,i+1,j-1);
		else
			return 0;
	}
}*/
int plindrome(char *s, int i,int j){
	while(i<=j){
		if(s[i]!=s[j]){
			return 0;
			break;
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
	printf("donner la chain : ");scanf("%s",&s);	
	if(plindrome(s,0,strlen(s)-1))
		printf(" %s est vrais\n",s);
	else
		printf("%s est faux.\n",s);
	return 0; 
}
