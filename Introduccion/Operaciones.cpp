// ConsoleApplication2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <limits>
#include <iomanip>
#include <locale>
#include <sstream>
#include <algorithm>
using namespace std;

int main()
{
	// Operaciones Aritméticas

	// Enteros
	int n1 = 10;
	int n2 = 20;
	int n3;

	//Flotantes
	float f1 = 15.5;
	float f2 = 5.2;
	float f3;

	// 1.Adición
	n3 = n1 + n2;
	cout << "Resultado suma enteros" << n3 << endl;
	f3 = f1 + f2;
	cout << " Resultado suma flotantes" << f3 << endl;

	// 2. Sustraccion
	n3 = n1 - n2;
	cout << "Resultado resta enteros" << n3 << endl;
	f3 = f1 - f2;
	cout << "Resultado resta floats" << f3 << endl;

	// 3. Multiplicacion
	n3 = n1 * n2;
	cout << "Resultado multiplicacion enteros" << n3 << endl;
	f3 = f1 * f2;
	cout << "Resultado multiplicacion floats " << f3 << endl;

	// 4. Division 
	n3 = n2 / n1;
	cout << "Resultado division enteros" << n3 << endl;
	f3 = f2 / f1;
	cout << "Resultado	division floats" << f3 << endl;

	// 5. Modulo (Residuo de la division
	n3 = n2 % n1;
	cout << "Resultado residuo de division enteros" << n3 << endl;

	// 6. Operaciones mixtas 
	f3 = n1 + f1;
	cout << "Resultado opreaciones mixtas " << f3 << endl;
	f3 = n2 - f2;
	cout << "Resultado opreaciones mixtas " << f3 << endl;
	f3 = n2 * f1;
	cout << "Resultado opreaciones mixtas " << f3 << endl;
	f3 = f2 / n1;
	cout << "Resultado opreaciones mixtas " << f3 << endl;
	f3 = (n1 * f2) - n2;
	cout << "Resultado opreaciones mixtas " << f3 << endl;

	//7. Floats mas ejemplos
	f3 = f1 + 10.3;
	cout << " Resultado suma flotantes" << f3 << endl;
	f3 = f2 * 2.5;
	cout << " Resultado mutiplicacion flotantes" << f3 << endl;
	f3 = f1 / 2.0;
	cout << " Resultado division flotantes" << f3 << endl;
	f3 = f2 - 3.2;
	cout << " Resultado resta flotantes" << f3 << endl;



	// 8. Combinacion de numeros enteros y flotantes 
	f3 = n1 + f1 - n2 / 2.0 + f2 * 1.5;
	cout << "combinacion numeros enteros y flotantes " << f3 << endl;

	// 9. Combinaciones complejas 
	f3 = (n1 + f1) * (n2 - f2) / (n1 * f2);
	cout << "combinacion complejas" << f3 << endl;

	//10 Operaciones aritmeticas mixtas
	double d1 = 7.4; 
	f3 = n1 + d1;
	cout << "Operaciones aritmeticas mixtas " << f3 << endl;
	f3 = n2 - d1;
	cout << "Operaciones aritmeticas mixtas " << f3 << endl;
	f3 = d1 * f2; 
	cout << "Operaciones aritmeticas mixtas " << f3 << endl;
	f3 = d1 / f1; 
	cout << "Operaciones aritmeticas mixtas " << f3 << endl;

	//11 Negativos
	int negINt = -25;
	float negFloat = -13.5;
	n3 = n1 + negINt;
	cout << "Operaciones con negativos " << n3 << endl;
	n3 = n2 + negINt;
	cout << "Operaciones aritmeticas mixtas " << n3 << endl;
	n3 = negFloat - n2;
	cout << "Operaciones aritmeticas mixtas " << n3 << endl;
	n3 = negFloat + n1;

	// 12 Incremento y decremento
	n1++; 
	cout << "Incremento en 1 a n1" << n1 << endl; 
	n2--; 
	cout << "Decremento en 1 a n2" << n2 << endl;
	f1 += 2.5; 
	cout << "Sumar 2.5 a f1" << f1 << endl;
	f2 -= 1.2;
	cout << "Restar 1.2 a f2" << f2 << endl;

}

