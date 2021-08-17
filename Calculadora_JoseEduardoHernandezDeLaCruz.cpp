/*
    Universidad Autonoma Metropolitana - Azcapotzalco
    Descripcion: Programa en C++ que simula el comportamiento de una calculadora basica
    Autor: Hernandez de la Cruz Jose Eduardo
    Grupo 2
    Fecha: 14 de agosto del 2021
*/

#include<iostream>  // Biblioteca estandar stl de c++ utilizado para operaciones de entrada/salida
#include<string>    //Biblioteca utilizada para manipular cadenas

// Funcion que permite realizar las funciones de una calculadora
void Calculadora(std::string opc){
    int a, b;
    std::cout << "Escribe el primer numero: ";
    std::cin >> a;
    std::cout << "Escribe el segundo numero: ";
    std::cin >> b;
    if( opc == "1" ){                    ///Opcion para realizar un suma
        std::cout << "El resultado de la suma es " << a + b << "\n\n";
    }else if( opc == "2" ){                    ///Opcion para realizar un resta
        std::cout << "El resultado de la resta es " << a - b << "\n\n";
    }else if( opc == "3" ){                    ///Opcion para realizar un multiplicacion
        std::cout << "El resultado de la multiplicacion es " << a * b << "\n\n";
    }else if( opc == "4" ){                    ///Opcion para realizar un divicion
        std::cout << "El resultado de la divicion es " << b / a << "\n\n";
    }
}

int main(){
    std::string opc;
    std::cout << "********************Calculadora Sencilla********************\n";
    do{                    ///Menu de opciones 
        std::cout << "Que deceas realizar?\n";
        std::cout << "1. Suma\n";
        std::cout << "2. Resta\n";
        std::cout << "3. Multiplicacion\n";
        std::cout << "4. Divicion\n";
        std::cout << "5. Salir\n";
        std::cin >> opc;
        if( opc == "1" | opc == "2" | opc == "3" | opc == "4" ){ /// Filtrado para operaciones matematicas
            Calculadora(opc);
        }else if( opc == "5" ){  // Filtro para finalizar el programa
            std::cout << "Adios...\n";
        }else{                    ///Filtro para opciones no concideradas 
            std::cout <<  opc << " Esta opcion no esta considerada, vuelva a intentarlo\n";
        }
        std::cout << "**********************************************\n";
    }while( opc != "5" );
    // ^^^ ¿Porque se utiliza do while?
    //    Res: Para que el menu se despliegue al menos una vez y puedan ser seleccionas las opciones descritas 
}