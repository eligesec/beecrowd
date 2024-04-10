#include <stdio.h>

//funcao que calcula a media de consumo
double consumoMedio(int distancia, double combustivel){
    double mediaConsumo = distancia / combustivel;
    return mediaConsumo;
}
 
int main() {
    
    int distancia;
    double combustivel;
    //leitura de entrada
    scanf("%d %lf", &distancia, &combustivel);
    //saida que printa o consumo medio
    printf("%.3lf km/l\n",consumoMedio(distancia, combustivel));
    
    return 0;
}