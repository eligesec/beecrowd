#include <stdio.h>
 
double litrosGastos(int tempo, int velocidade){
    double distancia, litros;
    distancia = velocidade*tempo;
    litros = distancia/12;
    return litros;
    
} 
 
int main() {
 
    int tempo, velocidade;
    
    scanf("%d %d", &tempo, &velocidade);
    
    printf("%.3lf", litrosGastos(tempo, velocidade));
    return 0;
}