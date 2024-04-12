#include <stdio.h>
#include <math.h>
 
int main() {
 
    double A,B,C,delta,raiz1,raiz2;
    
    scanf("%lf %lf %lf", &A, &B, &C);
    
    delta = sqrt((B*B)-(4*A*C));
    
    if(delta > -1 && A != 0){
        raiz1 = (-B+delta)/(2*A);
        raiz2 = (-B-delta)/(2*A);
        printf("R1 = %.5lf\n", raiz1);
        printf("R2 = %.5lf\n", raiz2);
    }
    else{
        printf("Impossivel calcular\n");
    }
 
    return 0;
}