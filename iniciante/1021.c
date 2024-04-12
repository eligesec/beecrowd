#include <stdio.h>
 
int main() {
 
    double valor;
    int n100,n50,n20,n10,n05,n02,m1,m050,m025,m010,m005,m001,total;
    scanf("%lf", &valor);
    
    total = valor*100;
    
    n100=total/10000;
    total=total%10000;
    
    n50=total/5000;
    total=total%5000;
    
    n20=total/2000;
    total=total%2000;
    
    n10=total/1000;
    total=total%1000;
    
    n05=total/500;
    total=total%500;
    
    n02=total/200;
    total=total%200;
    
    m1=total/100;
    total=total%100;
    
    m050=total/50;
    total=total%50;
    
    m025=total/25;
    total=total%25;
    
    m010=total/10;
    total=total%10;
    
    m005=total/5;
    total=total%5;
    
    m001=total/1;
    
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",n100);
    printf("%d nota(s) de R$ 50.00\n",n50);
    printf("%d nota(s) de R$ 20.00\n",n20);
    printf("%d nota(s) de R$ 10.00\n",n10);
    printf("%d nota(s) de R$ 5.00\n",n05);
    printf("%d nota(s) de R$ 2.00\n",n02);
    
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",m1);
    printf("%d moeda(s) de R$ 0.50\n",m050);
    printf("%d moeda(s) de R$ 0.25\n",m025);
    printf("%d moeda(s) de R$ 0.10\n",m010);
    printf("%d moeda(s) de R$ 0.05\n",m005);
    printf("%d moeda(s) de R$ 0.01\n",m001);
 
    return 0;
}