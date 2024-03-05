#include<iostream>
using namespace std;
//#define CALC_1

void main() {

	setlocale(LC_ALL, "Rus");
	double a, b;
	char s;
	cout << "¬ведите выражение: ";
	cin >> a >> s >> b; 
#ifdef CALC_1
	if (s == '+') {
		cout << a << " + " << b << " = " << a + b << endl;
	}
	else if (s == '-') {
		cout << a << " - " << b << " = " << a - b << endl;
	}
	else if (s == '*') {
		cout << a << " * " << b << " = " << a * b << endl;
	}
	else if (s == '/') {
		if (b != 0) {
			cout << a << " / " << b << " = " << a / b << endl;
		}
		else {
			cout << "Error";
		}
	}
	else {
		cout << "Error: Unknown symbol";
	}
#endif // CALC_1
	switch (s)
	{
	case'+':cout << a << "+" << b << " = " << a + b << endl; break;
	case'-':cout << a << "-" << b << " = " << a - b << endl; break;
	case'*':cout << a << "*" << b << " = " << a * b << endl; break;
	case'/':cout << a << "/" << b << " = " << a / b << endl; break;
	default: cout << "Error: No operation" << endl;
	}
	main();
	}
