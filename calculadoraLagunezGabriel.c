/*    CALCULADORA BASICA
 *
 * Echo por: Lagunez Medina Gabriel Ulises
 * Fecha: 11 - Agosto - 2021.
 *
 * Versión:  1.0
 * Descripción: 
 *  Este programa usa operadores aritméticos 
 *  y los aplica a dos números que son pedidos al usuario (solo opera con dos números)
 *  el programa termina si se elige salir en el menú de inicio.
 * 
 * Mecánica de funcionamiento:
 *  Al ejecutar el programa se despliega un ménu para elegir la operación que se quiere realizar.
 *  Una vez que se elige la operación se le pide al usuario ingresar dos números para poder 
 *  hacer la operación, sí son correctas las entradas el resultado se muestra en la consola y nuevamente
 *  se muestra el menú.
*/

/*BIBLIOTECAS*/

#include <stdio.h>  

/*DECLARACION DE FUNCIONES*/
//FUNCION QUE MUESTRA MENU EN TERMINAL
int menu(){
 int opcion;
 printf("\nElige una opcion.\n");   //MENSAJES A TERMINAL
 printf("\n1.-SUMAR.\n");
 printf("\n2.-RESTAR.\n");
 printf("\n3.-MULTIPLICAR.\n");
 printf("\n4.-DIVIDIR.\n");
 printf("\n5.-SALIR.\n");
 scanf("%i", &opcion);    //SE GUARDA LA OPCION QUE ELIGE EL USUARIO.
 return opcion;    

}

float pideDato(int num){        // FUNCION PARA GUARDAR LOS DATOS NUMERICOS PARA OPERAR 
    float dato;
    printf("\nIngresa el dato %i: ", num);
    scanf("%f", &dato);
    return dato;
}
/*FUNCION PRINCIPAL*/
int main()
{
    //DECLARACION DE VARIABLES
    int i, opc;
    float numeros[2];                 //ARREGLO PARA GUARDAR LOS NUMEROS QUE INGRESA EL USUARIO

 //INICIO DE BUCLE
    do{                              
        opc = menu();                //LLAMA A FUNCION MENU  Y GUARDA EL RETORNO EN OPC.
        if (opc > 5 || opc < 1){     //VERIFICA QUE LA SELECCION DEL MENU  SEA CORRECTA.
            printf("\nEliga una opcion valida.\n");
        }
        else{                  //SE EJECUTA SI LA SELECCION DEL MENU ES CORRECTA.
            switch(opc){       
            case 1:
                for(i = 0; i < 2; i++){      //CICLO PARA PEDIR DATOS AL USUARIO.
                    numeros[i] = pideDato(i+1);  //SE LLAMA 2 VECES A FUNCION PIDE DATOS Y
                                                //GUARDA DATOS EN ARREGLO NUMEROS.
                }
                printf("\nLa suma de %.3f + %.3f = %.4f\n", numeros[0], numeros[1], numeros[0] + numeros[1]);
            break;
            case 2:
                for(i = 0; i < 2; i++){
                    numeros[i] = pideDato(i+1);
                }
                printf("\nLa resta de %.3f - %.3f = %.4f\n", numeros[0], numeros[1], numeros[0] - numeros[1]);
            break;
            case 3:
                for(i = 0; i < 2; i++){
                    numeros[i] = pideDato(i+1);
                }
                printf("\nEl producto de %.3f * %.3f = %.4f\n", numeros[0], numeros[1], numeros[0] * numeros[1]);
            break;
            case 4:
                for(i = 0; i < 2; i++){
                    numeros[i] = pideDato(i+1);
                }
                if(numeros[1] == 0){           //VARIFICA QUE SE PUEDA REALIZAR LA OPERACION DIVIDIR.
                    printf("\n\nERROR:Imposible dividir entre cero.\n");
                }
                else{
                    printf("\nLa division de %.3f / %.3f = %.4f\n", numeros[0], numeros[1], numeros[0] / numeros[1]);
                }
            break;
            }
        }

    }while(opc != 5);     //SI OPC ES DISTINTO DE 5 VUELVE A DO.
    return 0;
}