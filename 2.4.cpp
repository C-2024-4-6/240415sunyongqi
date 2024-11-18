#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
	int a, c;
	double d;
	char b;
	cout << "请分别输入数字和运算符" << endl;
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
			cout << "除数不能为0！" << endl;
		}
		break;
	case'%':
		if (c != 0) {
			cout << a % c;
		}
		else {
			cout << "除数不能为0！" << endl;
		}
		break;
	default: 
		cout << "错误的运算符" << endl;
	}
}