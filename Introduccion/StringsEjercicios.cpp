// enteros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <limits>
#include <iomanip>
#include <locale>
#include <sstream>
#include <algorithm>
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
	cout << "Hola " << nombre << "!" << endl;


	//EJERCICIO NUMERO  4 //

		// Introducir una lina de texto completa// 

	cin.ignore(); //ignora la instruccion cin PREVIOS// 
	string NombreCompleto;
	cout << "Introduce tu nombre completo: ";
	getline(cin, NombreCompleto); //obtiene una linea de texto //
	cout << "Tu Nombre completo: " << NombreCompleto << endl;




	// De que tamaño es un string// 
	cout << "La longitud del texto es: " << NombreCompleto.length() << endl;

	// cuando hay un "." significa operador de acceso y cuando haya "[]" significa Operador de indice//

	// Ejercicio 6

	// Acceder a un caracter especifico
	cout << "El primer caracater de nombre completo es: " << NombreCompleto[0] << endl;


	//Ejecicio 7// 
	//cambiar un caracter especifico en un texto ( string)// 



	string cambio = "Buenas";
	cambio[0] = 'b';
	cout << cambio << endl;

	// Ejercicio 8
	// Convertir un string a mayúsculas

	string textominusculas = "texto a convertir";
	transform(textominusculas.begin(), textominusculas.end(), textominusculas.begin(), ::toupper);
	cout << "Texto en mayúsculas: " << textominusculas << endl;

	// Ejercicio 9
	// Convertir un texto a minúsculas

	string textoMayusculas = "TEXTO A CONVERTIR";
	transform(textoMayusculas.begin(), textoMayusculas.end(), textoMayusculas.begin(), ::tolower);
	cout << "Texto en minúsculas: " << textoMayusculas << endl;

	//Ejercicio 10// 
	//Insertar texto  de otro texto

	string  textoPrincipal = "Mario";
	textoPrincipal.insert(6, "Alejandro");
	cout << textoPrincipal << endl;

	// EJERCICIO 11// 

	// Revertir texto
	string textoRevertir = "Hola Mundo!";
	reverse(textoRevertir.begin(), textoRevertir.end());
	cout << textoRevertir << endl;

	// Ejercicio 12 // 
	// Convertir numero a tring// 

	int nl = 123;
	string numeroATexto = to_string(nl);
	cout << "NUmero como string" << numeroATexto << endl;


	// Ejercicio 13// 
			// String a numero// 
	string textoANumero = "123";
	int n2 = stoi(textoANumero);
	cout << "String como numero" << n2 << endl;

	return 0;
}

