#include <stdio.h>

int main()
{
    float temperatura;
    
    printf("Informe a temperatura em Fahrenheit(F): ");
    scanf("%f", &temperatura);
    
    temperatura = (temperatura - 32) * 5 / 9;
    
    printf("A temperatura informada em graus celcius(°) é: %.2f", temperatura);
}