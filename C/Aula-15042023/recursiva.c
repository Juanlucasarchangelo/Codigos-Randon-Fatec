#include <stdlib.h>
#include <stdio.h>

int up( int n){
    if (n == 0) return;
    up(n - 1);
    printf("%d \n", n);
}

int down( int j){
    if (j == 0) return;
    printf("%d \n", j);
    down(j - 1);
}

int main()
{
    up(10);
    down(15);
    return 0;
}