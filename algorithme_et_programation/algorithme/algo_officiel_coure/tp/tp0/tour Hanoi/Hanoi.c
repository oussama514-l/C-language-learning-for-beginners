#include<stdio.h>
void tourhanoi(int n, int A,int C){
	if(n==1){
		printf("%d =====> %d\n",A,C);
	}
	else{
		int B=6-(A+C);
		tourhanoi(n-1,A,B);
		tourhanoi(1,A,C);
		tourhanoi(n-1,B,C);	
	}
}
int main(){
	tourhanoi(4,1,3);
	return 0;
}
