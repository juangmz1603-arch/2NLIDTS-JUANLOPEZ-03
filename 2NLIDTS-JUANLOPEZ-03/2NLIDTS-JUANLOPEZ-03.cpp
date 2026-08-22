//arreglo de ocho elemtos-memoria estatica
#include <iostream>
using namespace std; //espacio de trabajo
const int numero_global = 8; //variable global
//funcion secundaria
int sumatoria(int numero_secundario_local) {
	int resultado = 0, total = 0, total2 = 0;
	int arreglos_numeros[numero_global];
	for (int i = 0; i < numero_secundario_local;i++) {
		cout << "Ingrese el valor de la posicion actual:" << endl;
		cin >> arreglos_numeros[i];
		total += arreglos_numeros[i];
		total2 = total2 + arreglos_numeros[i];
	}
	cout << total << endl;
	cout << total2 << endl;
	//return resultado;
	return total;
}
//funcion principal 
int main()
{
	int rest_main = 0;
	int numero_local_main = 0;
	rest_main = sumatoria(numero_global);
	cout << " el resultado de la suma 1 es:" << endl;
	cout << rest_main << endl;
	cout << " cuantos numeros quiere capturar? (menor a 8):" << endl;
	cin >> numero_local_main;
	rest_main = sumatoria(numero_local_main);
	cout << " el resultado de la suma 2 es:" << endl;
	cout << rest_main << endl;
	return 0;
}
