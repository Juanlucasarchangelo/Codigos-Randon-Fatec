int main()
{
    int v[10] = {1,2,3,4,5,6,7,8,9,10}, i;
    
    printf("%d \n", v);
    printf("%d \n", &v[0]);
    printf("%d \n", *v);

    for(i = 0; i < 10; i++){
        printf("%d \n", v[i]);
    }

    printf("============================================= \n");

    int * ptr;
    ptr = v;

    for(i = 0; i < 10; i++){
        printf("%d \n", *ptr);
        ptr++;
    }

    return 0;
}
