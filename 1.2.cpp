#include<iostream>
using namespace std;
int main()
{
	const double pi = 3.1415926;
	double b;
	int h, w;
	cout << "请输入圆锥的高：";
	cin >> h;
	cout << "请输入圆锥的底面半径：";
	cin >> w;
	b = h * h * pi * h / 3;
	cout << "圆锥的体积是" << b << endl;
	return 0;
}