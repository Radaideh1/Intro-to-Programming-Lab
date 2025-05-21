#include "Header.h"


int main() {
	
	int q;
	// Welcome !!
	WelAndPro(q);


	// switch the main 
	switch (q) {
	case 1: {
		int qC1;
		cout << "Welcom to \"Math Utilities\", Select the Operation you want :\
\n\n1- Computer Factorial.\n2- Compute Power.\n3- Swap Characters.\
\n4- Calculate Salary.\n5- Recursively Calculate sum from 1 to N."; cin >> qC1;

		Switch_qC1(qC1);
		break;
	}// for main case 1
	case 2: {
		int qC2;
		cout << "Welcom to \"Geometry Calculations\", Select the Operation you want : \n\n1- Area of Triangle.\
\n2- Area of Circle.\n3- Volume of Cylinder\n4- Sum int and double "; cin >> qC2;
		Switch_qC2(qC2);
		break;
	}// for main case 2 
	case 3: {
		int qC3;
		cout << "Welcom to \"3D Calculations\", Select the Operation you want :\
\n\n1- 3D Volume of Cube.\n2- Volume of pyramid.\n3- Calculates all four operation using references."; cin >> qC3;
		Switch_qC3(qC3);
		break;
	}//for main case 3
		  


	}// for swithc main


	




	return 0;
}// for main()