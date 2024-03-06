#include <stdio.h>
#include <math.h>

typedef struct Ponto {
    float x, y;
} Ponto;

float calculaDistancia(Ponto *ponto) {
    return sqrt(pow(ponto[0].x - ponto[1].x, 2) + pow(ponto[0].y - ponto[1].y, 2));
}

int main() {
    Ponto pontos[2];
    
    for (int i = 0; i < 2; i++) {
        printf("Informe a coordenada X do %i ponto: ", i + 1);
        scanf("%f", &pontos[i].x);
        
        printf("Informe a coordenada Y do %i ponto: ", i + 1);
        scanf("%f", &pontos[i].y);
    }
    
    printf("A distância entre os pontos A e B é: %.2f", calculaDistancia(pontos));
}