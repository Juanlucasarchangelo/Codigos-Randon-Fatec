#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra;

    printf("Sigite uma letra: \n");
    letra = getchar();

    switch (letra)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("É vogal.\n");
        break;
    default:
    printf("Nâo é vogal!\n");
        break;
    }

    return 0;
}