#include <stdio.h>
#include <stdlib.h>

void saisire(int T[],int *x,int *n);
int testmidel(int T[],int x,int n);

int main (){
	int T[20];
	int pos=-1;
	int x,n;
	saisire(T,&x,&n);
	
	pos=testmidel(T,x,n-1);
	
	if (pos!=-1)
		printf("%d existe dans la positton %d");
	else 
		printf("dont exist");
}

void saisire(int T[],int *x,int *n){
	printf("donne n : ");scanf("%d",n);
	for(int i=0;i<*n;i++){
		printf("T[%d]=",i);scanf("%d",T+i);
	}
	printf("donne x : ");scanf("%d",x);
}

int testmidel(int T[],int x,int n){
	int medl=0,pos=0,fin=20;
	while(fin!=1){
		pos=(n-medl+1)/2;
		if (x>T[pos]){
			medl=pos;
			fin=n-medl;
		}
		else if (x<T[pos]){
			n=pos;
			fin=n-medl;
		}
	}

	if (x==T[n]) return n;
	else if(x==T[medl]) return medl;
	else return -1;
}
