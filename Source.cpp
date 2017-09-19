#include <iostream>
#include <math.h>
#pragma warning( disable : 4996 )
using namespace std;


int main()
{
	freopen("Input.txt", "rt", stdin);
	freopen("Output.txt", "w+t", stdout);
	long long n;
	while (cin >> n)
	{
		if (!n)
			break;
		double x = sqrt(n);
		if (pow((int)x, 2) == n)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	return 0;
}