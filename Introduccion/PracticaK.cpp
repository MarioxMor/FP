#include <iostream>
#include <cmath>

#define M_PI 3.14159265358979323846 

using namespace std;

// Funciones para calcular el área de las figuras
double areaCuadrado(double lado) {
    return lado * lado;
}

double areaRectangulo(double base, double altura) {
    return base * altura;
}

double areaCirculo(double radio) {
    return M_PI * radio * radio; // Usamos M_PI aquí
}

double areaTriangulo(double base, double altura) {
    return (base * altura) / 2;
}

double areaRombo(double diagonalMayor, double diagonalMenor) {
    return (diagonalMayor * diagonalMenor) / 2;
}

int main() {
    int opcion;
    double parametro1, parametro2;

    do {
        // Menú de opciones
        cout << "Elige una figura para calcular su area:\n";
        cout << "1. Cuadrado\n";
        cout << "2. Rectangulo\n";
        cout << "3. Circulo\n";
        cout << "4. Triangulo\n";
        cout << "5. Rombo\n";
        cout << "6. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1: // Cuadrado
            cout << "Ingresa el lado del cuadrado: ";
            cin >> parametro1;
            cout << "El area del cuadrado es: " << areaCuadrado(parametro1) << endl;
            break;

        case 2: // Rectangulo
            cout << "Ingresa la base del rectangulo: ";
            cin >> parametro1;
            cout << "Ingresa la altura del rectangulo: ";
            cin >> parametro2;
            cout << "El area del rectangulo es: " << areaRectangulo(parametro1, parametro2) << endl;
            break;

        case 3: // Circulo
            cout << "Ingresa el radio del circulo: ";
            cin >> parametro1;
            cout << "El area del circulo es: " << areaCirculo(parametro1) << endl;
            break;

        case 4: // Triangulo
            cout << "Ingresa la base del triangulo: ";
            cin >> parametro1;
            cout << "Ingresa la altura del triangulo: ";
            cin >> parametro2;
            cout << "El area del triangulo es: " << areaTriangulo(parametro1, parametro2) << endl;
            break;

        case 5: // Rombo
            cout << "Ingresa la diagonal mayor del rombo: ";
            cin >> parametro1;
            cout << "Ingresa la diagonal menor del rombo: ";
            cin >> parametro2;
            cout << "El area del rombo es: " << areaRombo(parametro1, parametro2) << endl;
            break;

        case 6: // Salir
            cout << "Saliendo del programa.\n";
            break;

        default:
            cout << "Opcion invalida, intenta de nuevo.\n";
        }
        cout << endl;
    } while (opcion != 6);

    return 0;
}
