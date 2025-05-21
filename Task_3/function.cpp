#include "deFu.h"


char ToSmall(char check) {

	if (check >= 'A' && check <= 'Z')
		check += 32;

	return check;
}
void Enter(double &num1, double &num2, char &oper) {

	cout << "Please ,Enter the first Number : ";
	cin >> num1;
	cout << "Enter the Operation { +,-,*,/ }";
	cin >> oper;
	cout << "Please, Enter the next Number : ";
	cin >> num2;
}
void end(bool& yes) {
	cout << "Do you want to end this? (y to end): ";
	char choice;
	cin >> choice;
	choice = ToSmall(choice);
	if (choice == 'y')
		yes = false;
	else
		yes = true;
}
void isSmale(char ch) {
	if (ch >= 'a' && ch <= 'z')
		cout << "your character is small letter" << endl;
	else 
		cout << "your character is not small letter" << endl;
}

