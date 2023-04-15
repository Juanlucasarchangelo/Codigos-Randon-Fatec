// Entre 1 e 100, quero a somatoria dos impares tirando os divisiveis por 3

#include <stdio.h>
#include <stdlib.h>

int somatoria(int n){

    if(n == 1) return 1;
    if(n % 2 == 0 || n % 3 == 0) return somatoria(n-1);
    return n + somatoria(n - 1);
}

int main()
{
    int teto;
    printf("Digite um valor de teto para verificação: \n");
    scanf("%d", &teto);
    printf("Somátoria dos impares não modulos de 3: %d \n", somatoria(teto));
    return 0;
}
