#include<iostream>
using namespace std;
int main()
{
	int a, b, i;
	cout << "������ͼ��������" << endl;
	cin >> a;
	for (b = 1; b <= a; b++) {
		for (i = 0; i < b; i++) {
			cout << "*";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}