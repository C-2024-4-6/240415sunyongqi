#include<iostream>
using namespace std;
int main()
{
	const double pi = 3.1415926;
	double b;
	int h, w;
	cout << "������Բ׶�ĸߣ�";
	cin >> h;
	cout << "������Բ׶�ĵ���뾶��";
	cin >> w;
	b = h * h * pi * h / 3;
	cout << "Բ׶�������" << b << endl;
	return 0;
}