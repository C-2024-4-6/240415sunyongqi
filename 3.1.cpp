#include<iostream>
using namespace std;
int a, b, c=0, d=0;
void xiao(int a, int b,int &c)
{
	int i;
	for (i = 1; i <= a; i++) {
		if ((a % i) == 0 && (b % i) == 0)c = i;
	}
}
void da(int a, int b,int&c,int&d)
{
	d = a * b / c;
}
int main()
{
	int a, b;
	cout << "请输入两个整数" << endl;
	cin >> a >> b;
	xiao(a, b, c);
	da(a, b, c, d);
	cout << a << "与" << b << "的最大公因数是：" << c << endl;
	cout << a << "与" << b << "的最小公倍数是：" << d << endl;
	system("pause");
	return 0;
}