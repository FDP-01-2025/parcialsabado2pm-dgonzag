#include <iostream>
using namespace std;

int main() {
    int numeros[10], pares = 0, impares = 0;

        for (int i=0; i < 10; i++) {
            cout << "Ingrese los numeros que desea: ";
            cin >> numeros[i]; 
            
            if (numeros[i] % 2 == 0){
                pares = pares + 1;
            }   else {
                impares = impares +1;
            }
        }

        cout << "Hay " << pares << " pares" << endl;
        cout << "Hay " << impares << " pares" << endl;

        return 0;
    }