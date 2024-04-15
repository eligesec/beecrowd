#include <stdio.h>
 
int main() {
 
    int hora_inicio, hora_fim, count;
    
    scanf("%d %d", &hora_inicio, &hora_fim);
    
    count = hora_fim - hora_inicio;
    
    if(hora_fim > hora_inicio){
        printf("O JOGO DUROU %d HORA(S)\n", count);
    }
    else if(hora_inicio > hora_fim){
        count = 24 - hora_inicio + hora_fim;
        printf("O JOGO DUROU %d HORA(S)\n", count);
    }
    else{
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    return 0;
}