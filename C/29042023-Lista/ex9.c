#include <stdio.h>
#include <stdlib.h>

int somatoria(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + somatoria(n - 1);
    }
}


int main()
{
    int n;
    
    printf("Digite um valor: \n");
    scanf("%d", &n);
    
    if (0 >= n || n > 30) {
        printf("Numero invalido!");
    } else {
        printf("Somatoria dos numeros eh: %d \n", somatoria(n));
    }
}