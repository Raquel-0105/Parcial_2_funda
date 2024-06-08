#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const float MILANESA_PRECIO = 1.75;
    const float ENSALADA_PRECIO = 2.25;
    const float CASAMIENTO_PRECIO = 0.50;
    const float REFRESCO_TAMARINDO_PRECIO = 0.75;
    const float JUGO_NARANJA_PRECIO = 1.00;

    int milanesa_count = 0, ensalada_count = 0, casamiento_count = 0, refresco_tamarindo_count = 0, jugo_naranja_count = 0;
    int opcion;
    bool salir = false;

     while (!salir) {
        cout << "Menu:\n";
        cout << "1. Milanesa de Pollo ($1.75)\n";
        cout << "2. Ensalada César ($2.25)\n";
        cout << "3. Casamiento ($0.50)\n";
        cout << "4. Refresco de Tamarindo ($0.75)\n";
        cout << "5. Jugo de Naranja ($1.00)\n";
        cout << "6. Mostrar Total\n";
        cout << "7. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;
    }
      switch (opcion){
            case 1:
                cout << "¿Cuántas órdenes de Milanesa de Pollo desea? ";
                cin >> milanesa_count;
                break;

         
        }
            

}
    