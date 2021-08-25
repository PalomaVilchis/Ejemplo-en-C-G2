/*
 *Calculadora Basica
 *Autor: Diego Antonio Romero Palacios
 *Fecha: 11/08/2021
 *
 * Modificado por: Diego Antonio Romero Palacios
 * Fecha:15/08/2021
 * 
 *Es un programa que realiza las operaciones basicas apartir de dos numeros enteros dados
 *que son suma, resta, multiplicacion y division .
 *
 *
*/

//Bibliotecas
#include <stdio.h>

//Declaraciones
int a,b;
int suma(int a,int b);
int resta(int a,int b);
int multiplicacion(int a,int b);
int  division(int a, int b);
void menu();
void operacion(int opcion);

//Funcion Principal
int main(){
    int opcion;
    do{
     menu(); //muestra el menu
     scanf("%d",&opcion); 
     if(opcion==5){  
        printf("\nSaliendo\n");	
     }else if(opcion>=1 && opcion<=4){
	    operacion(opcion);
	 }else{
         printf("\nERROR\nOpcion invalida\n");
     }
    }while(opcion != 5);
    return 0;
}
//Funciones

//funcion para sumar dos numeros
int suma(int a,int b){
return a+b;
}
//funcion para restar dos numeros
int resta(int a,int b){
return a-b;
}
//funcion para multiplicar dos numeros
int multiplicacion(int a,int b){
    return a*b;
}
//funcion para dividir dos numeros
int division(int a, int b){
    return a/b;
}
//funcion para imprimir el menu
void menu(){
    printf("\tCalculadora Basica\n");
    printf("1.Suma\n");
    printf("2.Resta\n");
    printf("3.Multiplicación\n");
    printf("4.Division\n");
    printf("5.Salir\n");
    printf("Opcion: ");
}
//funcion para el resultado final
void operacion(int opcion){
    printf("Numero a: ");
     scanf("%d",&a);
     printf("\nNumero b: ");
     scanf("%d",&b);
    switch(opcion){
    case 1: printf("La suma de %d y %d es: %d\n",a,b,suma(a,b));
        break;
    case 2: printf("La resta de %d y %d es: %d\n",a,b,resta(a,b));
        break;
    case 3: printf("La multiplicacion de %d y %d es: %d\n",a,b,multiplicacion(a,b));
        break;
    case 4: printf("La divison de %d y %d es: %d\n",a,b,division(a,b));
    }

}