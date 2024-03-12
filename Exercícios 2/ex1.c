#include <stdio.h>

int main() {
    int tamanho = 3, wantToInverse = 0;
    int num[tamanho];
    
    for (int i = 0; i < tamanho; i++) {
        printf("Informe o valor do %d° número inteiro: ", i + 1);
        scanf("%d", &num[i]);
    }
    
    printf("Você deseja ordenar os valores em qual forma:\n[1] - Crescente\n[2] - Decrescente\n");
    scanf("%d", &wantToInverse);
    
    int aux[tamanho];
    int indices[tamanho];
    int menorValor;
    int skipNext;
    int indice;
    
    for (int i = 0; i < tamanho; i++) indices[i] = -1;
    
    for (int j = 0; j < tamanho; j++) {
        for (int i = 0; i < tamanho; i++) {
            int find = 0;
            
            for (int n = 0; n < tamanho; n++) {
                if (indices[n] == i) {
                    find = 1;
                }
            }
            
            if (find == 0) {
                menorValor = num[i];
                indice = i;
                break;
            }
        }
        
        for (int i = 0; i < tamanho; i++) {
            skipNext = 0;
            
            for (int n = 0; n < tamanho; n++) {
                if (indices[n] == i) {
                    skipNext = 1;
                }
            }
            
            if (skipNext != 1) {
                if (menorValor > num[i]) {
                    menorValor = num[i];
                    indice = i;
                }
            }
        }

        indices[j] = indice;
        aux[j] = menorValor;
    }
    
    if (wantToInverse == 2) {
        for (int i = 0; i < tamanho; i++) {
            num[i] = aux[tamanho - 1 - i];
        }
        
        for (int i = 0; i < tamanho; i++) {
            aux[i] = num[i];
        }
    }
    
    printf("\n-------------------------\n");
    
    for (int i = 0; i < tamanho; i++) {
        printf("O %d° valor é: %i\n", i + 1, aux[i]);
    }
}