
#include <iostream>
using namespace std;

int main()
{
	// Ejercicio 1 
	int num;
	cout << "	Ejercicio 1";
	cout << "\nIngresa un número: ";
	cin >> num;
	if (num % 2 == 0) {
		cout << "El número es par." << endl;
	}
	else {
		cout << "El número es impar." << endl;
	}

	//Ejercicio 2 

	int n1, n2;
	cout << "	Ejercicio 2";
	cout << "\nIngresa n1: ";
	cin >> n1;
	cout << endl;
	cout << "ingresa n2: ";
	cin >> n2;
	cout << endl;
	if (n1 > n2)
	{
		cout << "n1 : " << n1 << endl;

	}
	else {
		cout << "n2 : " << n2 << endl;

	}

	//Ejercicio 3 

	int edad;
	cout << "	Ejercicio 3";
	cout << "\nCual es tu edad? ";
	cin >> edad;
	cout << endl;
	if (edad >= 18)
	{
		cout << "Mayor de edad" << endl;
	}
	else {
		cout << "Menor de edad " << endl;

	}
	// Ejercicio 4 
	int temperatura;
	cout << "	Ejercicio 4";
	cout << "\nDame la temperatura: ";
	cin >> temperatura;
	cout << endl;
	if (temperatura < 10)
	{
		cout << "Hace mucho frio!" << endl;
	}
	if (temperatura >= 10 and
		temperatura <= 17)
	{
		cout << "Hace Frio!" << endl;
	}
	if (temperatura > 17)
	{
		cout << "Esta Templado" << endl;
	}

	// Ejercicio 5
	char voto = ' ';
	cout << "	Ejercicio 4";
	cout << "\nA favor s/n: ";
	cin >> voto;
	cout << endl;
	if (voto == 's' or voto == 'n' or voto == 'S' or voto == 'N')
	{
		cout << "voto valido" << endl;
	}
	else { cout << "Voto invalido" << endl; }

	// Ejercicio 6 
	int	horasTrabajadas = 0;
	cout << "Horas trabajadas?? " ; 
	cin >> horasTrabajadas; 
	cout << endl;
	int horasBono = horasTrabajadas - 40; 
	if (horasBono > 0)
	{
		horasBono = horasBono * 75; 
		cout << "Bono " << horasBono; 
	}
	else
	{
		cout << "No hay bono";
	}


}

