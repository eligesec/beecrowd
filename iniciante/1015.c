#include <stdio.h>
#include <math.h>

double distancia(double x1, double x2, double y1, double y2){
    double distanciaPontos;
    distanciaPontos = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    return distanciaPontos;
}
 
int main() {
 
    double x1,x2,y1,y2;
    
    scanf("%lf %lf %lf %lf", &x1,&y1,&x2,&y2);
    
    printf("%.4lf\n", distancia(x1,x2,y1,y2));
    return 0;
}