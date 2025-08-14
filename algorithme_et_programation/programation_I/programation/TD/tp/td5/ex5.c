/* le premier programe est affiche le resulta corect mais le tableau A ne jamais contenir les valeur de B car dimention de A=N 
 et les element afficher son dans la memoire de *p1 meme change la place de pointeur a (A+0) donc Attention!! 
 alor i doit ogmenter N a N+M et decleare le tabeau A evec dimention de N+M nessirerment pour le but de l'exercies
 */
#include<stdio.h>
#include<stdlib.h>

int main (){
	int N,M;

	printf("entrer dimention du premier tableau : ");
	scanf("%d",&N);
	printf("entrer dimention du 2ime tableau : ");
	scanf("%d",&M);

	int A[M+N],B[M]; 		// il faut declare A[N+M]

	int *p1,*p2;	

	//saisire le tableau

	printf("premier tableau \n");
	for(p1=A;p1<A+N;p1++){
		printf("entrer la valeur %ld : ",p1-A);
		scanf("%d",p1);
	}
	
	printf("2ime tableau \n");
	for(p2=B;p2<B+M;p2++){
		printf("entrer la valeur %ld : ",p2-B);
		scanf("%d",p2);
	}

	for(p2=B;p2<B+M;p2++){
		*p1=*p2;
		p1++;
	}
	N+=M;

	printf("tableau aditione\n");
	for(p1=A;p1<A+N;p1++){
		printf(" %d ",*p1);
		
	}
	printf("\n");
}

/*
	int N,M;

	printf("entrer dimention du premier tableau : ");
	scanf("%d",&N);
	printf("entrer dimention du 2ime tableau : ");
	scanf("%d",&M);

	int A[N+M],B[M];

	int i;

	//saisire le tableau
	printf("premier tablea\n");
	for(i=0;i<N;i++){
		printf("entrer la valeur %d : ",i);
		scanf("%d",A+i);
	}
	printf("2eme tableau\n");
	for(i=0;i<M;i++){
		printf("entrer la valeur %d : ",i);
		scanf("%d",B+i);
	}

	for(i=0;i<M;i++){
		*(A+N+i)=*(B+i);
	}
	N+=M;
	
	printf("le tableau resultat : \n");
	for(i=0;i<N;i++){
		printf("%d ",*(A+i));
		
	}
	printf("\n");
*/
/*
	int N,M;

	printf("entrer dimention du premier tableau : ");
	scanf("%d",&N);
	printf("entrer dimention du 2ime tableau : ");
	scanf("%d",&M);

	int A[N+M],B[M];

	int i;

	//saisire le tableau
	printf("premier tablea\n");
	for(i=0;i<N;i++){
		printf("entrer la valeur %d : ",i);
		scanf("%d",&A[i]);
	}
	printf("2eme tableau\n");
	for(i=0;i<M;i++){
		printf("entrer la valeur %d : ",i);
		scanf("%d",&B[i]);
	}

	for(i=0;i<M;i++){
		*(A+N+i)=B[i];
	}
	N+=M;
	
	printf("le tableau resultat : \n");
	for(i=0;i<N;i++){
		printf("%d ",A[i]);
		
	}
	printf("\n");
*/
