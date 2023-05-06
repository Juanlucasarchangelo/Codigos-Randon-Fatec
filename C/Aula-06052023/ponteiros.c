int main()
{
    int a = 27;
    int b = 15;
    int *p_a = &a; 
    
    // O & serve para você pegar o endereço da memoria onde a váriavel esta guardada.
    // Já o * na criação serve para criar um ponteiro, na impressão, serve para imprimir o conteúdo do endereço informado.

    printf("%d \n", a);
    printf("%d \n", *p_a);

    return 0;
}
