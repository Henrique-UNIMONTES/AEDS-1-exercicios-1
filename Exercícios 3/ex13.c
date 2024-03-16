#include <stdio.h>

int getOlderMan(int h1, int h2) {
    return h1 > h2 ? h1 : h2;
}

int getYoungerMan(int h1, int h2) {
    return h1 < h2 ? h1 : h2;
}

int getOlderWoman(int w1, int w2) {
    return w1 > w2 ? w1 : w2;
}

int getYoungerWoman(int w1, int w2) {
    return w1 < w2 ? w1 : w2;
}

int main()
{
    int homem1, homem2, mulher1, mulher2;
    
    printf("Informe a idade do 1° homem: ");
    scanf("%d", &homem1);
    
    printf("Informe a idade do 2° homem: ");
    scanf("%d", &homem2);
    
    printf("Informe a idade da 1° mulher: ");
    scanf("%d", &mulher1);
    
    printf("Informe a idade da 2° mulher: ");
    scanf("%d", &mulher2);
    
    printf("A soma das idades do homem mais velho com a mulher mais nova é %d\n", getOlderMan(homem1, homem2) + getYoungerWoman(mulher1, mulher2));
    printf("O produto das idades do homem mais novo com a mulher mais velha é %d", getYoungerMan(homem1, homem2) * getOlderWoman(mulher1, mulher2));
}
