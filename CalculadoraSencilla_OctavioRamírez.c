//PENDIENTE DE DOCUMENTAR

//Inclusión de bibliotecas.
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


//Función para manejar la selección de opciones del menú de la Calculadora simple.
bool seleccionarOpcion(){

    //Variable de control para identificar cuando el usuario quiera dejar de usar la Calculadora.
    bool continuar = false;
    //Variable para almacenar el valor de la opción seleccionada por el usuario.
    int entrada;
    scanf("%d", &entrada);
    //Variables para almacenar los valores utilizados en la operación seleccionada por el usuario.
    float primer, segundo; 
    //Variable para almacenar la respuesta del usuario sobre si desea continuar utilizando la Calculadora.
    char respuesta;

    //Switch-case para las opciones del menú de la Calculadora simple.
    switch(entrada){
        //Suma
        case 1:
            printf("\nProporcione el primer número que se va a sumar: ");
            scanf("%f", &primer);

            printf("Proporcione el segundo número que se va a sumar: ");
            scanf("%f", &segundo);

            printf("\nLa suma de los valores proporcionados es: %f\n", primer+segundo);

            printf("\n¿Desea continuar utilizando la calculadora? (S/N): ");
            
            scanf("%s", &respuesta);
            
            if(respuesta == 's' || respuesta == 'S'){
                continuar = true;
            }else{
                printf("\nGracias por utilizar ORR-CALC, hasta pronto.\n\n\n");
            }
            
        break;
        //Resta
        case 2:
            printf("\nProporcione el número del cual se va a restar: ");
            scanf("%f", &primer);
            
            printf("Proporcione el número que se va a restar: ");
            scanf("%f", &segundo);

            printf("\nLa resta de los valores proporcionados es: %f\n", primer-segundo);
            
            printf("\n¿Desea continuar utilizando la calculadora? (S/N): ");
            
            scanf("%s", &respuesta);
            if(respuesta == 's' || respuesta == 'S'){
                continuar = true;
            }else{
                printf("\nGracias por utilizar ORR-CALC, hasta pronto.\n\n\n");
            }

        break;
        //Multiplicación
        case 3:
            printf("\nProporcione el primer número a multiplicar: ");
            scanf("%f", &primer);

            printf("Proporcione el segundo número a multiplicar: ");
            scanf("%f", &segundo);
            
            printf("El producto de los valores proporcionados es: %f\n", primer*segundo);

            printf("\n¿Desea continuar utilizando la calculadora? (S/N): ");
            
            scanf("%s", &respuesta);
            if(respuesta == 's' || respuesta == 'S'){
                continuar = true;
            }else{
                printf("\nGracias por utilizar ORR-CALC, hasta pronto.\n\n\n");
            }

        break;
        //División
        case 4:
            printf("\nProporcione el número que desea dividir: ");
            scanf("%f", &primer);

            printf("Proporcione el número entre el cual se dividirá: ");
            scanf("%f", &segundo);
            
            printf("\nLa división de los valores proporcionados es: %f\n", primer/segundo);

            printf("\n¿Desea continuar utilizando la calculadora? (S/N): ");
            
            scanf("%s", &respuesta);
            if(respuesta == 's' || respuesta == 'S'){
                continuar = true;
            }else{
                printf("\nGracias por utilizar ORR-CALC, hasta pronto.\n\n\n");
            }

        break;
        //Salir
        case 5:
            printf("\nGracias por utilizar ORR-CALC, hasta pronto.\n\n\n");
        
        break;
        //Opciones no aceptadas
        default:
            printf("\nEl valor seleccionado no corresponde a ninguna de las opciones disponibles.\n");
            printf("Inténtelo nuevamente.\n\n");

        break;
    }
    return continuar;
}

//Función para impresión del menú de opciones de la Calculadora simple.
void imprimirMenu(){
    do{
        printf("\nCalculadora simple.\n");
        printf("1. Sumar.\n");
        printf("2. Restar.\n");
        printf("3. Multiplicar.\n");
        printf("4. Dividir.\n");
        printf("5. Salir.\n");
        printf("\nSeleccione el número con la operación que desea realizar: ");
    }while(seleccionarOpcion()==true);
}

//Método main para ejecución del programa.
int main(){
    imprimirMenu();
    return 0;
}
