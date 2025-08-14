#include<stdio.h>
int main (){
	int i=8;
	int j=5;
	float x=0.005f;
	float y=-0.01f;
	char c='c';
	char d='d';
	int a;

	printf("1/		%d\n",(3*i-2*j)%(2*d-c));
	//printf("	avrie 		%d\n",);
	//printf("	valeur 		%d\n",);
	//printf("	expr		%d\n",);
	//printf("	avrie %d\n",);

	a=(2*((i/j)+(4*(j-3))))%11;
	printf("2/		%d\n",a);
	printf("%d\n",(3*i-2*j));
	printf("%d\n",(2*d-c));
	printf("%d\n",'d');
	a='c';
	printf("c/		%d\n",a);
	printf("6/		%d\n",5*(i+j)>'c');
	printf("%d\n",101%14);
	printf("	valeur 		%f\n",x);
	printf("	valeur 		%f\n",y);
	printf("	valeur 		%f\n",'f');
	printf("	valeur 		%6d\n",'f');
	printf("	valeur 		%-0d\n",'f');
	printf("	valeur 		%-06d\n",'f');
	printf("	valeur 		%-0d\n",'f');
	printf("	valeur 		%6d\n",'f');
	printf("	valeur 		%-6d\n",'f');
	printf("	valeur 		%-6d\n",'f');
	printf("	valeur 		%000f\n",'f');
}
