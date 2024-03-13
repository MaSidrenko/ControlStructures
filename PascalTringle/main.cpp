#include<iostream>


using namespace std;

const int widht = 8;
typedef unsigned long long int DataType;

void main() 
{
	setlocale(LC_ALL, "");
	int h;
	cout << "¬ведите высоту треугольника: "; cin >> h;
	for (int i = 0; i < h; i++) {
		cout.width(widht/2);
		cout << "";
		
	}
	cout << left;
	cout << 1 << endl;
	DataType nf = 1;
	for (int n = 1; n <= h; n++) {
		nf *= n;
		DataType mf = 1;
		for (int i = 0; i < h - n; i++) {
			cout.width(widht / 2);
			cout << "";
		}
		cout.width(widht);
		cout << 1;
			for (int m = 1; m <= n; m++) {
				mf *= m;
				DataType mnf = 1;
				for (int mn = 1; mn < n - m; mn++)mnf *= mn;
				cout.width(widht);
					cout << nf / (mf * mnf);
			}
			cout << endl;
	}
	
}