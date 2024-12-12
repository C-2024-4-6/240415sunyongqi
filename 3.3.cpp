#include<iostream>
#include"mytemperature.h"
using namespace std;
int main()
{
	cout << "Celsius    Fahrenheit   |   Fahrenheit       Celsius" << endl;
	for (int i = 0; i <10; i++) {
		int c = 40 - i, f = 120 - 10 * i;
		cout << c << "\t";
		cout << celsius_to_fah(c) << "  |  ";
		cout << f << "\t";
		cout << fahrenheit_to_cels(f) << endl;
	}
}