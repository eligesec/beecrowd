#include <stdio.h>
 
int minutosDistancia(int distancia){
    int minutos;
    
    minutos = distancia*2;
    return minutos;
}

int main() {
 
   int distancia;
   
   scanf("%d", &distancia);
   
   printf("%d minutos\n",minutosDistancia(distancia));
    
    return 0;
}