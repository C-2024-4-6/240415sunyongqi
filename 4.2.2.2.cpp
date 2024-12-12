#include<iostream>
#include<string>
#include<cstring>
#include<cmath>
using namespace std;
int parseHex(const char* const hexString)
{
	int l = strlen(hexString), total = 0;
	for (int i = 0; i < l; i++) {
		int a = static_cast<int>(hexString[i]), d;
		if (a > 48 && a <= 58) {
			d = a - 48;
		}
		if (a > 64 && a <= 70) {
			d = a - 55;
		}
		total += d*pow(16,l-i-1);
	}
	return total;
}
void main()
{
	string str;
	cout << "请输入一个16进制数字：" << endl;
	getline(cin, str);
	cout << parseHex(str.c_str()) << endl;
}