#include <stdio.h>

typedef struct pessoa {
    int idade;
    char sexo;
} Pessoa;

int main() {
    int length = 7;
    Pessoa pessoa[length];
    int idadeTotal = 0, idadeTotalM = 0, idadeTotalF = 0, quant_m = 0, quant_f = 0;
    
    for (int i = 0; i < length; i++) {
        printf("Informe a idade da %d° pessoa: ", i + 1);
        scanf("%d", &pessoa[i].idade);
        
        while(getchar() != '\n');
        
        printf("Informe o sexo da %d° pessoa:\n[M] - Masculino\n[F] - Feminino\n", i + 1);
        scanf("%c", &pessoa[i].sexo);
    }
    
    for (int i = 0; i < length; i++) {
        idadeTotal += pessoa[i].idade;
        
        if (pessoa[i].sexo == 'M' || pessoa[i].sexo == 'm') {
            idadeTotalM += pessoa[i].idade;
            quant_m++;
        }
        
        else if (pessoa[i].sexo == 'F' || pessoa[i].sexo == 'f') {
            idadeTotalF += pessoa[i].idade;
            quant_f++;
        }
    }
    
    printf("\n--------------------------\n");
    printf("A idade média do grupo foi de %d anos\n", idadeTotal / length);
    printf("A idade média das mulheres foi de %d anos\n", idadeTotalF / quant_f);
    printf("A idade média dos homens foi de %d anos", idadeTotalM / quant_m);
}