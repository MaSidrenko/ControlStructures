#include<iostream>
#include<ctime>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define WHILE
//#define FOR
//#define FACTORIAL
//#define POWER
//#define ASCII
//#define FIBONACCI_1
//#define FIBONACCI_2
//#define SIMPLE_NUM
//#define MULITICATION_TAIBLE 
//#define SQUARE
//#define TRINGLE_1
//#define TRINGLE_2
//#define TRINGLE_3
//#define TRINGLE_4


void main() {
	setlocale(LC_ALL, "Rus");
#ifdef WHILE
	int i = 0;
	int n;
	cout << "Введите количество итераций: "; cin >> n;
	while (i < n) {
		cout << "Hello\t" << i << endl;
		i++;
	}
#endif // WHILE
#ifdef FOR
	int n;
	cout << "Введите количество итераций: "; cin >> n;
	for (
		int i = 0;
		i < n;
		i++)
	{
		cout << i << "\t";
	}
	cout << endl;
#endif // FOR
#ifdef FACTORIAL
	double f = 1;
	long long n;
	cout << "Введите, число из которого нужно расчитать факториал: "; cin >> n;
	cout << n << "! = ";
	if (n == 0) {
		cout << 1;
	}
	else {
		for (int i = 1; i <= n; i++)
		{
			f *= i;
		}
		cout << f;
	}
#endif // FACTORIAL

#ifdef POWER

	double a;
	double n;
	double z = 1;
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> n;
	cout << a << "^" << n << " = ";
	if (n < 0) {
		a = 1 / a;
		n = -n;
	}
	for (int i = 1; i <= n; i++) {
		z *= a;
	}
	cout << z;

#endif // POWER

#ifdef ASCII
	for (int i = 0; i < 256; i++) {
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";
	}
#endif // ASCII

#ifdef  FIBONACCI_1
	int n;
	cout << "Введите предельное число: "; cin >> n;
	for (int a = 0, b = 1, c = a + b; a < n; a = b, b = c, c = a + b) {
		cout << a << "\t";
	}
#endif //  FIBONACCI_1
#ifdef FIBONACCI_2
	int n;
	int counter = 0;
	cout << "Введите предельное число: "; cin >> n;
	for (int a = 0, b = 1, c = a + b; a < n; a = b, b = c, c = a + b) {
		cout << a << "\t";
		counter++;
	}
	cout << endl;
	cout << "Общее количество чисел из ряда Фибоначчи: " << counter;
#endif

#ifdef SIMPLE_NUM
	time_t start = clock();
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
		//cout << (simplex_counter++, i) << "\t";
	}
	time_t end = clock();
	cout << endl;
	cout << "Amount of simplex numbers: " << simplex_counter << endl;
	cout << "Calculated by " << double(end - start) / CLOCKS_PER_SEC << " Seconds" << endl;
#endif // SIMPLE_NUM

#ifdef MULITICATION_TAIBLE
	for (int i = 1; i <= 10; i++) {
		cout << "Таблица умножения на " << i << ":\n";
		for (int j = 1; j <= 10; j++) {
			if (i < 10)cout << " ";
			cout << i << " * ";
			if (j < 10)cout << " ";
			cout << j << " = ";
			if (i * j < 100)cout << " ";
			if (i * j < 10)cout << " ";
			cout << i * j << endl;
		}
		cout << endl;
	}
#endif // T_UMN

#ifdef SQUARE
	int l;
	int w;
	cout << "Введите длинну фигуры: "; cin >> l;
	cout << "Введите ширину фигуры: "; cin >> w;
	for (int i = 0; i < l; i++) {
		for (int j = 0; j < w; j++) {
			cout << "*";
		}
		cout << endl;
	}
#endif // SQUARE

#ifdef TRINGLE_1
	int l;
	cin >> l;
	for (int i = 0; i < l; i++) {

		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
#endif // TRINGLE_1

#ifdef TRINGLE_2
	int l;
	cin >> l;
	for (int i = 0; i < l; i++) {
		for (int j = i; j < l; j++) {
			cout << "*";
		}
		cout << endl;
	}

#endif // TRINGLE_2

#ifdef TRINGLE_3
	int l;
	cin >> l;
	for (int i = 0; i < l; i++) {
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		for (int j = i; j < l; j++) {
			cout << "*";
		}
		cout << endl;
	}

#endif // TRINGLE_3

#ifdef TRINGLE_4
	int l;
	cin >> l;
	for (int i = 0; i < l; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		for (int j = i; j <= l; j++) {
			cout << " ";
		}
		cout << endl;
	}
#endif // TRINGLE_4


	}
	





	
