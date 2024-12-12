#include <iostream>
#include<string>
using namespace std;
int indexOf(const char* s1, const char* s2)
{
	int num = -1, i, t;
	for (i = 0; i < (sizeof(s2) / sizeof(s2[0])); i++)
	{
		for (t = 0; t < (sizeof(s1) / sizeof(s1[0])); t++)
		{
			if (s1[t] != s2[t + i])
			{
				break;
			}
		}
		if (t == (sizeof(s1) / sizeof(s1[0])))
		{
			num = i + 1;
			break;
		}
	}
	return num;
}

int main()
{
	string str1, str2;
	cout << "请输入第一个字符串：" << endl;
	getline(cin, str1);
	cout << "请输入第二个字符串：" << endl;
	getline(cin, str2);
	cout << indexOf(str1.c_str(), str2.c_str()) << endl;
}