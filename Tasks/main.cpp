#include<iostream>


using namespace std;
using::cout;
using::cin;
using::endl;

//#define SIMPLE_NUM

void main() {

	setlocale(LC_ALL, "");
#ifdef SIMPLE_NUM
	int n;
	cout << "Введите предельное число: "; cin >> n;
	int simple_counter = 0;
	for (int i = 0; i < n; i++) {
		bool simple = true;
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				simple = false;
				break;
			}
		}
		if (simple) {
			cout << i << "\t";
			simple_counter++;
		}
	}
	cout << endl;
	cout << "Всего простых чисел: " << simple_counter;
#endif // SIMPLE_NUM
	int a,b;
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			a = i * j;
			cout << i << " * " << j << " = " << a << endl;

		}
		cout << endl;
	}
	

}