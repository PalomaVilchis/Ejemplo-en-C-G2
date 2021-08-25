/* Secuencias de LEDS con la raspberry pi
 * Elaborado por: Mejia Bazan Cesar Arturo 2182005565
 * 
 * Este programa realiza secuencias de encendido con leds
 * los pines elegidos se definen en la parte de leds, se pueden
 * cambiar dependiendo del circuito del que utilice este programa
 * 
 * Componente     Pin Raspberry Pi 3     Estados lógicos
 * led 1-------GPIO 4---------------------On=>HIGH, Off=>LOW
 * led 2-------GPIO 2---------------------On=>HIGH, Off=>LOW
 * led 3-------GPIO 14--------------------On=>HIGH, Off=>LOW
 * led 4-------GPIO 15--------------------On=>HIGH, Off=>LOW
 */

/*Se incluyen las librerias*/
#include <wiringPi.h>
#include <stdio.h>
/*Se definen las variables de tiempo*/
#define tiempo 5000 /*El tiempo que durara cada secuencia*/
#define entre 200 /*El tiempo entre el encendido de cada led*/
/*Declaración de LEDS*/
#define led0 21
#define led1 22
#define led2 23
#define led3 24

unsigned long cincoseg, espacio; /*Variables para trabajar con el tiempo*/

/*Se declaran las funciones*/
void esperar();
void apagar();
void ascendente();
void aditiva();
void descendente();
int main(void)
{
	/*Inicio del wiringPi*/
	wiringPiSetup();	
	/*Se ponen los pines de los leds en modo output*/
	pinMode(led0,OUTPUT);
	pinMode(led1,OUTPUT);
	pinMode(led2,OUTPUT);
	pinMode(led3,OUTPUT);
	
	apagar();
	ascendente();
	apagar();
	aditiva();
	apagar();
	descendente();
	apagar();
	return 0;
}

/*Funcion esperar, mantiene ocupado el procesador dependiendo de la
 * definición de "entre"
 */
void esperar(){
	espacio = millis();
	while(millis() < espacio+entre);
}
/*Funcion apagar, se apagan todos los leds*/
void apagar(){
	/*Se apagan los leds*/
	digitalWrite(led0, LOW);
	digitalWrite(led1, LOW);
	digitalWrite(led2, LOW);
	digitalWrite(led3, LOW);
}
/*Secuencia ascendente exclusiva*/
void ascendente(){
	cincoseg = millis();
	while(millis() < cincoseg+tiempo){
		digitalWrite(led3, HIGH);
		esperar();
		digitalWrite(led3, LOW);
		digitalWrite(led2, HIGH);
		esperar();
		digitalWrite(led2, LOW);
		digitalWrite(led1, HIGH);
		esperar();
		digitalWrite(led1, LOW);
		digitalWrite(led0, HIGH);
		esperar();
		digitalWrite(led0, LOW);
	}
}
/*Secuencia aditiva exclusiva*/
void aditiva(){
	cincoseg = millis();
	while(millis() < cincoseg+tiempo){
		digitalWrite(led3, HIGH);
		esperar();
		digitalWrite(led2, HIGH);
		esperar();
		digitalWrite(led1, HIGH);
		esperar();
		digitalWrite(led0, HIGH);
		esperar();
		apagar();
		esperar();
	}
}
void descendente(){
	/*Secuencia descendente exclusiva*/
	cincoseg = millis();
	while(millis() < cincoseg+tiempo){
		digitalWrite(led0, HIGH);
		esperar();
		digitalWrite(led0, LOW);
		digitalWrite(led1, HIGH);
		esperar();
		digitalWrite(led1, LOW);
		digitalWrite(led2, HIGH);
		esperar();
		digitalWrite(led2, LOW);
		digitalWrite(led3, HIGH);
		esperar();
		digitalWrite(led3, LOW);
	}
}
