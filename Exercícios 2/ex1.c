#include <stdio.h>

void sortVector(int *vector, int tamanho) {
    int aux[tamanho];
    int indices[tamanho];
    
    aux[0] = 0;
    int menorValor = *vector[0];
    
    for (int j = 0; j < tamanho; j++) {
        for (int i = 0; i < tamanho; i++) {
            for (int i = 0; i < tamanho; i++) {
                if ()
            }
            if (menorValor > *vector[i]) {
                menorValor = *vector[i];
                aux[j] = i;
            }
        }
        
        aux[j] = menorValor;
    }
    
    *vector = aux;
}

int main() {
    int tamanho = 3;
    int num[tamanho];
    
    for (int i = 0; i < tamanho; i++) {
        printf("Informe o valor do %d° número inteiro: ", i + 1);
        scanf("%d", &num[i]);
    }
    
    sortVector(&num, tamanho);
}