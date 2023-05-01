#include <stdio.h>
#include <stdlib.h>

int verPositividade(int valor){

    if(valor > 0){
        printf("1") ;
    } else if (valor < 0)
    {
        printf("-1") ;
    } else {
        printf("0") ;
    }

}

int main()
{
    int  num;
    
    printf("Entre com um valor: \n");
    scanf("%d", &num);

    verPositividade(num);

    return 0;
}
