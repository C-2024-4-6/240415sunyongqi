#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	cout << "请输入三角形三边的长：" << endl;
	cin >> a >> b >> c;
	if (a + b > c && b + c > a && a + c > b) {
		d = a + b + c;
		cout << "该三角形的周长是：" << d << endl;
		if (a == b || b == c || a == c) {
			cout << "该三角形是等边三角形" << endl;
		}
		else {
			cout << "该三角形不是等边三角形" << endl;
		}
	}
	else {
		cout << "这不是一个三角形" << endl;
	}
	system("pause");
	return 0;
}