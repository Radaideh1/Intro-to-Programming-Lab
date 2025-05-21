#include "Header.h"

int main() {
	int q;
	
	while (true) {

		cout << "1)Print Multiles of X\n2)Count number of \
letters and digits.\n3)Calculate Series.\n4)Exit.\nPlese\
 Enter your choice: "; 

		cin >> q;
		switch (q) {
		case 1: {
			int x, y;
			cout << "Enter the X and Y here: ";
			cin >> x >> y;
			MultipleOfX(x, y);
			break;
		}// for Case 1.
		case 2: {
			char ch;
			cin >> ch;
			cout << NumberOfLetters(ch);
			break;
		}// for case 2.
		case 3: {
			int n;
			cout << "Enter the n here : ";
			cin >> n;
			cout << CalculateSeries(n);
			break;
		}// for case 3.
		case 4: {
			cout << "godBye!!" << endl;
			return 0;
		}
		default: {
			cout << "You Enter the wrong Value !!" << endl;
		
			break;
		}
		}// for switch.
		cout << endl;
	}// for while(True)
	

	return 0;
}// for function of main