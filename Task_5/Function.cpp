#include "Header.h";

void MultipleOfX(int X, int N) {
	if (N < 1) { return 0; };
	for (int i = X; i <= N; i += X) {
		cout << i << endl;
	}
}

int NumberOfLetters(char ch) {
	int count = 0;
	while (ch != '@') {
		if (isalpha(ch) || isdigit(ch))
			count++;
		cin >> ch;
	}
	return count;
}

double CalculateSeries(int n) {
	double value = 0;
	for (double x = 2; x <= n; x++) {
		value += (x * x * x) / (2 * x + 4);
	}
	return value;
}