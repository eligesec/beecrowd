#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//funcao que calcula o maior valor entre dois numeros e depois calcula o maior valor entre o resultado anterior e o proximo numero
int maiorAB(int A, int B, int C){
    
    int maxab, max;
    maxab = (A+B + abs(A-B))/2;
    max = (maxab+C + abs(maxab-C))/2;
    return max;
}

int main() {
 
    int A, B, C,maior12,maior23;
    
    scanf("%d %d %d", &A, &B, &C);
    
    printf("%d eh o maior\n",maiorAB(A, B ,C));
    return 0;
}