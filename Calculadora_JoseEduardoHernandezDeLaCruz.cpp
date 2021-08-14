#include<iostream>

void Calculadora(int opc){
            int a, b;
            std::cout << "Escribe el primer numero: ";
            std::cin >> a;
            std::cout << "Escribe el segundo numero: ";
            std::cin >> b;
            switch(opc){
            case 1:
                std::cout << "El resultado de la suma es " << a+b << "\n\n";
            break;
            case 2:
                std::cout << "El resultado de la resta es " << a-b << "\n\n";
            break;
            case 3:
                std::cout << "El resultado de la multiplicacion es " << a*b << "\n\n";
            break;
            case 4:
                std::cout << "El resultado de la divicion es " << b/a << "\n\n";
            break;
        }
}

int main(){
    int opc;
    do{
        std::cout << "Que deceas realizar?\n 1. Suma\n 2. Resta\n 3. Multimplicacion\n 4. Divicion\n 5. Salir\n";
        std::cin >> opc;
        if( opc == 5 ){
            std::cout << "adios...";
        }else{
            Calculadora(opc);
        }
    }while( opc != 5 );
}