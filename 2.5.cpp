#include<iostream>
#include<string>
using namespace std;
int num[128] = { 0 };
int main()
{
	int i;
	string a;
	getline(cin, a);
	for (i = 0; i < a.size(); i++) {
		num[static_cast<int>(a[i])]++;
	}
	for (i = 0; i < 128; i++) {
		if (num[i] != 0) {
			cout << static_cast<char>(i) << "µÄÊýÁ¿£º" << num[i] << endl;
		}
	}
	return 0;
}