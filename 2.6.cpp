#include<iostream>
using namespace std;
int main()
{
	int a, b, c, i;
	cout << "����������������" << endl;
	cin >> a >> b;
	for (i = 1; i < a; i++) {
		if (a % i == 0 && b % i == 0) {
			c = i;
		}
	}
	cout << a << "��" << b << "����С��������" << c << endl;
	cout << a << "��" << b << "����󹫱�����" << a * b / c << endl;
	system("pause");
	return 0;
}