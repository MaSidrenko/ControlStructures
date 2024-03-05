#include<iostream>

using namespace std;
using::cout;
using::cin;
using::endl;

#define LINE_VERTICAL		(char)179
#define LINE_HORIZONTAL		(char)196 << (char)196
#define UPPER_LEFT_AGLE		(char)218
#define UPPER_RIGHT_AGLE	(char)191
#define LOWER_LEFT_AGLE		(char)192
#define LOWER_RIGHT_AGLE	(char)217
#define WHITE_BOX			"\xDB\xDB"			//(char)219 << (char)219
#define BLACK_BOX			"\x20\x20"

//#define ASCII
//#define CHESS

void main() {
#ifdef ASCII
	for (int i = 176; i < 224; i++) {
		/*	if (i % 16 == 0)cout << endl;
			cout << (char)i << " ";*/
		cout << i << "\t" << (char)i << endl;
	}
#endif // ASCII

	setlocale(LC_ALL, "");
#ifdef CHESS
	int n;
	cout << "Введите размер доски: "; cin >> n; n++;
	setlocale(LC_ALL, "C");
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= n; j++) {
			if (i == 0 && j == 0)cout << UPPER_LEFT_AGLE;
			else if (i == 0 && j == n) cout << UPPER_RIGHT_AGLE;
			else if (i == n && j == 0) cout << LOWER_LEFT_AGLE;
			else if (i == n && j == n) cout << LOWER_RIGHT_AGLE;
			else if (i == 0 || i == n) cout << LINE_HORIZONTAL;
			else if (j == 0 || j == n) cout << LINE_VERTICAL;
			else cout << (i % 2 == j % 2 ? WHITE_BOX : BLACK_BOX);
		}
		cout << endl;
		//Биномиальные коэфициенты!!!Треугольник Паскаля
	}
#endif // CHESS
	int n;
	cout << "Введите размер доски: "; cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
				for (int k = 0; k < n; k++) {
					for (int l = 0; l < n; l++) {
						if ((i + j) % 2 == 0) {
							cout << "* ";
						}
						cout << endl;
						if((i + j) % 2 != 0) {
							cout << "  ";
						}
						cout << endl;
					}
				}
			}
		cout << endl;
		}
	//int n; 
	//cout << "Введите число: "; cin >> n;
	//for (int i = 0; i < n; i++) {
	//	for (int j = i; j < n; j++) {
	//		cout << " ";
	//	}
	//	for (int j = 0; j <= i; j++) {
	//		cout << "* ";
	//	}
	//	cout << endl;
	//}
}
