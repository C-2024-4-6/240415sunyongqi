#include<iostream>
using namespace std;
int main()
{
	int num = 1, day = 10;
	for (day; day > 1; day--) {
		num++;
		num *= 2;
	}
	cout << "��һ��ժ��" << num << "������" << endl;
	system("pause");
	return 0;
}