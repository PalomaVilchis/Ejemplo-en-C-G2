/* Secuencias de LEDS con la raspberry pi
 * Elaborado por: Mejia Bazan Cesar Arturo 2182005565
 * 
 * Este programa realiza secuencias de encendido con leds
 * los pines elegidos se definen en la parte de leds, se pueden
 * cambiar dependiendo del circuito del que utilice este programa
 * 
 * Componente     Pin Raspberry Pi 3     Estados lógicos
 * led 0-------GPIO 5---------------------On=>HIGH, Off=>LOW
 * led 1-------GPIO 6---------------------On=>HIGH, Off=>LOW
 * led 2-------GPIO 13--------------------On=>HIGH, Off=>LOW
 * led 3-------GPIO 19--------------------On=>HIGH, Off=>LOW
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

float cincoseg, espacio; /*Variables para trabajar con el tiempo*/

/*Se declaran las funciones*/
void esperar();
void apagar();
void encender();
void ascendente();
void aditiva();
void aditiva_des();
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
	
	ascendente();
	apagar();
	esperar(); //Curita
	aditiva();
	apagar();
	aditiva_des();
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
	printf("Pasaron %.2f segundos\n", espacio/1000);
}
/*Funcion apagar, se apagan todos los leds*/
void apagar(){
	/*Se apagan los leds*/
	digitalWrite(led0, LOW);
	digitalWrite(led1, LOW);
	digitalWrite(led2, LOW);
	digitalWrite(led3, LOW);
}
void encender(){
	/*Se encienden todos los leds*/
	digitalWrite(led0, HIGH);
	digitalWrite(led1, HIGH);
	digitalWrite(led2, HIGH);
	digitalWrite(led3, HIGH);
}
/*Secuencia ascendente exclusiva*/
void ascendente(){
	printf("Secuencia ascendente\n");
	cincoseg = millis();
	while(millis() < cincoseg+tiempo){
		digitalWrite(led3, HIGH);
		printf("l3 %d\t", digitalRead(led3));
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
		esperar();
	}
}
/*Secuencia aditiva exclusiva*/
void aditiva(){
	printf("Secuencia aditiva\n");
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
	printf("Secuencia descendente\n");
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
		esperar();
	}
}
/*Secuencia descendente aditiva exclusiva*/
void aditiva_des(){
	printf("Secuencia descentende aditiva\n");
	cincoseg = millis();
	while(millis() < cincoseg+tiempo){
		encender();
		esperar();
		digitalWrite(led0, LOW);
		esperar();
		digitalWrite(led1, LOW);
		esperar();
		digitalWrite(led2, LOW);
		esperar();
		digitalWrite(led3, LOW);
		esperar();
	}
}
