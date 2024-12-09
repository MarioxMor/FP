// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
	
	//1.
	for (int i = 9; i <= 0; i--)
	{
		cout << i << ",";
	}
	cout << endl;
	// 2. 

	for (int i = 0; i <= 99; i++)
	{
		cout << i << ",";
	}
	cout << endl; 

	//3. 
	for (int i = 0; i <= 100; i--)
	{
		cout << i << ",";
	}
	cout << endl;

	// 4.
	int min, max;
	cout << "Dame el minimo: ";
	cin >> min;
	cout << "Dame el maximo: ";
	cin >> max;

	for (int i = min; i <= max ; i++)
	{
		cout << i << ",";
	}
	cout << endl;
	
	// 5.
	int minimo, maximo;
	cout << "Dame el maximo: ";
	cin >> maximo;
	cout << "Dame el minimo: ";
	cin >> minimo;
	

	for (int i = maximo; i >= minimo; i--)
	{
		cout << i << ",";
	}
	cout << endl;







