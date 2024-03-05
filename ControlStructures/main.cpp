//ControlStructures
#include<iostream>
#include<conio.h>
using namespace std;
using std::cin;
using std::cout;
using std::endl;
//#define IF_ELSE;
//#define WHILE_1
//#define WHILE_2
	
void main() 
{
	setlocale(LC_ALL, "Rus");
#ifdef IF_else
	int temperature;
	cout << "Введите температуру воздуха: ";
	cin >> temperature;
	if (temperature > 0)
	{
		cout << "На улице тепло" << endl;
	}
	else {
		cout << "на улице холодно" << endl;
	}

#endif // IF_ELSE
#ifdef WHILE_1
	int i = 0; //Счётчик цикла
	int n; //Количество итераций
	cout << "Введите количество итераций: ";
	cin >> n;
	while (++i < n) {
		cout << i << " Hello World\n";
		//i++;
	}
#endif // WHILE_1
#ifdef WHILE_2
	int n;
	cout << "Введите количество итераций: ";
	cin >> n;

	while (n--) {
		cout << n << " Hello World\n";
	}
#endif // WHILE_2
	char key;
	do {
		key = _getch();
		cout << (int)key << "\t" << key << endl;
	} while (true);
}
