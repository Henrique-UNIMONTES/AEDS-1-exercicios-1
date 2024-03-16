#include <stdio.h>

const float DESCONTO[3] = { 0.02, 0.03, 0.05 };

typedef struct produto {
    char nome[100];
    int quant;
    float preco;
} Produto;

int calcDesconto(int quant, float preco) {
    if (quant < 6) return 0;
    if (quant < 11) return 1;
    return 2;
}

float calcTotal(int quant, float preco) {
    return quant * preco;
}

float applyDesconto(float total, int desconto) {
    return total * (1 - DESCONTO[desconto]);
}

int main() {
    Produto p;
    
    printf("Informe o nome do produto: ");
    scanf("%99s", p.nome);
    
    while(getchar() != '\n');
    
    printf("Informe a quantidade adquirida do produto: ");
    scanf("%d", &p.quant);
    
    printf("Informe o preço unitário do produto: ");
    scanf("%f", &p.preco);
    
    printf("\n------------------------------\n");
    printf("O total do produto foi: R$ %.2f\n", calcTotal(p.quant, p.preco));
    printf("O desconto foi de: %.0f%%\n", DESCONTO[calcDesconto(p.quant, p.preco)] * 100);
    printf("O total a pagar é: R$ %.2f", applyDesconto(calcTotal(p.quant, p.preco), calcDesconto(p.quant, p.preco)));
}