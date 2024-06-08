#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Leer el numero entero
    int n;
    cout << "Ingrese un numero entero: ";
    cin >> n;

    // Convertir el numero a positivo si es negativo
    int original_n = n;
    if (n < 0) {
        n = -n;
    }

    // Separar los digitos y almacenarlos en un vector
    vector<int> digitos;
    while (n > 0) {
        int digito = n % 10;
        digitos.push_back(digito);
        n /= 10;
    }

    // En caso de que el numero ingresado sea 0
    if (digitos.empty()) {
        digitos.push_back(0);
    }

    // Indicar la cantidad de digitos
    cout << "El numero ingresado tiene " << digitos.size() << " digitos." << endl;

    // Desplegar los elementos del vector
    cout << "Los digitos del numero en orden invertido son: ";
    for (int digito : digitos) {
        cout << digito << " ";
    }
    cout << endl;

    return 0;
}


