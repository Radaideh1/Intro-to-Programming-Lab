#include <iostream>
using namespace std;

int main() {
	while (true) {

		int check;
		cout << "1) F = x-y^3 + 4z + 10 .\n2)Print the entered characters in reverse.\
\n3)From Celsius to Kelvin." << endl;
		cin >> check;
		switch (check)
		{
		case 1: {

			int f, x, y, z;
			cout << "Plese enter the value of x,y,z : ";
			cin >> x >> y >> z;

			f = x - (y * y * y) + 4 * z + 10;
			cout << "The value of F = " << f << endl;
			break;
		}
		case 2: {
			char a, b, c, d;
			cout << "Entre 4 characters : ";
			cin >> a >> b >> c >> d;

			cout << d << "_" << c << "_" << b << "_" << a << endl;

			break;
		}
		case 3: {
			float k, c;
			cout << "Enter a temperature in Celsius : ";
			cin >> c;
			k = c + 273.15f;
			cout << "The temperature in Kelvin is " << k << endl;

			break;
		}
		default: {
			cout << "Error , Enter Number for 1 to 3 pl " << endl;
			break;
		}
		}



		cout << endl;
	}
	

	return 0;

}