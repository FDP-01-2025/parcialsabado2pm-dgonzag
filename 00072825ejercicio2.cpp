#include <iostream>
using namespace std;

int main() {
    int numero, secuencia = -1;

    cout << "Ingresa un numero entero: ";
    cin >> numero;

    cout << "Los numeros de la secuencia son:";
    do {
        secuencia = secuencia + 2;
        cout << " ";
        cout << secuencia;

    } while (secuencia != numero && secuencia != (numero -1));
    return 0;
}