#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
	int a, c;
	double d;
	char b;
	cout << "��ֱ��������ֺ������" << endl;
	cout << fixed << setprecision(10);
	cin >> a >> b >> c;
	switch (b) {
	case'+':
		cout << a + c << endl;
		break;
	case'-':
		cout << a - c << endl;
		break;
	case'*':
		cout << a * c << endl;
		break;
	case'/':
		if (c != 0) {
			cout << a / c << endl;
		}
		else {
			cout << "��������Ϊ0��" << endl;
		}
		break;
	case'%':
		if (c != 0) {
			cout << a % c;
		}
		else {
			cout << "��������Ϊ0��" << endl;
		}
		break;
	default: 
		cout << "����������" << endl;
	}
}