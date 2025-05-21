#include "deFu.h"


/*Write a C++ program that inserts a value from the keyboard then 
evaluates the value of Y in the following equation:*/
float evalutesTheY(int x) {
	float y;
	if (x <= -10)
		return y = (x * x * x) + x;
	else if (x >= 10)
		return y = 4 * x;
	else if (x > -10 && x < 10)
		return y = ((x + 1) * (x + 1)) / 2;

}

/*Write a program that represents a calculator. The program should take as 
input two integers and the operation to be performed as a character. It 
should then output the numbers, the operator, and the result. (For 
division, if the denominator is zero, output an appropriate message.) */
double Calculator(double num1, double num2, char oper) {

	cout << "Number one : " << num1 << " " << oper << " Number two : " << num2 << " = ";
	if (oper == '+')
		return num1 + num2;
	else if (oper == '-')
		return num1 - num2;

	else if (oper == '*')
		return num1 * num2;

	else if (oper == '/') {
		if (num2 == 0) { cout << "you cant / 0 , Error 00"; return 1;}
		return num1 / num2;
	}
	else {

		cout << "Enter the right operation !!, Eroor 00" << endl;
		return 2;
	}


}

int main() {

	while (true) {

		int chose;
		cout << "1) Evaluates the value of Y.\n2) Calculator.\n3) Is small or not !!." << endl;
		cin >> chose;
		cout << endl;
		switch (chose) {
		case 1: {
			float x;
			cout << "Enter the value of x : ";
			cin >> x;
			cout <<"Y = " << evalutesTheY(x) << endl;
			break;
		}
		case 2: {
			char oper;
			double num1, num2;
			bool yes = true;


			while (yes) {
				Enter(num1, num2, oper);
				cout << Calculator(num1, num2, oper) << endl;
				end(yes);
			}
			cout << "good bye!!!" << endl;
			break;

		}
		case 3: {
			char ch;
			cout << "Please, Enter a character : ";
			cin >> ch;
			isSmale(ch);
			break;
		}
		default: {
			cout << "wrong value Enter form 1 to 3 " << endl;
			break;
		}

		}// for switch 
		cout << endl;
	}// for while(ture)
	return 0;
}// for main 