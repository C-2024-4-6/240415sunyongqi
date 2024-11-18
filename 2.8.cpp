#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a;
	long double b, c = 1.0;
	cin >> a;
	b = sqrt(a);
	do {
		c = (c + a / c) / 2;
	} while (abs(c - b) > (1e-10));
	cout << fixed << setprecision(10) << c << endl;
	system("pause");
	return 0;
}