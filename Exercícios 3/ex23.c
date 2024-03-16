#include <stdio.h>

int main() {
    int limite_inferior = 1, limite_superior = 9;
    
    for (int i = limite_inferior; i <= limite_superior; i++) {
        printf("----------Tabuada do %.2d----------\n\n", i);
        
        for (int j = 1; j <= 10; j++) {
            printf("%.2d x %.2d = %.2d\n", i, j, i * j);
        }
        
        printf("\n");
    }
}