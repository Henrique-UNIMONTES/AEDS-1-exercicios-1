#include <stdio.h>

typedef struct pessoa {
    int idade;
    float altura, peso;
} Pessoa;

int main()
{
    int length = 15;
    Pessoa pessoas[length];
    int quant_idade = 0, quant_altura = 0, quant_peso;
    float media_alturas = 0;
    
    for (int i = 0; i < length; i++) {
        printf("Informe a idade da %d° pessoa: ", i + 1);
        scanf("%d", &pessoas[i].idade);
        printf("Informe a altura da %d° pessoa (m): ", i + 1);
        scanf("%f", &pessoas[i].altura);
        printf("Informe o peso da %d° pessoa (kg): ", i + 1);
        scanf("%f", &pessoas[i].peso);
    }
    
    for (int i = 0; i < length; i++) {
        if (pessoas[i].idade > 50) quant_idade++;
        
        else if (pessoas[i].idade > 10 && pessoas[i].idade < 20) {
            media_alturas += pessoas[i].altura;
            quant_altura++;
        }
        
        if (pessoas[i].peso < 40) quant_peso++;
    }
    
    printf("\n-----------------------\n");
    printf("Foram contabilizadas %d pessoa(s) com idade superior a 50 anos\n", quant_idade);
    printf("A média de altura das pessoas com idade entre 10 e 20 anos foi de %.2f m\n", media_alturas / quant_altura);
    printf("A porcentagem de pessoas com peso abaixo de 40 kg foi de %.2f%%", (float)(quant_peso * 100) / (float)length);
    
}
