#include <iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	int i;
	for (i = 0; i < size1; i++)
	{
		list3[i] = list1[i];
	}
	for (i = 0; i < size2; i++)
	{
		list3[size1 + i] = list2[i];
	}
	bool c;
	int ch;
	do
	{
		c = false;
		for (int i = 0; i < (size1+size2-1); i++)
		{
			if (list3[i] > list3[i+1])
			{
				ch = list3[i];
				list3[i] = list3[i + 1];
				list3[i + 1] = ch;
				c = true;
			}
		}
	} while (c);
}
int main()
{
	int size1, size2, i;
	int list1[80] = { 0 }, list2[80] = { 0 }, list3[160] = { 0 };
	cout << "请依次输入数组1的大小：" << endl;
	cin >> size1;
	cout << "请输入数组1的元素：" << endl;
	for (i = 0; i < size1; i++)
	{
		cin >> list1[i];
	}
	cout << "请依次输入数组2的大小：" << endl;
	cin >> size2;
	cout << "请输入数组2的元素：" << endl;
	for (i = 0; i < size2; i++)
	{
		cin >> list2[i];
	}
	merge(list1, size1, list2, size2, list3);
	for (i = 0; i < (size1 + size2); i++)
	{
		cout << list3[i] << " ";
	}
	system("pause");
}