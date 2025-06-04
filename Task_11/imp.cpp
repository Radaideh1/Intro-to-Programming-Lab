#include "Header.h"


void part1() {

	// part 1
	int a;
	int* aPtr;
	a = 7;
	aPtr = &a;
	cout << "The address of a is : " << &a << "\nThe value of aPtr is : " << aPtr << endl;
	cout << "\n\nThe value of a is : " << a << "\nTge value of oa *aptr is : " << *aPtr << endl;
	cout << "\n\nShowing that * and & are inverses of each other.\n&*aPtr =  " << &*aPtr
		<< "\n*&aPtr = " << *&aPtr << endl;

}

void part2_1() {

	int val[5];
	for (int i = 0; i < 5; i++) {
		cout << "Enter the value : ";
		cin >> *(val + i);
	}
	int max1 = *val;
	for (int i = 1; i < 5; i++) {
		if (max1 < *(val + i)) {
			max1 = *(val + i);
		}
	}
	cout << "The max number is : " << max1 << endl;
	cout << "\n\n\n";
}

void part2_2() {


	int val2[5];
	int* ptr = val2;
	for (int i = 0; i < 5; i++) {
		cout << "Enter the value : ";
		cin >> *(ptr + i);
	}
	int max2 = *ptr;
	for (int i = 0; i < 5; i++) {
		if (max2 < *(ptr + i)) {
			max2 = *(ptr + i);
		}
	}
	cout << "The max number is : " << max2 << endl;
	cout << "\n\n\n";
}


int wordCount(const char s[]) {
	int count = 0;

	for (int i = 0; *(s + i) != '\0'; i++) {
		if (*(s + i) == ' ')
			count++;
	}
	return ++count;
}