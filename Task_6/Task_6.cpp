#include "Header.h"

int main() {
	int q;
	while (true) {
		cout << "Main Menu\n-------------\n1- is Small.\n2- Calculate Function.\
\n3- Minimume Number.\n4- Calculate equation.\n5- Exit.\n";

		cin >> q;
		switch (q) {
		case 1: {
			char ch;
			cout << "Enter the Character Value here : ";
			cin >> ch;
			cout << IsSmall(ch) << endl;
			break;
		}// for case 1.
		case 2: {
			double start, step , end;

			cout << "Enter the Value of \"start\" and \"step\" and \"end\" here : " << endl;
			cout << "  start = "; cin >> start;
			cout << "  end = "; cin >> end;
			cout << "  step = "; cin >> step;
			CalculateFunction(start, step, end);
			break;
		}// for case 2.
		case 3: {
			float first;
			cout << "Enter the 3 number here : "; cin >> first;
			cout << "the Minumum number is : " << MinNumber(first) << endl;
			break;
		}// for case 3.
		case 4: {
			int T;
			cout << "Enter T here : "; cin >> T;
			cout << CalaEquation(T) << endl;
			break;
		}// for case 4.
		case 5: {
			cout << "GodBye!!!!" << endl;
			return 0;
		}// for case 5.
		default: {
			cout << "You Enter the wrong value !!";
			break;
		}
		}// for switch 
		cout << endl;

	}// for while(True)
	return 0;
}