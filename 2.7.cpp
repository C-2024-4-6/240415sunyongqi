#include<iostream>
using namespace std;
int main()
{
	int a, b, i;
	cout << "请输入图形行数：" << endl;
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