// INCOMPLETE

#include <stdio.h>

int main() {
    int length = 3, distintos = 0;
    int num[length], buffer[length];
    
    for (int i = 0; i < length; i++) {
        buffer[i] = -1;
        printf("Informe o %d° número: ", i + 1);
        scanf("%d", &num[i]);
    }
    
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            if (buffer[j] != i && buffer[i] != j) {
                if (num[i] != num[j]) {
                    distintos++;
                    buffer[i] = j;
                }
            }
        }
    }
    
    printf("A quantidade de números distintos é %d", distintos);
}