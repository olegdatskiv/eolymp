#include <iostream>
#include <math.h>

using namespace std;

int main() {
	float x1, y1, r1, x2, y2, r2,f;
	cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
	float res = sqrtf(powf((x2 - x1), 2) + powf((y2 - y1), 2));
	 if (r2>r1)
    {
        f=r1;
        r1=r2;
        r2=f;
        f=x2;
        x1=x2;
        x2=f;
        f=y1;
        y1=y2;
        y2=f;
    }
	 if (x1 == x2&&y1 == y2&&r1 == r2) cout << "-1" << endl;
	 else
		 if (r1 + r2 == res || res == r1 - r2) cout << "1" << endl; else
			 if (r1 + r2<res || res<r1 - r2) cout << "0" << endl; else
				 cout << "2" << endl;
	return 0;
}