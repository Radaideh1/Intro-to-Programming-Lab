#include "Header.h"




int main() {
	
	char ch[] = "abdullah mohammad radaideh";
	int A[3][2] = {
		{1,2},
		{3,4},
		{5,6}
	};


	while (true) {

		int q;
		cout << "1.Count Words\n2.Capitalize Statement\
\n3.Print 2D array.\n4.Sum of each row\n5.Exit." << endl; cin >> q;
		cout << "\n\n";

		switch (q) {
		case 1: {

			cout << "The number of Words in this text is : " << countWords(ch) << endl;
			break;
		}// case 1 
		case 2: {
			cout << "text before be Capialize for the first char : " << ch << endl;
			CapitalizeStatement(ch);
			cout << "After " << ch << endl;
			break;
		}// case 2 
		case 3: {
			cout << "Print 2D Array : " << endl;
			print2DArray(A, 3, 2);
			break;
		}
		case 4: {
			cout << "Sum of each row  = " << endl;
			SumRows(A, 3, 2);
			break;
		}
		case 5: {
			cout << "Good bye !!!!!" << endl;
			return 0;
		}
		default: {
			cout << "Wrong Value Enter Number between 1 to 5 pl" << endl;
			break;
		}
		}// for switch

		cout << "\n\n";
	}// for While

	
	

	return 0;
}