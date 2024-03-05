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
		cout << "Вперед" << endl;
	}
	else if (key == 's') {
		cout << "Назад" << endl;
	}
	else if (key == 'a') {
		cout << "Вправо" << endl;
	}
	else if (key == 'd') {
		cout << "Влево" << endl;
	}
	else if (key == ' ') {
		cout << "Прыжок" << endl;
	}
	else if (key == 13) {
		cout << "Огонь" << endl;
	}
	else if (key == 27) {
		cout << "Выход" << endl;
	}
	else {
		cout << "Error" << endl;
	}
#endif // IF

#ifdef SWITCH
	switch (_getch()) {
	case'w': cout << "Вперед" << endl; break;
	case's': cout << "Назад" << endl; break;
	case'a': cout << "Влево" << endl; break;
	case'd': cout << "вправо" << endl; break;
	case' ': cout << "Прыжок" << endl; break;
	case 13: cout << "Огонь" << endl; break;
	case 27: cout << "Выход" << endl; break;
	default: cout << "Error";
	}
#endif // SWITCH




}




