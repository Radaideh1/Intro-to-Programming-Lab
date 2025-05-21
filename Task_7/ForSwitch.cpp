#include "Header.h"

void Switch_qC1(int qC1) {

	switch (qC1) {
	case 1: {
		int number;
		cout << "Enter the number here : "; cin >> number;
		cout << CalculateMateh(number) << endl;
		break;// ea
	}// case 1
	case 2: {
		double base, exp;
		cout << "Enter the Base and exp here : "; cin >> base >> exp;
		cout << CalculateMeth(base, exp) << endl;
		break;// ea
	}// case 2
	case 3: {
		char a, b;
		cout << "Enter the 2 char here" << endl;
		cout << "a : "; cin >> a; cout << "b : "; cin >> b;
		SwapCharacters(a, b);
		cout << "a now is : " << a << "\nAnd b now is : " << b << endl;
		break;// ea
	}// case 3
	case 4: {
		int dailyFee, days;
		cout << "Enter the daily Fee for empl and who much day he go to work !!"; cin >> dailyFee >> days;
		cout << CalculateSalary(dailyFee, days) << endl;
		break;// ea
	}// case 4
	case 5: {
		int NN;
		cout << "Enter the end value here : "; cin >> NN;
		cout << RecursiveSum(NN) << endl;
		break;
	}// case 5
	}// switch qC1
}


void Switch_qC2(int qC2) {
	switch (qC2) {
	case 1: {
		double base, height;
		cout << "Enter the base and height here : " << endl;
		cout << "The Base is : "; cin >> base;
		cout << "The Height is : "; cin >> height;
		cout << area(base, height);
		break;
	}// case 1 qC2
	case 2: {
		double radius;
		cout << "Enter the radius here : "; cin >> radius;
		cout << area(radius) << endl;
		break;
	}
	case 3: {
		double radius, height;
		cout << "Enter the redius and height here : " << endl;
		cout << "Radius = "; cin >> radius;
		cout << "Height = "; cin >> height;
		cout << Volume(radius, height) << endl;
		break;
	}
	}// for switch



}


void Switch_qC3(int qC3) {

	switch (qC3) {
	case 1: {
		int lenght;
		cout << "Enter the lenght here : "; cin >> lenght;
		cout << ThreeDVolum(lenght) << endl;
		break;
	}
	case 2: {
		double radius, height;
		cout << "Enter the radius and height here ." << endl;
		cout << "Radius = "; cin >> radius;
		cout << "Height = "; cin >> height;
		cout << ThreeDVolume(radius, height) << endl;
		break;
	}
	case 3: {
		double a, b, sum, diff, prod, quot;
		cout << "Enter the number [a] and number [b] here : "; cin >> a >> b;
		Calculator(a, b, sum, diff, prod, quot);
		break;
	}

	}// for swithc qC3
}


