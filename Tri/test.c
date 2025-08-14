#include <stdio.h>
#include <math.h>
double F(int X){
    return sin(X)+log(X)-sqrt(X);
}
int main() {
    int I;
    printf("\tX\tF(X)\n");
    for (I=1 ; I<=10 ; I++)
        printf("\t%d\t%f\n", I, F(I));
    return 0;
}