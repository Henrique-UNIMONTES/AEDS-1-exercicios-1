#include <stdio.h>

int main() {
    int sexo;
    float altura, peso;
    
    printf("Informe seu sexo:\n[1] - Masculino\n[2] - Feminino\n");
    scanf("%d", &sexo);
    
    printf("Informe sua altura: ");
    scanf("%f", &altura);
    
    if (sexo == 1) {
        peso = 72.7 * altura - 58;
    }
    
    else {
        peso = 62.1 * altura - 44.7;
    }
    
    printf("Seu peso ideal é %.2f", peso);
}