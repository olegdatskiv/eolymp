##include <iostream>
using namespace std;
int main()
{
	short a,b,c;
	cin>>a;
	if(a>=10&&a<=99)
	{
		b=a%10;
		c=a/10;
		cout<<c<<" "<<b;
	}
	return 0;
}