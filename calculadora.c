/*
 *
 * Calculadora sencilla en C
 * Por: Gabriel Espinosa Burguete
 * Fecha: 10 de agosto de 2021
 * 
 * Este programa imprime un menu donde el usuario puede
 * elegir entre suma, resta, multiplicacion y division.
 * Al elegir una operacion, se preguntara por dos numeros enteros
 * y procedera a hacer la operacion e imprimir el resultado 
 * en pantalla; se imprime el menu de nuevo.
 * Las operaciones se pueden repetir hasta elegir la opcion 0.
 *
 */

// Bibliotecas
#include <stdio.h>

// Firmas de funciones
void menu();
int suma(int a, int b);
int resta(int a, int b);
int mult(int a, int b);
float division(int a, int b);

// Funcion main
int main(){
    // Llamada al menu
    menu();
    return 0;
}

// El menu imprime el menu y resultados,
// ademas de recibir toda la info del usuario
void menu(){
    int opc = 0;
    int a, b;
    // do-while para repetir menu hasta elegir 0
    do{
        // Menu principal
        printf("\tPrograma de calculadora\n");
        printf("1. Suma\n");
        printf("2. Resta\n");
        printf("3. Multiplicacion\n");
        printf("4. Division\n");
        printf("0. Salir\n");
        pritnf("Opcion: ");

        // Lectura de opcion elegida por el usuario
        scanf("%d", &opc);

        // Lectura de numeros a operar en caso de NO elegir 0
        if(opc > 0 && opc < 5){
            printf("\nDame el primer numero entero: ");
            scanf("%d", &a);
            printf("\nDame el segundo numero entero: ");
            scanf("%d", &b);
        }
        // Switch para imprimir el resultado esperado
        switch(opc){
            case 0:
                printf("\n\n\tSaliendo...");
                break;
            case 1:
                printf("\n\nResultado %d + %d = %d", a, b, suma(a,b));
                break;
            case 2:
                printf("\n\nResultado %d - %d = %d", a, b, resta(a,b));
                break;
            case 3:
                printf("\n\nResultado %d * %d = %d", a, b, mult(a,b));
                break;
            case 4:
                // Validacion si se intenta dividir entre 0
                if(b==0){
                    printf("\n\nNo se puede dividir entre 0.");
                }else{
                    printf("\n\nResultado %d / %d = %.2f", a, b, division(a,b));
                }
                break;
            default:
                printf("\n\n\t Opcion incorrecta, vuelve a elegir.");
                break;
        }
        printf("\n\n========================================\n\n");
    } while(opc != 0);
}

// Funcion de suma
// Recibe 2 enteros
// Retorna 1 entero
int suma(int a, int b){
    return a + b;
}

// Funcion de resta
// Recibe 2 enteros
// Retorna 1 entero
int resta(int a, int b){
    return a - b;
}

// Funcion de multiplicacion
// Recibe 2 enteros
// Retorna 1 entero
int mult(int a, int b){
    return a * b;
}

// Funcion de division
// Recibe 2 enteros
// Retorna 1 flotante
float division(int a, int b){
    return a / (b*1.0);
}
