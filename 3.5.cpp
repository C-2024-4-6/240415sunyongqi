#include<iostream>
using namespace std;
int main()
{
	int num = 1, day = 10;
	for (day; day > 1; day--) {
		num++;
		num *= 2;
	}
	cout << "第一天摘了" << num << "颗桃子" << endl;
	system("pause");
	return 0;
}