#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float f, c;
	cout << "�����뻪���¶ȣ�" << endl;
	cin >> f;
	c = (f - 32) / 1.8;
	cout << fixed << setprecision(2);
	cout << "�����¶���" << c << endl;
	system("pause");
	return 0;
}