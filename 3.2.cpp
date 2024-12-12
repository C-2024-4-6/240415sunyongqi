#include<iostream>
using namespace std;
bool is_prime(int a)
{
	bool b = true;
	for (int i = 2; i < a; i++) {
		if (a % i == 0) {
			b = false;
			break;
		}
	}
	return b;
}
int main()
{
	int i = 0, c = 2;
	do {
		if (is_prime(c)) {
			cout << c << " ";
			i++;
			if (i % 10 == 0) {
				cout << endl;
			}
		}
		c++;
	} while (i < 200);
}