#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Definimos los arreglos de ejemplo
    vector<int> a = {10, 14, 13, 25, 81};
    vector<int> b = {73, 24, 48, 11, 21};
    vector<int> c;

    // Verificamos que ambos arreglos tengan la misma cantidad de elementos
    if (a.size() != b.size()) {
        cerr << "Los arreglos no tienen la misma cantidad de elementos." << endl;
        return 1;
    }

    // Recorremos los arreglos y aplicamos las reglas
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] % 2 == 0 && b[i] % 2 == 0) {
            c.push_back(10);
        } else if (a[i] % 2 != 0 && b[i] % 2 != 0) {
            c.push_back(20);
        } else {
            c.push_back(0);
        }
    }

    // Desplegamos el contenido del tercer arreglo
    cout << "Arreglo resultante c: ";
    for (int value : c) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}