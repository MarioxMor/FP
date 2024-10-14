

#include <iostream>
#include <limits>
#include <iomanip>
#include <locale>
#include <sstream>
#include <algorithm>
using namespace std;

int main()
{
	cout << boolalpha; // imprime "true" en lugar de "1"
	bool bb = true;
	cout << bb << endl;
	char opcion1 = 'a';		 //1 caracter de tipo alpha,numerico, o especial
	cout << opcion1 << endl;


	// Operadores logicos "true or false" 
			//"and" Disyuncion dos conjuntos tambien se puede usar "&&"
			//"Or" conjuncion de conjuntos tambien se puede usar "||"
			//"Not" se puede usar con "!"

	// ser mujer and > 60 años 
	// sneakers or milkyway
	// false 


			// Enteros
	int n1 = 10;
	int n2 = 20;
	int n3;

	//Flotantes
	float f1 = 15.5;
	float f2 = 5.2;
	float f3;



	// Operaciones con desigualdad, comparaciones, magniotud
	// 
	//	1. Igualdad
	cout << "(n1 == n2): " << (n1 == n2) << endl;
	cout << "(f1==f2): " << (f1 == f2) << endl;

	// 2. Desigualdad
	cout << "(n1 != n2): " << (n1 != n2) << endl;
	cout << "(f1!=f2): " << (f1 != f2) << endl;

	// 3. Mayor que 
	cout << "(n1 > n2): " << (n1 > n2) << endl;
	cout << "(f1 > f2): " << (f1 > f2) << endl;

	//	4. Menor que 
	cout << "(n1 < n2): " << (n1 < n2) << endl;
	cout << "(f1 < f2): " << (f1 < f2) << endl;


	//	5. Mayor o igual que 
	cout << "(n1 >= n2): " << (n1 >= n2) << endl;
	cout << "(f1 >= f2): " << (f1 >= f2) << endl;


	// 6. Menor o igual que
	cout << "(n1 <= n2): " << (n1 <= n2) << endl;
	cout << "(f1 <= f2): " << (f1 <= f2) << endl;

	// 7. Comparaciones de tipos mixtos
	cout << "(n1 > f2): " << (n1 >= f2) << endl;
	cout << "(f1 > n2): " << (f1 >= n2) << endl;

	// 8. Valores negativos
	cout << "(n1 > -n2): " << (n1 > -n2) << endl;
	cout << "(f1 > -f2): " << (f1 > -f2) << endl;

	// 9. Combinacion de comparaciones 
	// Se puede isar la palabra en lugar de los simbolos

	cout << "((n1 < n2) && (f1 > f2)): " << ((n1 < n2) && (f1 > f2)) << endl;
	cout << "((n1 == 10) || (f1 == 5.2)): " << ((n1 == 10) || (f1 == 5.2)) << endl;

	// 10. Comparaciones añadidas 
	cout << "(n1 > n2 -10): " << (n1 > n2 - 10) << endl; 
	cout << "(f1 <= f2 + 10.5): " << (f1 <= f2 + 10.5) << endl;

	// 11. Comparacion de constantes 
	cout << " (n1 == 10): " << (n1 == 10) << endl;
	cout << " (f1 == 5.2): " << (f1 == 5.2) << endl;

	// 12: Comparacion con los resulatados de las operaciones aritmeticas 
	cout << " ((n1 + n2) > (f1 * f2)): " << ((n1 + n2) > (f1 * f2)) << endl;
	cout << " ((n1 + n2) >= (f1 / f2)): " << ((n1 + n2) >= (f1 / f2)) << endl;

	// 13. Comparacion de resultados negativos y positivos
	cout << " ((-n1) < n2): " << ((-n1) < n2) << endl;
	cout << " ((-f1) < f2): " << ((-f1) < f2) << endl;


	// 14. Combinacion de aritmeticas y comparacion
	cout << " ((n1 * n2) > (f1 - f2)) : " << ((n1 * n2) > (f1 - f2)) << endl;
	cout << " ((n1 / n2) <= (f1 + f2)) : " << ((n1 / n2) <= (f1 + f2)) << endl;

	//15. Comparaciones en cadenas

	cout << " (n1 < n2 and n2 < f1) : " << (n1 < n2 and n2 < f1) << endl;
	cout << " (f2 > f1 and f1 > n1) : " << (f2 > f1 and f1 > n1) << endl;

	// 16. Comparacion de modulos 
	cout << "((n2 % n1) == 0) : " << ((n2 % n1) == 0) << endl; 


	// OPeracdores logicos 
	bool p = true, q = false; 


	// 17. Logico And
	cout << "(p and q): " << (p and q) << endl;

	// 18: Or logico 
	cout << "(p or q): " << (p or q) << endl; ;

	// 19. Logico not 
	cout << "(not p): " << (not p) << endl; ;

	// 20. combinacion de AND y NOt
	cout << "(p and (!q)): " << (p and (!q)) << endl; ;

	// 21. doble not 
	cout << "(not (not(q))): " << (not (not(q))) << endl; 

	// 22. Opreaciones mixtas 
	cout << "(not(p and q)or (p or not(q))): " << (not(p and q) or (p or not(q))) << endl;

	//23. Asignacion de variables con operadores logicos 
	bool a = p and q;
	cout << "Valor asignado a la variable 'a' : " << a << endl;

	//24. Operaciones logicas con numeros enteros (distinto a 0 es verdadero, 0 es falso
	int x = 5, y = 0;
	cout << "(x and y): " << (x and y) << endl;

	// 25. Operaciones logicas con tipos de mixtos
	float m = 3.5, n = 0.0;
	cout << "(m or n): " << (m or n) << endl;

	// 26. Expresiones complejas 
	cout << "((p or q) and (x or n)): " << ((p or q) and (x or n)) << endl;

	// 27. Expresiones añadidas 
	cout << "((x and not(y)) and (m or not(q))): " << ((x and not(y)) and (m or not(q))) << endl; 

	// 28. Operaciones logicas con numeros de punto flotante
	cout << "((m > n) and (m <= 3.5)): " << ((m > n) and (m <= 3.5)) << endl;

	// 29. Uso de operadores logicos con comparacion de cadenas de texto (sting)
	string str1 = "Hola", str2 = "Mundo";
	cout << "(str1 == str2) or (str1 != str2)): " << ((str1 == str2) or (str1 != str2)) << endl;



