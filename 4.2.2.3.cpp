#include<iostream>
using namespace std;
void lev(int* a, int l)
{
	bool b = false;
	do {
		b = false;
		for (int i = 0; i < l - 1; i++) {
			if (a[i] > a[i + 1]) {
				int c = a[i];
				a[i] = a[i + 1];
				a[i + 1] = c;
				b = true;
			}
		}
	} while (b);
}
void main()
{
	int l;
	cout << "�����������С��" << endl;
	cin >> l;
	int* list = new int[l];
	cout << "�������������Ԫ�أ�" << endl;
	for (int i = 0; i < l; i++) {
		cin >> list[i];
	}
	lev(list,l);
	for (int i = 0; i < l; i++) {
		cout << list[i] << " ";
	}
	delete[] list;
}