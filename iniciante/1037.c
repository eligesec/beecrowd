#include <stdio.h>
 
int main() {
 
    double valor;
    
    scanf("%lf", &valor);
    
    valor = valor *100;
    
    if(valor > -1 && valor < 2501){
        printf("Intervalo [0,25]\n");
    }
    else if(valor > 2500 && valor < 5001){
        printf("Intervalo (25,50]\n");
    }
    else if(valor > 5000 && valor < 7501){
        printf("Intervalo (50,75]\n");
    }
    else if(valor > 7500 && valor <10001){
        printf("Intervalo (75,100]\n");
    }
    else{
        printf("Fora de intervalo\n");
    } 
    return 0;
}