#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	long int m, n;
	string s;
	cin >> m >> n;
	m++;
	n++;
	long int **mass = new long int *[m];
	for (int i = 0; i < n; i++) {
		mass[i] = new long int[n];
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			mass[i][j] = 0;
		}
	}
	for (int i = m - 1; i >= 1; i--) {
		for (int j = 1; j < n; j++) {
			cin >> mass[i][j];
		}
	}
	for (int i = 1; i < m; i++) {
		mass[i][1] = mass[i][1] + mass[i - 1][1];
	}
	for (int j = 1; j < n; j++) {
		mass[1][j] = mass[1][j] + mass[1][j - 1];
	}
	for (int i = 2; i < m; i++) {
		for (int j = 2; j < n; j++) {
			mass[i][j] = mass[i][j] + max(mass[i - 1][j], mass[i][j - 1]);
		}
	}
	int i = m - 1, j = n - 1;
	s = "";
	do {
		if (mass[i][j - 1] == mass[i - 1][j]) {
			if (i > 1) {
				s = 'F' + s;
				i--;
			}
			else
			{
				if (j > 1) {
					s = 'R' + s;
					j--;
				}
			}
		}
		if (mass[i][j - 1] < mass[i - 1][j]) {
			if (i > 1) {
				s = 'F' + s;
				i--;
			}
		}
		else {
			if (j > 1) {
				s = 'R' + s;
				j--;
			}
		}
	} while (i != 1 || j != 1);
	cout << s;
	return 0;
}