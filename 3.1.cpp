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
	cout << "��������������" << endl;
	cin >> a >> b;
	xiao(a, b, c);
	da(a, b, c, d);
	cout << a << "��" << b << "����������ǣ�" << c << endl;
	cout << a << "��" << b << "����С�������ǣ�" << d << endl;
	system("pause");
	return 0;
}