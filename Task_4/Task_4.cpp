#include <iostream>
using namespace std;

char ToSmall(char &check) {

	if (check >= 'A' && check <= 'Z')
		check += 32;

	return check;
}

void SumEvProOdd(int end) {

	int sumEven = 0, proOdd = 1;
	int odd = 3, even = 4;

	while (even <= end) {
		sumEven += even;
		even += 2;
	}
	cout << "The Sum of even values from " << even << " to " << end << " = " << sumEven << endl;

	while (odd <= end) {
		proOdd *= odd;
		odd += 2;
	}
	cout <<"The Product of odd values form " << odd << " to " << end << " = " << proOdd << endl;

}

double MaximumNumber(double max) {
	double num;
	for (int i = 0; i < 9; i++) {
		cin >> num;
		if (num > max)
			max = num;
	}
	return max;
}

int NumberOfVowels() {
	char ch;
	int numOfVow = 0;
	do {
		cin >> ch;
		ToSmall(ch);
		if (ch == 'a' || ch == 'o' || ch == 'e' || ch == 'i' || ch == 'u')
			numOfVow++;
	} while (ch != '!');
	return numOfVow;
}

void ClassAverage() {
	float allMark = 0;
	float mark;
	float markAverage;
	cout << "Welcome" << endl;
	for (int i = 0; i < 10; i++) {
		cout << "Enter marks: ";
		cin >> mark;
		allMark += mark;
	}
	markAverage = allMark / 10;
	cout << "Class Average is : " << markAverage;
	 
}

int main() {
	int q;
	cout << "1) sumEven&proOdd.\n2)Max Number between 10 rondom number.\
\n3)Number of Vowels\n4) Average to 10 students!!\n";
	cin >> q;


	switch (q) {
	case 1: {
		int numOfEnd;
		cout << "Set the final value : ";
		cin >> numOfEnd;
		SumEvProOdd(numOfEnd);
		break;
	}
	case 2: {
		double number, max;
		cin >> number;
		max = number;
		max = MaximumNumber(max);
		cout <<"The max is : " << max << endl;
		break;
	}
	case 3: {
		cout << NumberOfVowels() << endl;
		break;
	}
	case 4: {
		ClassAverage();
		break;
		}
	default: {
		cout << "You Enter the wrong value!!!" << endl;
		break;
	}
	}// for switch





}// for main