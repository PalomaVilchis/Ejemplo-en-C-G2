/**Calculadora basica
 * Por: Laura Gabriel Santes
 * 10-08-21
 * Programa que realiza operaciones basicas 
 * a partir de valores determinados por el usuario**/

#include <stdio.h>
#include <string.h>

/*Funciones que realizan las operaciones basicas*/
float suma(float x, float y)
{
    float resultado = x + y;
    return resultado;
}

float resta(float x, float y)
{
    float resultado = x - y;
    return resultado;
}

float multi(float x, float y)
{
    float resultado = x * y;
    return resultado;
}

float div(float x, float y)
{
    float resultado = x / y;
    return resultado;
}

int main(void)
{
    /*Declaracion de variables*/
    char operacion, s = 's', r = 'r', m = 'm', d = 'd';
    float a, b;
    float res;
    char resp[4];

    printf("********************Menu********************\nBienvenido si desea realizar alguna operacion pulse: si \n");
    scanf("%s", resp);

    /*Condicional que evalua si el usuario ha solicitado hacer una operacion*/
    while (strcmp(resp, "si") == 0)
    {

        printf("\nElija la operacion que desea realizar\nSuma: s\nResta: r\nMultiplicacion: m\nDivision: d\n\n");
        scanf("\n%c", &operacion);

        if (operacion == s)
        {
            printf("Inserte el primer valor:\n");
            scanf("%f", &a);
            printf("Inserte el segundo valor:\n");
            scanf("%f", &b);
            res = suma(a, b);
            printf("El resultado es: %f\n", res);
        }
        else if (operacion == r)
        {
            printf("Inserte el primer valor:\n");
            scanf(" %f", &a);
            printf("Inserte el segundo valor:\n");
            scanf(" %f", &b);
            res = resta(a, b);
            printf("El resultado es: %f\n", res);
        }
        else if (operacion == m)
        {
            printf("Inserte el primer valor:\n");
            scanf(" %f", &a);
            printf("Inserte el segundo valor:\n");
            scanf(" %f", &b);
            res = multi(a, b);
            printf("El resultado es: %f\n", res);
        }
        else if (operacion == d)
        {
            printf("Inserte el primer valor:\n");
            scanf(" %f", &a);
            printf("Inserte el segundo valor:\n");
            scanf(" %f", &b);
            res = div(a, b);
            printf("El resultado es: %f\n", res);
        }
        printf("¿Deseas realizar otra operacion?\n");
        scanf("%s", resp);
    }/*El usuario no solicita mas operaciones y termina ciclo while*/
    printf("Apagando...\n"); /*Termina programa*/
    return 0;
}
