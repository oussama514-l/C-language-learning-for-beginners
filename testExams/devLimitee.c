#include <stdio.h>
#include <math.h>

double facto(int n){
    if(n==1 || n==0)
        return 1;
    double fact=1;
    for(int i=2;i<=n;i++)
        fact*=i;
    return fact;
}
double convertir_x(int x){
    return x*3.14/180;
}
double DL_sin(double x,int n){
    double dl=0;
    double X=convertir_x(x);
    for(int i=0;i<n;i++)
        dl+=pow(-1,i)*pow(X,2*i+1)/facto(2*i+1);
    return dl;
}
double DL_cos(double x,int n){
    double dl=0;
    double X=convertir_x(x);
    for(int i=0;i<n;i++)
    dl+=pow(-1,i)*pow(X,2*i)/facto(2*i);
    return dl;
}
double DL_sh(double x,int n){
    double dl=0;
    double X=convertir_x(x);
    for(int i=0;i<n;i++)
        dl+=pow(X,2*i+1)*facto(2*i+1);
    return dl;
}
double DL_ch(double x,int n){
    double dl=0;
    double X=convertir_x(x);
    for(int i=0;i<n;i++)
        dl+=pow(X,2*i)*facto(2*i);
    return dl;
}
double DL_exp(double x,int n){
    double dl=1;
    double X=convertir_x(x);
    for(int i=1;i<n;i++)
        dl+=pow(X,i)*facto(i);
    return dl;
}
int main(){
    double x;
    int n;
    printf("entrer x(en deg):");
    scanf("%lf",&x);
    printf("entrer l'ordre n:");
    scanf("%d",&n);
    printf("le devloppement limitee pour la sinus de %lf a l'order %d est:%lf\n",x,n,DL_sin(x,n));
    printf("le devloppement limitee pour la cosinus de %lf a l'order %d est:%lf\n",x,n,DL_cos(x,n));
    printf("le devloppement limitee pour la sinh de %lf a l'order %d est:%lf\n",x,n,DL_sh(x,n));
    printf("le devloppement limitee pour la cosh de %lf a l'order %d est:%lf\n",x,n,DL_ch(x,n));
    printf("le devloppement limitee pour l'exponontielle de %lf a l'order %d est:%lf\n",x,n,DL_exp(x,n));
}