//NEED'S ADJUSTMENT

#include <stdio.h>

int main() {
    int length = 3, distintos = 0, fatorial = 6;
    int num[length], key[fatorial], value[fatorial];
    
    for (int i = 0; i < length; i++) {
        printf("Informe o %d° número: ", i + 1);
        scanf("%d", &num[i]);
    }
    
    for (int i = 0; i < fatorial; i++) {
        key[i] = -1;
        value[i] = -1;
    }
    
    int count = 0;
    
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            if (num[i] != num[j]) {
                int notInBuffer = 1;
                
                for (int n = 0; n < fatorial; n++) {
                    if (key[n] == j && value[n] == i) {
                        notInBuffer = 0;
                        break;
                    }
                }
                
                if (notInBuffer) {
                    distintos++;
                    key[count] = i;
                    value[count] = j;
                }
            }
            
            if (i != j) count++;
        }
    }
    
    printf("A quantidade de números distintos é %d", distintos);
}