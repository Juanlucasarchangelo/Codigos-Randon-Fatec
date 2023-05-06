int sizeString(char * s){
    char * p_inicial = s;
    char * p_percorre = s;
    int qtd = 0;

    while (*p_percorre != '\0')
    {
        *p_percorre++;
    }
    
    int tam = p_percorre - p_inicial;
    printf("%d", tam);

}

int main()
{
    sizeString("Hello World");
    return 0;
}
