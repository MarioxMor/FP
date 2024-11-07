#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <conio.h>  // Para use _kbhit() y _getch() (detectar la tecla Escape)

using namespace std;

void ejercicio1_21() {
    string respuesta;

    do {
        cout << "¿Quieres salir del ciclo? [SI/NO]: ";
        cin >> respuesta;

        if (respuesta == "SI") {
            cout << "Saliendo del ciclo..." << endl;
            break;
        }
        else if (respuesta == "NO") {
            cout << "Volviendo a preguntar..." << endl;
        }
        else {
            cout << "Respuesta no válida. Por favor, responde 'SI' o 'NO'." << endl;
        }

    } while (respuesta != "SI");
}

void ejercicio1_22() {
    int numero1, numero2, total;
    char operacion;

    do {
        
        cout << "Seleccione una operación:\n";
        cout << "(+) Suma\n";
        cout << "(-) Resta\n";
        cout << "(*) Multiplicación\n";
        cout << "(/) División\n";
        cout << "(%) Residuo\n";
        cout << "(s) Salir\n";
        cout << "Ingrese su opción: ";
        cin >> operacion;

        
        if (operacion != 's') {
            cout << "Ingrese el primer número: ";
            cin >> numero1;
            cout << "Ingrese el segundo número: ";
            cin >> numero2;

           
            switch (operacion) {
            case '+':
                total = numero1 + numero2;
                cout << "Resultado: " << total << endl;
                break;
            case '-':
                total = numero1 - numero2;
                cout << "Resultado: " << total << endl;
                break;
            case '*':
                total = numero1 * numero2;
                cout << "Resultado: " << total << endl;
                break;
            case '/':
                if (numero2 != 0) {
                    total = numero1 / numero2;
                    cout << "Resultado: " << total << endl;
                }
                else {
                    cout << "Error: División por cero." << endl;
                }
                break;
            case '%':
                if (numero2 != 0) {
                    total = numero1 % numero2;
                    cout << "Resultado: " << total << endl;
                }
                else {
                    cout << "Error: División por cero." << endl;
                }
                break;
            default:
                cout << "Opción no válida." << endl;
            }

            numero1 = 0;
            numero2 = 0;
            total = 0;
        }

    } while (operacion != 's');

    cout << "Gracias por usar el programa." << endl;
}

void ejercicio1_23() {
    string tarjeta;
    int pin;
    float saldo = 3450.00;
    float retiro;

    cout << "Ingrese el número de tarjeta: ";
    cin >> tarjeta;

    if (tarjeta != "123456789") {
        cout << "Tarjeta inválida. Terminando el proceso." << endl;
        return;
    }

    
    do {
        cout << "Ingrese el PIN de 4 dígitos: ";
        cin >> pin;

        if (pin != 1234) {
            cout << "PIN incorrecto. Intente de nuevo." << endl;
        }
    } while (pin != 1234);

    // Menú de opciones
    char opcion;
    do {
        cout << "\nOpciones disponibles:\n";
        cout << "1. Retiro\n";
        cout << "2. Consulta de saldo\n";
        cout << "3. Salir\n";
        cout << "Ingrese una opción: ";
        cin >> opcion;

        switch (opcion) {
        case '1': // Retiro
            cout << "Ingrese la cantidad a retirar: ";
            cin >> retiro;

            if (retiro > saldo) {
                cout << "Fondos insuficientes." << endl;
            }
            else {
                saldo -= retiro;
                cout << "Retiro exitoso. Saldo remanente: $" << saldo << endl;
            }
            break;

        case '2': // Consulta de saldo
            cout << "Saldo actual: $" << saldo << endl;
            break;

        case '3': // Salir
            cout << "Saliendo del cajero..." << endl;
            break;

        default:
            cout << "Opción no válida." << endl;
        }

    } while (opcion != '3');
}

void ejercicio1_24() {
    int tiempo = 12;  
    int distancia = 100; 
    string direccion = "adelante"; 
    bool jugando = true;

    srand(time(0));  

    while (jugando) {
      
        if (_kbhit() && _getch() == 27) {  
            cout << "Juego terminado por el jugador." << endl;
            break;
        }

        
        cout << "Tiempo restante: " << tiempo << " | Distancia: " << distancia << endl;
        cout << "Dirección: " << direccion << endl;

        
        if (tiempo <= 0 || distancia <= 0) {
            cout << "El tiempo o la distancia se ha agotado. ¡Juego terminado!" << endl;
            break;
        }

        
        distancia--;

        
        bool obstaculo = rand() % 2;  // 0 para Falso, 1 para Verdadero
        if (obstaculo) {
            cout << "¡Has encontrado un obstáculo! Castigo activado." << endl;
            tiempo -= 3;  // Castigo, resta 3 unidades de tiempo
        }
        else {
            cout << "No hay obstáculo, solo avanzas." << endl;
            tiempo -= 1;  // No hay castigo, solo avanza el tiempo
        }

        // Generar un premio aleatorio (True = premio, False = nada)
        bool premio = rand() % 2;  // 0 para Falso, 1 para Verdadero
        if (premio) {
            cout << "¡Has encontrado un premio! Tiempo extra activado." << endl;
            tiempo += 3;  // Premio, suma 3 unidades de tiempo
        }
        else {
            cout << "No hay premio, solo avanzas." << endl;
            tiempo += 1;  // No hay premio, solo pasa el tiempo
        }

       
    }
}

int main() {
    int opcion;

    do {
        // Menú de opciones
        cout << "Selecciona el ejercicio a ejecutar:" << endl;
        cout << "1. Ejercicio 1.21 - Salir del ciclo" << endl;
        cout << "2. Ejercicio 1.22 - Operaciones aritméticas" << endl;
        cout << "3. Ejercicio 1.23 - Cajero automático" << endl;
        cout << "4. Ejercicio 1.24 - Simulación Temple Run" << endl;
        cout << "5. Salir" << endl;
        cout << "Opción: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            ejercicio1_21();
            break;
        case 2:
            ejercicio1_22();
            break;
        case 3:
            ejercicio1_23();
            break;
        case 4:
            ejercicio1_24();
            break;
        case 5:
            cout << "Gracias por usar el programa." << endl;
            break;
        default:
            cout << "Opción no válida." << endl;
        }

    } while (opcion != 5);

    return 0;
}
 
