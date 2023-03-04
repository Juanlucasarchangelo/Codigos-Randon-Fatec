#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    for (x = 0; x = 10; x++)
    {
        if(x % 2 == 0) continue;
        printf("%d \n", x);
    }
        
    return 0;
}
