#include <iostream>
#include <string>

using namespace std;

int main() {
	string number;
	cin >> number;
	int kol = 0;
	if(number.size()%2==1)
	{
    	for (int i = 0, j = number.size() - 1; i < number.size() / 2 + 1; i++) {
	    	if (number[i] == number[j]) {
		    	kol++;
		    }
		    j--;
	    }
	}
	else{
	    	for (int i = 0, j = number.size() - 1; i < number.size() / 2; i++) {
	    	if (number[i] == number[j]) {
		    	kol++;
		    }
		    j--;
	    }
	}
	cout << kol;
	//system("pause");
	return 0;
}