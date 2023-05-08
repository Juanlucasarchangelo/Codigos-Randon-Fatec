int main()
{
    char nome;

    printf("Entre com um nome qualquer: \n ");
    gets(nome);

    contaLetra(nome);
    
    return 0;
}

int contaLetra( char * s){
    char *ptr = s;
    int soma = 0;

    while (*ptr != '\0')
    {
        if(*ptr == 'c' || ptr == 'C'){
            soma++;
        }
        ptr++;
    }

    printf("O total de letras C: %d \n", soma);
    
}
