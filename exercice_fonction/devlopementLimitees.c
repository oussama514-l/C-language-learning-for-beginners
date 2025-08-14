#include <stdio.h>  
#include <math.h>  

// Fonction pour calculer la factorielle  
double factorial(int n) {  
    double result = 1.0;  
    for (int i = 2; i <= n; i++) {  
        result *= i;  
    }  
    return result;  
}  

// Fonction pour calculer le développement limité de cos(x)  
double taylor_cos(double x, int n) {  
    double tdl = 0.0;  
    for (int k = 0; k < n; k++) {  
        double term = pow(-1, k) * pow(x, 2 * k) / factorial(2 * k);  
        tdl += term;  
    }  
    return tdl;  
}  

// Fonction pour calculer le développement limité de sin(x)  
double taylor_sin(double x, int n) {  
    double tdl = 0.0;  
    for (int k = 0; k < n; k++) {  
        double term = pow(-1, k) * pow(x, 2 * k + 1) / factorial(2 * k + 1);  
        tdl += term;  
    }  
    return tdl;  
}  

// Fonction pour calculer le développement limité de sinh(x)  
double taylor_sinh(double x, int n) {  
    double tdl = 0.0;  
    for (int k = 0; k < n; k++) {  
        double term = pow(x, 2 * k + 1) / factorial(2 * k + 1);  
        tdl += term;  
    }  
    return tdl;  
}  

// Fonction pour calculer le développement limité de cosh(x)  
double taylor_cosh(double x, int n) {  
    double tdl = 0.0;  
    for (int k = 0; k < n; k++) {  
        double term = pow(x, 2 * k) / factorial(2 * k);  
        tdl += term;  
    }  
    return tdl;  
}  

int main() {  
    int choix;  
    double x;  
    int n;  
    
    printf("Choisir la fonction:\n");  
    printf("1. cos\n");  
    printf("2. sin\n");  
    printf("3. sinh\n");  
    printf("4. cosh\n");  
    scanf("%d", &choix);  
    
    printf("Entrer la valeur de x (en radians): ");  
    scanf("%lf", &x);  
    
    printf("Entrer le nombre de termes (n): ");  
    scanf("%d", &n);  
    
    double resultat;  
    
    switch(choix) {  
        case 1:  
            resultat = taylor_cos(x, n);  
            printf("cos(%.2f) avec %d termes: %.10f\n", x, n, resultat);  
            break;  
        case 2:  
            resultat = taylor_sin(x, n);  
            printf("sin(%.2f) avec %d termes: %.10f\n", x, n, resultat);  
            break;  
        case 3:  
            resultat = taylor_sinh(x, n);  
            printf("sinh(%.2f) avec %d termes: %.10f\n", x, n, resultat);  
            break;  
        case 4:  
            resultat = taylor_cosh(x, n);  
            printf("cosh(%.2f) avec %d termes: %.10f\n", x, n, resultat);  
            break;  
        default:  
            printf("Choix invalide!\n");  
            return 1;  
    }  
    
    return 0;  
}  