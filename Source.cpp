//programa con opciones matematicas 
//HELLO WORLD
//GRUPOOO
//grup
#include<iostream>
using namespace std;
int main() {

	int n1, n2, opcion;
	float suma, resta, multiplicacion, divicion;
	cout << "ingrese primer numero: "; cin >> n1;
	cout << "ingrese segundo numero: "; cin >> n2; cout << endl;

	cout << "menu: " << endl;
	cout << "1 suma " << endl;
	cout << "2 resta " << endl;
	cout << "3 multtiplicacion " << endl;
	cout << "4 division " << endl;

	cout << "ingrese una opcion: ", cin >> opcion;

	switch (opcion) {

	case 1:
		suma = n1 + n2;
		cout << "la suma es: " << suma;
		break;
	case 2:
		resta = n1 - n2;
		cout << "la resta es: " << resta;
		break;
	case 3:
		multiplicacion = n1 * n2;
		cout << "la smultiplicacion es: " << multiplicacion;
		break;
	case 4:
		divicion = n1 / n2;
		cout << "la divicion es: " << divicion;
		break;
	default:
		cout << "opcion no valida ";
		break;


	}
	return 0;
}