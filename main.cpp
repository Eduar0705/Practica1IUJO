#include <iostream>
#include <cmath>

using namespace std;

long long factorial(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

double promedioGeneral(int n, double arr[]) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum / n;
}

double valorAbsoluto(double num) {
    return abs(num);
}

int main() {
    int opcion;
    bool continuar = true;

    while (continuar) {
        cout << "Seleccione una opcion:" << endl;
        cout << "1. Calcular factorial" << endl;
        cout << "2. Calcular promedio" << endl;
        cout << "3. Calcular valor absoluto" << endl;
        cout << "4. Salir" << endl;
        cout << "Ingrese su opcion (1, 2, 3 o 4): ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                int num;
                cout << "Ingrese un numero: ";
                cin >> num;
                if (num < 0) {
                    cout << "El factorial no está definido para numeros negativos." << endl;
                } else {
                    cout << "El factorial de " << num << " es: " << factorial(num) << endl;
                }
                break;
            }
            case 2: {
                int n;
                cout << "Ingrese la cantidad de elementos: ";
                cin >> n;
                double arr[n];
                cout << "Ingrese los valores de los elementos:" << endl;
                for (int i = 0; i < n; i++) {
                    cout << "Producto " << i + 1 << ": ";
                    cin >> arr[i];
                }
                cout << "El promedio general es: " << promedioGeneral(n, arr) << endl;
                break;
            }
            case 3: {
                double num;
                cout << "Ingrese un numero: ";
                cin >> num;
                cout << "El valor absoluto de " << num << " es: " << valorAbsoluto(num) << endl;
                break;
            }
            case 4:
                continuar = false;
                break;
            default:
                cout << "Opción invalida." << endl;
        }

        cout << "¿Desea realizar otra operacion? (s/n): ";
        char respuesta;
        cin >> respuesta;
        if (respuesta == 'n' || respuesta == 'N') {
            continuar = false;
        }
    }

    return 0;
}