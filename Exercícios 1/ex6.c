#include <stdio.h>
#include <math.h>

typedef struct Cilindro {
    int raio, altura;
    float area;
} Cilindro;

float calculaArea(int raio, int altura) {
    return 2 * M_PI * raio * altura + 2 * M_PI * pow(raio, 2);
}

int calculaQuantLatas(Cilindro *cilindro, int quantCilindros) {
    float areaTotal = 0;
    
    for (int i = 0; i < quantCilindros; i++) {
        areaTotal += cilindro[i].area;
    }
    
    return ceil(areaTotal / 3);
}

int main()
{
    int quantCilindros, quantLatas;
    
    printf("Informe quantos cilindros serão pintados: ");
    scanf("%d", &quantCilindros);

    Cilindro cilindros[quantCilindros];
    
    for (int i = 0; i < quantCilindros; i++) {
        printf("Informe o raio da base do %d° cilindro (m): ", i + 1);
        scanf("%d", &cilindros[i].raio);
        
        printf("Informe a altura do %d° cilindro (m): ", i + 1);
        scanf("%d", &cilindros[i].altura);
    
        cilindros[i].area = calculaArea(cilindros[i].raio, cilindros[i].altura);
    }

    quantLatas = calculaQuantLatas(cilindros, quantCilindros);
    
    printf("A quantidade de latas necessária para pintar os cilindros é: %d\nE serão gastos R$%.2f na pintura.", quantLatas, (float)(quantLatas * 50));
}