#include <stdio.h>
 
int main() {
 
    char nome[21];
    double salarioFixo, comissao, totalReceber;
    
    scanf("%s",nome);
    scanf("%lf %lf", &salarioFixo, &comissao);
    
    totalReceber = (comissao*0.15)+salarioFixo;
    
    printf("TOTAL = R$ %.2lf\n",totalReceber);
 
    return 0;
}