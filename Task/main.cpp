#include <iostream>

using namespace std;
using::cout;
using::cin;
using::endl;

//#define FACTORIAL
//#define POWER
//#define ASCII
//#define FIB_1
//#define FIB_2

void main() {
	setlocale(LC_ALL, "");

#ifdef FACTORIAL
	int f = 1;
	long long n;
	cout << "Введите число: "; cin >> n;
	cout << n << " != ";
	for (int i = 1; i <= n; i++) {
		f *= i;
	}
	cout << f;
#endif // FACTORIAL

#ifdef POWER
	double a, b, z = 1;
	cout << "Введите основание степени: "; cin >> b;
	cout << "Введите показатель степени: "; cin >> a;
	if (a < 0) {
		b = 1 / b;
		a = -a;
	}
	for (int i = 1; i <= a; i++) {
		z *= b;
	}
	cout << z;
#endif // POWER

#ifdef ASCII
	for (int i = 0; i < 256; i++) {
		if (i % 16 == 0) cout << endl;
		cout << (char)i << " ";
	}
#endif // ASCII

#ifdef FIB_1
	int f;
	cout << "Введите число: "; cin >> f;
	for (int a = 0, b = 1, c = a + b; a < f; a = b, b = c, c = a + b) {
		cout << a << "\t";
	}
#endif // FIB_1

#ifdef FIB_2
	int f;
	int counter = 0;
	cout << "Введите число: "; cin >> f;
	for (int a = 0, b = 1, c = a + b; a < f; a = b, b = c, c = a + b) {
		cout << a << "\t";
		counter++;
	}
	cout << endl;
	cout << "Общее число чисел ряда Фибоначчи: " << counter;
#endif // FIB_2

	int n;
	cout << "Введите предельное число: "; cin >> n;
	int simplex_counter = 0;
	for (int i = 0; i <= n; i++) {
		bool simple = true; //Предположим, что число простое,
		//но это нужно проверить:
		for (int j = 2; j < sqrt(i); j++)
			if (i % j == 0) {
				simple = false;
				break;
			}
		if (simple)simplex_counter++;
	}
}