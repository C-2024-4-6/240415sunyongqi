#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	cout << "���������������ߵĳ���" << endl;
	cin >> a >> b >> c;
	if (a + b > c && b + c > a && a + c > b) {
		d = a + b + c;
		cout << "�������ε��ܳ��ǣ�" << d << endl;
		if (a == b || b == c || a == c) {
			cout << "���������ǵȱ�������" << endl;
		}
		else {
			cout << "�������β��ǵȱ�������" << endl;
		}
	}
	else {
		cout << "�ⲻ��һ��������" << endl;
	}
	system("pause");
	return 0;
}