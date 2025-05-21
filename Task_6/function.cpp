#include "Header.h"


bool IsSmall(char ch) {
	return (ch >= 'a' && ch <= 'z') ? true : false;
	
}

void CalculateFunction(double start, double step, double end) {
	double F_x;
	cout << " x\t\t\tf(x)" << "\n---\t\t\t----\n";
	for (; start <= end; start += step) {
		F_x = start * sin(start);
		cout << start << "\t\t\t" << F_x << endl;
	}
}

float MinNumber(float first) {
	float next;
	float num;
	num = first;
	for (int i = 0; i < 2; i++) {
		cin >> next;
		if (next < num)
			num = next;
	}// for for 
	return num;
}

float CalcuFor(int T) {
	
	if (T == 1)
		return 1;
	else
		return (T * T + CalcuFor(T - 1));
}

float CalaEquation(int T) {
	return 2.5 * CalcuFor(T);
}



