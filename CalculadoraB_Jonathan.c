/*
Título: Calculadora básica
Autor: Jonathan Sánchez de Jesús
Fecha: 13/ago/21
Versión: 1.0

Descripción:
Este programa realiza las funciones básicas de una calculadora suma, resta, multiplicación y división de 2 números.

Funcionamiento:
Se muestra un menú para elegir una de las opciones
s: Suma             Sumar 2 números
r : Resta           Restar 2 números
m : Multiplicación  Multiplica …
d : División        Divide …
l : Limpiar         Elimina las operaciones anteriores
f : Finalizar       Salir del programa
al seleccionar s, r, m, d se le pedirá ingresar 2 números separados por un espacio, ejemplo:
Suma : 7 9
al presionar ENTER se mostrará el resultado de la operación
Resultado : 16
Puede seguir realizando otras operaciones o simplemente salir con opción f.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Lee los operandos
void leer(double *a, double *b, char op[]){
  printf("%s : ", op);
  scanf("%lf %lf", a, b);
}

// Imprime el resultado
void imprimir(double r){
  double t;
  if (modf(r, &t) > 0){ // Con decimales
    printf("Resultado: %lf", r);
  }else { // No decimales
    printf("Resultado: %.0lf", r);
  }
}

// Función principal
int main() {
  // Variables
  double num1, num2; // Contendor de los operandos número1 y número2
  char opcion = '\0';
  char menu[] = "Calculadora básica, opciones:\ns : Suma\nr : Resta\nm : Multiplicación\nd : División\nl : Limpiar\nf : Finalizar\n\nEjemplo:\n> Opción : s\nSuma : 5 7\nResultado : 12";
  do{
    // Imprime el menú al inicio del programa o al eliminar las operaciones anteriores
    if (opcion == '\0' || opcion == 'l'){
      printf("%s", menu);
    }
    printf("\n\n> Opción : ");
    scanf("%s", &opcion);
    // Procesamiento de la opción elegida
    switch (opcion){
      case 's': // Suma
        leer(&num1, &num2, "Suma");
        imprimir(num1+num2);
        break;
      case 'r': // Resta
        leer(&num1, &num2, "Resta");
        imprimir(num1-num2);
        break;
      case 'm': // Multiplicación
        leer(&num1, &num2, "Multiplicación");
        imprimir(num1*num2);
        break;
      case 'd': // División
        leer(&num1, &num2, "División");
        imprimir(num1/num2);
        break;
      case 'l': // Eliminar operaciones anteriores
        system("clear");
        break;
      case 'f': // Salir del programa
        printf("Buen día (^.^)=b\n");
        break;
      default: // Opción no válida
        printf("La opción no es válida");
    }
  }while (opcion != 'f');
  return 0;
}
