#include<iostream>

using namespace std;


#define LINE_VERTICAL		(char)179
#define LINE_HORIZONTAL		(char)196 << (char)196
#define UPPER_LEFT_AGLE		(char)218
#define UPPER_RIGHT_AGLE	(char)191
#define LOWER_LEFT_AGLE		(char)192
#define LOWER_RIGHT_AGLE	(char)217
#define WHITE_BOX			"\xDB\xDB"
#define BLACK_BOX			"\x20\x20"
//#define CHESS
#define HARD_CHESS

void main() {
	setlocale(LC_ALL, "");
#ifdef CHESS

	int n;
	cout << "¬ведите размер доски: "; cin >> n; n++;
	setlocale(LC_ALL, "C");
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= n; j++) {
			if (i == 0 && j == 0)cout << UPPER_LEFT_AGLE;
			else if (i == n && j == 0) cout << LOWER_LEFT_AGLE;
			else if (i == 0 && j == n)cout << UPPER_RIGHT_AGLE;
			else if (i == n && j == n)cout << LOWER_RIGHT_AGLE;
			else if (i == 0 || i == n) cout << LINE_HORIZONTAL;
			else if (j == 0 || j == n) cout << LINE_VERTICAL;
			else cout << (i % 2 == j % 2 ? WHITE_BOX : BLACK_BOX);
		}
		cout << endl;
	}
#endif // CHESS

#ifdef HARD_CHESS
	int n;
	cout << "¬ведите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int l = 0; l < n; l++)
			{
				for (int k = 0; k < n; k++)
				{
					cout << (i % 2 == l % 2 ? "* " : "  ");
				}
			}
			cout << endl;
		}
	}
#endif // HARD_CHESS

}