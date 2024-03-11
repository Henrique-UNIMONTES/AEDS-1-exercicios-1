#include <stdio.h>

int main()
{
    float notas[4], media = 0;
    
    for (int i = 0; i < 4; i++) {
        printf("Digite a %d° nota: ", i + 1);
        scanf("%f", &notas[i]);
    }
    
    for (int i = 0; i < 4; i++) {
        media += notas[i];
    }
    
    media = media / 4;
    
    printf("A média do aluno foi de: %.2f\n\n", media);
    
    printf("Os dados de entrada deste algoritmo foram as 4 notas bimestrais do aluno, enquanto o de saída foi a nota média deste aluno nessas quatro provas.");
}