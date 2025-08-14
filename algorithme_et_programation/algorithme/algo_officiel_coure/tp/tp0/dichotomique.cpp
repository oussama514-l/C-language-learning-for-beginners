#include<stdio.h>
/*int rechDich(int t[],int x,int i,int n){
    int m=(i+n)/2;
	if(i>n)
		return 0;
    else if(x==t[m])
		return m;
    else if(x<t[m])
		return rechDich(t,x,i,m-1);
	else
		return rechDich(t,x,m+1,n);
}*/
int RecOccu(int t[],int n,int i,int m,int c){
//	int c=0;
	if(i>n)
		return c;
	else if(t[i]==m){
	//	c+=1;
		return RecOccu(t,n,i+1,m,c+1);
	}
	else
		return RecOccu(t,n,i+1,m,c);
}
int main(){
	int tab[6]={2,5,6,7,6,9};
	int m;
	printf("donnee : ");scanf("%d",&m);
	printf("le nombre ocuurence de %d est : %d\n",m,RecOccu(tab,5,0,m,0));
}
