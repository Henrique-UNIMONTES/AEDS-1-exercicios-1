#include <stdio.h>

int main()
{
    float valor1, valor2;
    
    printf("Informe o primeiro valor: ");
    scanf("%f", &valor1);
    
    do {
        printf("Informe o segundo valor: ");
        scanf("%f", &valor2);
        
        if (valor2 == 0) printf("\nERROR\nO segundo valor não pode ser nulo!\n");
    } while (valor2 == 0);
    
    printf("%.2f / %.2f = %.2f", valor1, valor2, valor1 / valor2);
}
