#include <stdio.h>
#include <math.h>

int main() {
    float raio;
    
    printf("Informe o raio da esfera: ");
    scanf("%f", &raio);
    
    printf("A área da esfera é: %.2f", (4 * M_PI * pow(raio, 3)) / 3);
}