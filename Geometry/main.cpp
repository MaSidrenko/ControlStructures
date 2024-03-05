#include <iostream>

using namespace std;
using std::cout;
using std::cin;
using std::endl;

//#define SQUARE
//#define TRINGLE_1
//#define TRINGLE_2
//#define TRINGLE_3
//#define TRINGLE_4
//#define ROMB
//#define ROMB_2
#define ROMB_ONE_FOR
#define ROMB_TWO_FOR
//#define PLUS_MINUS


void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "¬ведите размер фигуры: "; cin >> n;

#ifdef SQUARE
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "* "; 
		}
		cout << endl;
}
#endif // SQUARE

#ifdef TRINGLE_1
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRINGLE_1

#ifdef TRINGLE_2
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRINGLE_2

#ifdef TRINGLE_3
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			cout << "  ";
		}
		for (int j = i; j < n; j++) {
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRINGLE_3

#ifdef TRINGLE_4
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			cout << "  ";
		}
		for (int j = 0; j <= i; j++) {
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRINGLE_4

#ifdef ROMB
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			cout << " ";
		}
		cout << "/";
		for (int j = 0; j < i * 2; j++) {
			cout << " ";
		}
		cout << "\\" << endl;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cout << " ";
		}
		cout << "\\";
		for (int j = i; j < n * 2 - i - 2; j++) {
			cout << " ";
		}
		cout << "/" << endl;
	}
#endif // ROMB

#ifdef PLUS_MINUS

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if ((i + j) % 2 == 0)
			{
				cout << "+";
			}
			else {
				cout << "-";
			}
		}
		cout << endl;
	}
#endif // PLUS_MINUS

#ifdef ROMB_2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)cout << " "; cout << "/";
		for (int j = 0; j < i; j++)cout << "  "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++)cout << " "; cout << "\\";
		for (int j = i; j < n - 1; j++)cout << "  "; cout << "/";
		cout << endl;

	}
#endif // ROMB_2

	for (int i = 0; i < n * 2; i++) 
	{
		for (int j = 0; j < n * 2; j++) 
		{
			if (i + n == j || j + n == i) cout << "\\";
			else if (n - 1 - i % n == j % n && i + j != n * 2 - 1) cout << "/";
			else cout << " ";
		}
		cout << endl;
	}
}


