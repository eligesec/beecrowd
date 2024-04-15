#include <stdio.h>

int calculaTempo(int minuto_inicial, int minuto_final, int hora_inicial, int hora_final){
    int tempo;
    
    tempo = (hora_final*60+minuto_final) - (hora_inicial*60+minuto_inicial);
    
    if(tempo <= 0){
        tempo = tempo + 1440;
    }
    
    return tempo;
}
 
int main() {
 
    int minuto_inicial, minuto_final, hora_inicial, hora_final, tempo;
    scanf ("%d %d %d %d", &hora_inicial, &minuto_inicial, &hora_final, &minuto_final);
    
    tempo = calculaTempo(minuto_inicial, minuto_final, hora_inicial, hora_final);
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", tempo/60,
    tempo%60);
 
    return 0;
}