#include<iostream>
using namespace std;
int main()
{
	int v;
	char a;
	cout << "ÇëÊäÈëÒ»¸ö×ÖÄ¸£º" << endl;
	cin >> a;
	v = static_cast<int>(a);
	if (v > 90) {
		v -= 32;
		cout << static_cast<char>(v) << endl;
	}
	else {
		cout << v << endl;
	}
	system("pause");
	return 0;
}