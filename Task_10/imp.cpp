#include "Header.h"


void print(int a[], int size) {
	for (int i = 0; i < size; i++) {
		cout << a[i] << ' '; 
	}
}


int countWords(const char ch[]) {

	int count = 0;

	for (int i = 0; ch[i] != '\0'; i++) {
		if (ch[i] == ' ')
			count++;
	}

	return count+1;
}

void CapitalizeStatement(char ch[]) {
	ch[0] = toupper(ch[0]);
	for (int i = 0; ch[i] != '\0'; i++) {
		if (ch[i] == ' ') {
			ch[i+1] = toupper(ch[i + 1]);
		}

	}

}

void print2DArray(const int a[][2], const int r, const int c) {

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}
}

void SumRows(const int a[][2], const int r, const int c) {
	int sum[3] = { 0,0,0 };
	for (int i = 0;i <r ; i++) {
		for (int j = 0; j < c; j++) {
			sum[i] += a[i][j];
		}
	}
	print(sum, 3);

}




