/*
    Programa calculadora básica
    Creado por: Darío Peñaloza
    Fecha creación: 10 de Agosto 2021

    Modificado por: Darío Peñaloza
    Fecha modificación: 14 de Agosto 2021

    Calculadora que recibe dos valores y pueden tener las operaciones
    de suma, resta, multiplicación y división.

    V2 agrega la función para salir del programa y restringe las 
    opciones permitidas que se ingresan.
*/

#include "stdio.h"

double suma(double a, double b){    //Función operación de suma
    double total;

    total=a+b;

    return total;
}

double resta(double a, double b){   //Función operación de resta
    double total;

    total=a-b;

    return total;
}

double multi(double a, double b){   //Función operación de multiplicación
    double total;

    total=a*b;

    return total;
}

double div(double a, double b){     //Función operación de división
    double total;
    
    total=a/b;

    return total;
}

int main(){

    //Declaración de variables para el programa
    double num1, num2, total=0;
    int opcion;
    char pregunta;

    do{     //Inicio de ciclo do while para poder repetir operaciones
        printf("---Calculadora básica de 2 números----\n");
        printf("0.-Salir\n");
        printf("1.-Suma\n");
        printf("2.-Resta\n");
        printf("3.-Multiplicación\n");
        printf("4.-División\n");
        printf("Ingrese el valor correspondiente a la operación: ");
        scanf("%d", &opcion);   //Captura de la operación a realizar
        printf("\n");

        if(opcion==0 || opcion==1 || opcion==2 || opcion==3 || opcion==4) {  //Si no es una operación válida volverá a empezar
            if(opcion==0) break;
            
            //Captura de los valores
            printf("Ingrese el primer valor: ");
            scanf("%lf", &num1);    
            printf("\n");
            printf("Ingrese el segundo valor: ");
            scanf("%lf", &num2);    
            printf("\n");

            //Con los valores ingresados se realiza la operación seleccionada
            if(opcion==1) total=suma(num1, num2);   //Llama a función suma
            if(opcion==2) total=resta(num1, num2);  //Llama a función resta
            if(opcion==3) total=multi(num1, num2);  //Llama a función multiplicación
            if(opcion==4) total=div(num1, num2);    //Llama a función división
        
            printf("El resultado es: %.2lf\n", total);    //Muestra del resultado de la operación //.2LF PARA QUE IMPRIMA CON DOS CIFRAS SIGNNIFICATIVAS
            total=0;    //Regresa el valor a 0 para realizar nuevas operaciones

            printf("¿Quiere hacer otra operación? ('y' para si, cualquier otra cosa no): ");
            scanf("%s", &pregunta); //Pregunta si quiere hacer otra operación
            printf("\n\n");
        }
        else{
            printf("Opción no valida.\n\n");
            pregunta='y';
        }
    }while(pregunta=='y');  //Empieza de nuevo el programa si se captura un 'y'

    return 0;
}