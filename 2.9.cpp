#include<iostream>
using namespace std;
int main()
{
	int a = 1, b, c = 0;
	for (b = 0;;b += a) {
		a *= 2;
		if (b + a > 100) {
			break;
		}
		c++;
	}
	cout << "平均每天花了" << b * 0.8 / c << "元" << endl;
	return 0;
}