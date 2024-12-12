#include <iostream>
using namespace std;

int main()
{
	bool chest[100] = { false };
	int student = 1,i=0;
	for (; student <= 100; student++)
	{
		for (i = student-1; i < 100; i += student)
		{
			chest[i] = !chest[i];
		}
	}
	for (i = 0; i < 100; i++)
	{
		if (chest[i])
		{
			cout << i+1 << " ";
		}
	}
	system("pause");
}