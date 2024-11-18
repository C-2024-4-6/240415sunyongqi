#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float f, c;
	cout << "请输入华氏温度：" << endl;
	cin >> f;
	c = (f - 32) / 1.8;
	cout << fixed << setprecision(2);
	cout << "摄氏温度是" << c << endl;
	system("pause");
	return 0;
}