#include<iostream>
using namespace std;
int main()
{
	int a, b, c, i;
	cout << "请输入两个整数：" << endl;
	cin >> a >> b;
	for (i = 1; i < a; i++) {
		if (a % i == 0 && b % i == 0) {
			c = i;
		}
	}
	cout << a << "和" << b << "的最小公因数是" << c << endl;
	cout << a << "和" << b << "的最大公倍数是" << a * b / c << endl;
	system("pause");
	return 0;
}