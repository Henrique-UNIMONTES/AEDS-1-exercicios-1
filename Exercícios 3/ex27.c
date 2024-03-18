#include <stdio.h>

typedef struct pessoa {
    char corOlho, corCabelo;
    int idade;
    float altura, peso;
} Pessoa;

int main()
{
    int length = 20;
    Pessoa pessoas[length];
    int quant_peso_50_idade_60 = 0, quant_altura_1_50 = 0, quant_olho_a = 0, quant_cabelo_r_not_olho_a = 0;
    float media_idade_altura_1_50 = 0;
    
    for (int i = 0; i < length; i++) {
        printf("Informe a idade da %d° pessoa: ", i + 1);
        scanf("%d", &pessoas[i].idade);
        printf("Informe a altura da %d° pessoa (m): ", i + 1);
        scanf("%f", &pessoas[i].altura);
        printf("Informe o peso da %d° pessoa (kg): ", i + 1);
        scanf("%f", &pessoas[i].peso);
        
        while(getchar() != '\n');
        
        printf("Informe a cor do olho da %d° pessoa:\n[A] - Azul\n[P] - Preto\n[V] - Verde\n[C] - Castanho\n", i + 1);
        scanf("%c", &pessoas[i].corOlho);
        
        while(getchar() != '\n');
        
        printf("Informe a cor do cabelo da %d° pessoa:\n[P] - Preto\n[C] - Castanho\n[L] - Loiro\n[R] - Ruivo\n", i + 1);
        scanf("%c", &pessoas[i].corCabelo);
    }
    
    for (int i = 0; i < length; i++) {
        if (pessoas[i].idade > 50 && pessoas[i].peso < 60) quant_peso_50_idade_60++;
        
        if (pessoas[i].altura < 1.50) {
            media_idade_altura_1_50 += pessoas[i].idade;
            quant_altura_1_50++;
        }
        
        if (pessoas[i].corOlho == 'A' || pessoas[i].corOlho == 'a') quant_olho_a++;
        
        else if (pessoas[i].corCabelo == 'R' || pessoas[i].corCabelo == 'r') quant_cabelo_r_not_olho_a++;
    }
    
    printf("\n-----------------------\n");
    printf("Foram contabilizadas %d pessoa(s) com idade superior a 50 anos e peso inferior a 60 kg\n", quant_peso_50_idade_60);
    printf("A média de idade das pessoas com altura inferior a 1.50 m foi de %.2f anos\n", media_idade_altura_1_50 / quant_altura_1_50);
    printf("A porcentagem de pessoas com olhos da cor azul foi de %.2f%%", (float)(quant_olho_a * 100) / (float)length);
    printf("A quantidade de pessoas que possuem cabelos ruivos e olhos não azuis foi de %d", quant_cabelo_r_not_olho_a);
    
}
