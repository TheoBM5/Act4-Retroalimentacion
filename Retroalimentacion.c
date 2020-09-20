#include <stdio.h>

void capturar_enteros(){
    int enteros[5];
    float promedio;
    int suma = 0;
    int i=0;

    for(size_t i=0; i<5; i++)
    {
        scanf("%i", &enteros[i]);
    }
    for(size_t i=0; i<5; i++)
    {
        printf("%i \n", enteros[i]);
    }
    for (size_t i=0; i<5; i++)
    {
        suma=suma+enteros[i];
    }
    printf("Suma: %i\n", suma);
    promedio=suma/5;
    printf("Promedio: %f\n", promedio);
}

int main(){
    char op;
    do
    {
        printf("1) Capturar enteros\n");
        printf("2) Mostrar cadena n veces\n");
        printf("0) Salir\n");
        scanf("%c", &op);
        switch(op)
        {
            case '1':
                capturar_enteros();
                break;
            case '2':
                break;
            case '3':
                break;
            default:
                break;
        }
        fflush(stdin);
    } while (op != '0');
    
    return 0;
}