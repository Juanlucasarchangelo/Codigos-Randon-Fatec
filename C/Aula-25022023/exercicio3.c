#include <stdio.h>
#include <stdlib.h>

int main()
{
   double ordenado = 1200;

   ordenado > 1000 ? ordenado = ordenado + (ordenado * 0.05) : ordenado = ordenado + (ordenado * 0.07);
    return 0;
}
