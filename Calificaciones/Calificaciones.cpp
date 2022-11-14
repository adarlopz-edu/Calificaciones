#include <iostream>

using namespace std;

int main()
{
	double s, d1, d2, d3, d4, d5, d6, d7;
	cout << "Escribe 7 calificaciones separadas por un enter:\n";

	cout << "1- ";
	cin >> d1;

	cout << "2- ";
	cin >> d2;

	cout << "3- ";
	cin >> d3;

	cout << "4- ";
	cin >> d4;

	cout << "5- ";
	cin >> d5;

	cout << "6- ";
	cin >> d6;

	cout << "7- ";
	cin >> d7;

	s = d1 + d2 + d3 + d4 + d5 + d6 + d7;

	if (s > 700) {
		cout << "Debes de escribir calificaciones menores de 100: ";
	}
	else {
		s = s / 7;
		cout << "El promedio es: " << s;
	}

}
