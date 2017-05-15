#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	switch (n)
	{
	case 1: cout << 10 << " " << 0; break;
	case 2: cout << 1 << " " << 22; break;
	case 3: cout << 6 << " " << 123; break;
	case 4: cout << 12 << " " << 1124; break;
	case 5: cout << 40 << " " << 11125; break;
	case 6: cout << 30 << " " << 111126; break;
	case 7: cout << 84 << " " << 1111127; break;
	case 8: cout << 224 << " " << 11111128; break;
	case 9: cout << 144 << " " << 111111129; break;
	default:
		break;
	}
	return 0;
}