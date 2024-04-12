#include <stdio.h>

float calculaMedia(float n1, float n2, float n3, float n4){
    float media;
    
    media = (n1 * 2 + n2 * 3 + n3 * 4+ n4 * 1)/10;
    return media;
}
 
int main() {
 
    float n1,n2,n3,n4, media;

    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    media = calculaMedia(n1,n2,n3,n4);
    
    printf("Media: %.1lf\n",media);
    if(media>=7){
        printf("Aluno aprovado.\n");
    }
    else if(media<5.0){
        printf("Aluno reprovado.\n");
    }
    else if(media >= 5 && media < 7){
        printf("Aluno em exame.\n");
        float notaExame, mediaFinal;
        scanf("%f", &notaExame);
        mediaFinal = (media + notaExame) / 2;

        printf("Nota do exame: %.1lf\n",notaExame);

        if(mediaFinal>=5){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n", mediaFinal);
        }
        else{
            printf("Aluno reprovado.\n");
            printf("Media final: %.1lf\n", mediaFinal);
        }

    }
    return 0;
}