
#include<iostream>
#include<conio.h>

using namespace std;

int main() {
	int numeros[100][100], filas, columnas, Mult;

	cout << "Digite el numero de filas: "; cin >> filas;
	cout << "Digite el numero de columnas: "; cin >> columnas;

	//Rellenando la matriz	
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			
			numeros[i][j] = rand() % 256;
		}
	}

	cout << "\nMostrando matriz original\n\n";

	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			cout << numeros[i][j];
			cout << " ";
		}
		cout << "\n";
	}

	cout << "\n\n";

	cout << "Digite el numero por el cual la matriz se multiplicara: "; cin >> Mult;

	cout << "\nMostrando matriz multiplicada por entero digitado\n\n";

	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			cout << numeros[i][j] * Mult;
			cout << " ";
		}
		cout << "\n";
	}
	return 0;
}
