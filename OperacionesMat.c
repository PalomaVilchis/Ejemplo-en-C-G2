/*author: Luis López
*/
//librerias
#include <stdio.h>

int main () {
    char desicion='s';/*caracter que almacena desicion de continuar en el programa */
    double numero1;//variable de primer numero
    double numero2;//variable segundo numero
    double resultado=0;//variable que almacena el resultado inicializado en 0
    char ope; //variable que realiza una operacion segun lo introducido por el usuario
    while(desicion=='s'){ //loop mientras desicion sea distinto de s
        printf("\t\n PROGRAMA PARA REALIZAR OPERACIONES BASICAS\n"); 
        printf("Escriba algun simbolo +,-,*,/ para suma,resta,multiplicacion,division, respectivamente: ");  
        scanf("%c", &ope); //se lee la operacion a realizar
        printf("\nLa operacion seleccionada es: %c \n", ope); 
        printf("Introduzca el primer numero: ");
        scanf("%lf",&numero1);//lectura del primer numero
        printf("Introduzca el segundo numero: ");
        scanf("%lf",&numero2);//lectura del segundo numero

        //if anidados segun operacion seleccionada, si no fue algo valido se informa
        if(ope=='+'){
            resultado=numero1+numero2;//suma
        }else if(ope=='-'){//resta
            resultado=numero1-numero2;
        }else if(ope=='*'){//multiplicacion
            resultado=numero1*numero2;
        }else if(ope=='/'){//division
            if(numero2==0){//caso division no valida, divisor=0
                printf("Division por cero invalida\n");
            }else{
                resultado=numero1/numero2;
            }
        }else{//operacion no valida
            printf("Operacion introducida no valida\n");
        }
        printf("El resultado es: %lf \n",resultado);//se informa el resultado, si no se introdujo algo valido, por default es cero
        printf("Escriba s si desea realizar otra operacion: "); //se pregunta si se desea seguir usando el programa
        scanf("%s",&desicion);//lectura de varibale desicion
    }
    
    return 0;
}
