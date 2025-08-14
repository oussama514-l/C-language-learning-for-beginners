#include<stdio.h>

int main(){
	char a;

	printf("voulez vous jouer ?\n");
	//scanf("%c",&a);
	a=getchar() ;
	if (a=='O' || a=='o')
		printf("c'est partie\n");
	else if (a=='N' || a=='n')
		printf("tant pis\n");

	a=getchar();
	
	//return 0;
}

