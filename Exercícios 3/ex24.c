#include <stdio.h>

typedef struct pessoa {
    char sexo;
    float salario;
    int idade;
} Pessoa;

int main() {
    float media_salario = 0;
    int menor_idade = 0, maior_idade = 0, quant_mulheres = 0;
    Pessoa pessoa_menor_salario;
    pessoa_menor_salario.sexo = 'N';
    pessoa_menor_salario.salario = 0;
    
    int i = 0;
    
    while (1) {
        Pessoa p;
        
        printf("Informe a idade da %d° pessoa: ", i + 1);
        scanf("%d", &p.idade);
        
        if (p.idade < 0) break;
        
        while (getchar() != '\n');
        
        printf("Informe o sexo da %d° pessoa (M ou F): ", i + 1);
        scanf("%c", &p.sexo);
        
        printf("Informe o salário da %d° pessoa: ", i + 1);
        scanf("%f", &p.salario);
        
        media_salario += p.salario;
        
        if (menor_idade == 0) menor_idade = p.idade;
        else if (menor_idade > p.idade) menor_idade = p.idade;
        
        if (maior_idade < p.idade) maior_idade = p.idade;
        
        if (p.sexo == 'F' && p.salario < 200) quant_mulheres++;
        
        if (pessoa_menor_salario.sexo == 'N') pessoa_menor_salario = p;
        else if (p.salario < pessoa_menor_salario.salario) pessoa_menor_salario = p;
        
        i++;
        printf("\n-------------------------\n");
    }
    
    printf("\n-------Foram cadastradas %d pessoas-------\n", i);
    printf("A média salarial do grupo foi de R$ %.2f\n", media_salario / (i == 0 ? 1 : i));
    printf("A maior idade informada foi de %d anos e a menor foi de %d anos\n", maior_idade, menor_idade);
    printf("Foram contabilizadas %d mulheres que recebem um salario inferior a R$ 200.00\n", quant_mulheres);
    if (pessoa_menor_salario.sexo == 'N') printf("Não foi possível contabilizar a pessoa de menor salário");
    else printf("A pessoa de menor salário é do sexo %s e possui %d anos de idade", pessoa_menor_salario.sexo == 'M' ? "masculino" : "feminino", pessoa_menor_salario.idade);
}