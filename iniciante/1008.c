#include <stdio.h>
 
int main() {
 
    int numFuncionario,horasTrab;
    double valorRecebe, salario;
    
    scanf("%d %d", &numFuncionario, &horasTrab);
    scanf("%lf", &valorRecebe);
    
    salario = valorRecebe*horasTrab;
    
    printf("NUMBER = %d\n", numFuncionario);
    printf("SALARY = U$ %.2lf\n", salario);
 
    return 0;
}