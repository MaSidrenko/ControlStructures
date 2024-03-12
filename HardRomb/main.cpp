#include<iostream>

using namespace std;



void main() {
	setlocale(LC_ALL, "");
	int n;
	cout << "¬вдетие размер фигуры: "; cin >> n;


	for (int i = 0; i < n * 2; i++) {
		for (int j = 0; j < n * 2; j++) {
			if (n  - 1 - j % n == i % n && i + j != n * 2 - 1)cout << "/";
			else if (i == j + n || j == i + n )cout << "\\";
			else cout << " ";
		}

		cout << endl;
	}

}