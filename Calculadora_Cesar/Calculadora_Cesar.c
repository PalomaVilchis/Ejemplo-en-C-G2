/*Este programa realiza la funcion de una calculadora con las operaciones aritmeticas basicas
las cuales son (+,-,*,/)
Programa realizado por César Arturo Mejia Bazan 2182005565*/

/*Librerias*/
#include <stdio.h>

int main(){
    float a,b,c; /*Declaraciones de datos de tipo flotante*/
    int opc=-1; /*Declaración de dato tipo entero*/
    while (1) /*ciclo while*/
    {
        printf("¿Que operacion quieres realizar?\n");
        printf("1. Suma\n2. Resta\n3. Multiplicación\n4. División\n5. Salir\n"); /*Menú de opciones*/
        scanf("%d", &opc); /*Se recibe un dato de tipo entero desde el teclado y se almacena en opc*/
        if(opc == 5) break; /*Si el dato almacenado en opc es 5 se rompe el ciclo while*/
        /*Se piden los números con los cuales se van a trabajar las operaciones*/
        printf("Dame el primer número que deseas trabajar: ");
        scanf("%f", &a);
        printf("Dame el segundo número que deseas trabajar: ");
        scanf("%f", &b);
        switch (opc) /*switch de opc*/
        {
        case 1: /*En el caso de suma*/
            c = a + b; /*Se realiza la suma y se guarda en c*/
            printf("\n%.2f + %.2f = %f\n\n", a, b, c); /*Se imprime en pantalla la suma*/
            break; /*Se rompe el switch*/
        case 2: /*En el caso de resta*/
            c = a - b; /*Se realiza la resta y se guarda en c*/
            printf("\n%.2f - %.2f = %f\n\n", a, b, c); /*Se imprime en pantalla la resta*/
            break;
        case 3: /*En caso de multiplicación*/
            c = a * b; /*Se realiza la multiplicación y se guarda en c*/
            printf("\n%.2f * %.2f = %f\n\n", a, b, c); /*Se imprime en pantalla la multiplicación*/
            break;
        case 4: /*En caso de división*/
            c = a / b; /*Se realiza la división y se guarda en c*/
            printf("\n%.2f / %.2f = %f\n\n", a, b, c); /*Se imprime en pantalla la división*/
            break;
        default: /*En caso de que opc sea diferente de las opciones del menú*/
            printf("\nOpción invalida"); /*Se notifica que se ingreso una opción invalida*/
            break;
        }
    }
    printf("\n¡GRACIAS POR USAR ESTE PROGRAMA!\n"); 
    return 0; /*Fin del programa*/
}