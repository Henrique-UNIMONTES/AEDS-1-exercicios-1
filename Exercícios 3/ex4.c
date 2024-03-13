#include <stdio.h>

int main()
{
    int num = 5;
    
    for (int i = 0; i < 10; i++) {
        printf("%d x %d = %d\n", num, i + 1, num * (i + 1));
    }
}
