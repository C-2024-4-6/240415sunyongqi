#include<iostream>
#include<string>
#include<cstring>
using namespace std;
void count(const char s[], int counts[])
{
	int a;
	for (int i = 0; i < strlen(s); i++)
	{
		a = static_cast<int>(s[i]);
		if (a > 64 && a <= 90) {
			counts[a - 65]++;
		}
		if (a > 96 && a <= 122) {
			counts[a - 97]++;
		}
	}
	for (int i = 0; i < 26; i++) {
		if (counts[i] != 0) {
			cout << static_cast<char>(i+97) << ": " << counts[i] << " times" << endl;
		}
	}
}
int main()
{
	string str;
	int counts[26] = { 0 };
	cout << "ÇëÊäÈëÒ»¸ö×Ö·û´®£º" << endl;
	getline(cin, str);
	count(str.c_str(), counts);
}