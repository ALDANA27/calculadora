#include <iostream>
using namespace std;

int main() {
    int num1, num2, resultado,opcion;
    cout << "Bienvenido a mi calculadora elija una opcion: ";
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicacion" << endl;
    cout << "4. Division" << endl;
    cin >> opcion;
    switch(opcion) {
        case 1:
   resultado=num1+num2;
            cout << "la suma de los numeros es: " << resultado << endl;
            break;
    }   
    return 0;
}