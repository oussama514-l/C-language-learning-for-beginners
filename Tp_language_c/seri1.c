//exercice1:
#include <stdio.h>

int main(){
    int a,b,somme;
    a=10;
    b=50;
    somme=(a+b)*2;
    printf("le resultat:%d\n",somme);
 
    return 0;   
}
//exercice2:
#include <stdio.h>
int main(){
    char X;
    printf("introduire un caracter suivi de entrer\n");
    scanf("%c",&X);   //X=getchar();
    printf("le caracter %c a le code ASCII %d\n",X,X);
    return 0;
}

//exercice3:

#include <stdio.h>

int main(){
    const float pi=3.1415;
    const float R=20;
    float d,p,s;
    d=2*R;
    p=pi*d;
    s=pi*R*R;
    printf("un cercle de rayon %.2f a pour diametre %.2f pour circonference %.2f et pour surface %.2f\n",R,d,p,s);
    return 0;
}
//exercice 4:
#include <stdio.h>

int main(){
    
    int a,b,c,d,e,maxx,minn;

    printf("entrer deux entier a et b:\n");
    scanf("%d%d",&a,&b);
    if (a>b){
        minn=b;
    }else{
        minn=a;
    }
    printf("le minimum est:%d\n",minn);

    printf("entrer trois entier c et d et e:\n");
    scanf("%d%d%d",&c,&d,&e);
    if(c>d){
        maxx=c;
    }else{
        maxx=d;
    }
    if(maxx<e){
        maxx=e;
    }
    printf("le maximum est:%d\n",maxx);

    return 0;

} 
//exercice 5:
#include <stdio.h>
#include <math.h>

int main(){
    
    int a,b,c;
    float X1,X2;

    printf("entrer les les valeurs a et b et c:\n");
    scanf("%d%d%d",&a,&b,&c);

    double del=(b*b)-(4*a*c);

    if (del==0){
        X1=-b/(2*a);
        printf("l'equation a un seul solution qui est:%.2f\n",X1);
    }else if (del>0){
        X1=(-b-sqrt(del))/(2*a);
        X2=(b-sqrt(del))/(2*a);
        printf("l'equation a des solutions sont:%.2f et %.2f\n",X1,X2);
    }else{
        printf("l'equation n'a pas des solutions\n");
    }

    return 0;
}
//exercice 6:
#include <stdio.h>
int main(){
    double x;
    double p=1.0;
    int n;
    printf("entrer les valeur de x et n:\n");
    printf("x=");
    scanf("%lf",&x);
    printf("n=");
    scanf("%d",&n);
//-->by for loop
    int i;
    for(i=0;(i<n);i++){
        p=p*x;
    }  
// -->by while loop
    int j=0;
    while(j<n){
        p=p*x;
        j++;
    }
    printf("la valeur de %lf a la puissance %d pour la boucle for est:%lf\n",x,n,p);
    

    return 0;

}


