#include <iostream>
#include <string>
#include <cstring>
using namespace std;

string Rim_number[] = { "M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
const int Number[] = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

string Copy(string line2, int first, int second) {
	string line = line2;
	line2 = "";
	for (; first <= second; first++) {
		line2 += line[first];
	}
	return line2;
}

string Norm_to_Rim(int n) {
	string resalt = "";
	int i = 0;
	while (n > 0) {
		while (Number[i] <= n) {
			resalt += Rim_number[i];
			n -= Number[i];
		}
		i++;
	}
	return resalt;
}

int Rim_to_Norm(string s) {
	int resalt = 0;
	int i = 0;
	while (!s.empty()) {
		while (Rim_number[i] == Copy(s, 0, Rim_number[i].size()-1)) {
			s = Copy(s,Rim_number[i].size(), s.length()-1);
			resalt += Number[i];
			if (s.empty()) {
				break;
			}
		}
		i++;
	}
	return resalt;
}

int main() {
	string input;
	string tmp1 = "", tmp2 = "";
	int sum = 0;
	cin >> input;
	int i;
	for (i = 0; i < input.size(); i++) {
		if (input[i] == '+') {
			tmp1 = Copy(input, 0, i - 1);
			tmp2 = Copy(input, i + 1, input.size() - 1);
			break;
		}
	}
	sum = Rim_to_Norm(tmp1) + Rim_to_Norm(tmp2);
	cout << Norm_to_Rim(sum);
	return 0;
}