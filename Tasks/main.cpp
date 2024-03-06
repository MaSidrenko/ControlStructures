#include<iostream>


using namespace std;
using::cout;
using::cin;
using::endl;

//#define SIMPLE_NUM
//#define UMN_TABLE
#define PIFAGOR_TABLE

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

#ifdef UMN_TABLE
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			if (i < 10) cout << " ";
			cout << i << " * ";
			if (j < 10) cout << " ";
			cout << j << " = ";
			if (i * j < 100) cout << " ";
			if (i * j < 10) cout << " ";
			cout << i * j << endl;


		}
		cout << endl;
	}
#endif // UMN_TABLE

#ifdef PIFAGOR_TABLE
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			if (i < 10)cout << " ";
			if (j < 10)cout << " ";
			if (i * j <= 100)cout << " ";
			if (i * j < 10)cout << " ";
			if (i == 10 && j <= 100)cout << " ";
			if (i <= 9 && j == 10)cout << " ";
			cout << i * j;
		}
		cout << endl;
	}
#endif // PIFAGOR_TABLE


}