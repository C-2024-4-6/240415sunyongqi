#include <iostream>
using namespace std;

void swap(double& x, double& y) {
    int temp = x;
    x = y;
    y = temp;
}

void rise(double* a)
{
    bool c;
    do
    {
        c = false;
        for (int i = 0; i < 9; ++i)
        {
            if (a[i] > a[i + 1])
            {
                swap(a[i], a[i + 1]);
                c = true;
            }
        }
    } while (c);
}
void fall(double* a)
{
    bool c;
    do
    {
        c = false;
        for (int i = 0; i < 9; ++i)
        {
            if (a[i] < a[i + 1])
            {
                swap(a[i], a[i + 1]);
                c = true;
            }
        }
    } while (c);
}

int main()
{
    cout << "ÇëÊäÈë10¸öÊý" << endl;
    double a[10];
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }
    rise(a);
    for (int j = 0; j < 10; j++) {
        cout << a[j]<<" ";
    }
    cout << endl;
    fall(a);
    for (int j = 0; j < 10; j++) {
        cout << a[j]<<" ";
    }
    system("pause");
}