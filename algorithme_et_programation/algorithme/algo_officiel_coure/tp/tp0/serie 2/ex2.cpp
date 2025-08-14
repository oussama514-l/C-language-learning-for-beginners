#include<stdio.h>
#include<math.h>
int PGCD(int a,int b){
	if(a%b==0){
		return b;
	}
	else{
      return PGCD(b,a%b);
    }
}
main(){
	int p,a,b;
	printf("donner a= ");scanf("%d",&a);
	printf("donner b= ");scanf("%d",&b);
    p=PGCD(a,b);
	printf("PGCD(%d,%d)=%d",a,b,p);
}
