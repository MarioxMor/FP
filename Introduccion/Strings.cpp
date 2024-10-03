// enteros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <limits>
#include <iomanip>
#include <locale>
using namespace std;

int main() {
    // Manejo de punto decimal y separador de miles
    locale loc("");
    cout.imbue(loc);
   
    // Declacion e imprasion de String // 
    string  Texto0 = "Hola Mundo!!";
    cout << Texto0 << endl; 


    // Unir Dos textos en uno// 
    string primertexto = "Hola ";
    string segundotexto = "Mundo!";
    string textounido = primertexto + segundotexto;
    cout << textounido << endl; 


// Introducir un valor en una variable(string)//

    string nombre; 
    cout << "Introduce tu nombre: "; 
        cin >> nombre;
    cout << "Hola" << nombre << "!" << endl; 







    return 0;
}
