#include<iostream>
#include<conio.h>

using namespace std;

//#define IF
#define SWITCH

void main() {

	setlocale(LC_ALL, "Rus");
	char key;
	key = _getch();
#ifdef IF
	if (key == 'w') {
		cout << "������" << endl;
	}
	else if (key == 's') {
		cout << "�����" << endl;
	}
	else if (key == 'a') {
		cout << "������" << endl;
	}
	else if (key == 'd') {
		cout << "�����" << endl;
	}
	else if (key == ' ') {
		cout << "������" << endl;
	}
	else if (key == 13) {
		cout << "�����" << endl;
	}
	else if (key == 27) {
		cout << "�����" << endl;
	}
	else {
		cout << "Error" << endl;
	}
#endif // IF

#ifdef SWITCH
	switch (_getch()) {
	case'w': cout << "������" << endl; break;
	case's': cout << "�����" << endl; break;
	case'a': cout << "�����" << endl; break;
	case'd': cout << "������" << endl; break;
	case' ': cout << "������" << endl; break;
	case 13: cout << "�����" << endl; break;
	case 27: cout << "�����" << endl; break;
	default: cout << "Error";
	}
#endif // SWITCH




}




