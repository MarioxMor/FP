#include <iostream>
using namespace std;
struct Alumno {
	//atributos/propiedades

	string nombre;
	int cuenta;

};
int main()
{
	Alumno Jose ;
	Jose.nombre = "Jose";
	Jose.cuenta = 12345;

	Alumno Mario; 
	Mario.cuenta = 20660589;
	Mario.nombre = "Mario";

	cout << "Nombre: " << Mario.nombre << endl; 
	cout << "Numero de cuenta: " << Mario.cuenta << endl;
	cout << "Nombre: " << Jose.nombre << endl;
	cout << "Numero de cuenta: " << Jose.cuenta << endl;

}
