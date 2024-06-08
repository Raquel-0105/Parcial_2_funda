#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de notas: ";
    cin >> n;

    // Verificar que n sea positivo
    if (n <= 0) {
        cout << "La cantidad de notas debe ser mayor que 0." << endl;
        return 1;
    }

    vector<float> notas(n);
    float suma = 0.0;

    // Solicitar las notas al usuario y almacenarlas en el vector
    for (int i = 0; i < n; ++i) {
        cout << "Ingrese la nota " << i + 1 << ": ";
        cin >> notas[i];
        suma += notas[i];
    }

    // Calcular el promedio
    float promedio = suma / n;

    // Mostrar el promedio en pantalla
    cout << "El promedio de las notas es: " << promedio << endl;

    return 0;
}