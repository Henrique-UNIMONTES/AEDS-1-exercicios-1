#include <stdio.h>

int verifyTriangle(int *vector, int length) {
    if (length != 3) printf("Internal error");
    
    if (vector[0] + vector[1] > vector[2]) {
        if (vector[1] + vector[2] > vector[0]) {
            if (vector[2] + vector[0] > vector[1]) {
                if (vector[0] == vector[1] && vector[1] == vector[2]) return 0;
                
                if (vector[0] != vector[1] && vector[1] != vector[2] && vector[0] != vector[2]) return 2;
                
                return 1;
            }
        }
    }
    
    return -1;
}

int main() {
    int comprimentos[3];
    
    for (int i = 0; i < 3; i++) {
        printf("Informe o comprimento do %d° segmento: ", i + 1);
        scanf("%d", &comprimentos[i]);
    }
    
    switch (verifyTriangle(comprimentos, 3)) {
        case 0:
            printf("Os comprimentos formam um triangulo equilátero!");
            break;
        
        case 1:
            printf("Os comprimentos formam um triangulo isósceles!");
            break;
        
        case 2:
            printf("Os comprimentos formam um triangulo escaleno!");
            break;
        
        default:
            printf("Os comprimentos informados não formam um triangulo!");
            break;
    }
}