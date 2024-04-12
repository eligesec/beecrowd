#include <stdio.h>
 
int main() {
 
    int idade, dias, mes, ano;
    
    scanf("%d", &idade);
    
    ano=idade/365;
    idade=idade%365;
    
    mes=idade/30;
    idade=idade%30;
    
    dias=idade;
    
    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dias\n", dias);
 
    return 0;
}