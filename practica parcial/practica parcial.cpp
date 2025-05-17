#include <iostream>

using namespace std;



int main() {

	int m;



	cout << "\t\t\tElija una opción\n\n";

	cout << "1 Ingresos\n";

	cout << "2 Modificación\n";

	cout << "3 Consultas\n";

	cout << "4 Reportes\n";

	cout << "5 Utilidades\n";

	cout << "6 Salir\n\n";



	cin >> m;



	switch (m) {

	case 1:

		cout << "Ud tiene S/. 2500" << endl;

		break;

	case 2:

		cout << "¿Qué desea modificar?" << endl;

		break;

	case 3:

		cout << "Escriba su consulta aquí: " << endl;

		break;

	case 4:

		cout << "Ud. no presenta reportes" << endl;

		break;

	case 5:

		cout << "Este servicio está bloqueado por el momento" << endl;

		break;

	case 6:

		cout << "Ya está fuera" << endl;

		break;

	default:

		cout << "El valor ingresado no está en el menú" << endl;
		break;

	}



	cin.ignore();

	return 0;

}
