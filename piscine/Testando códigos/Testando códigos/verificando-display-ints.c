#include <stdio.h>

int main() 
{
    int num = 0;
    
    // Imprime o valor 01 usando uma máscara de bits
    printf("%d%d\n", (num >> 1) & 1, num & 1);

    return (0);
}
