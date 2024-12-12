#include <iostream>
using namespace std;
int main()
{
    int a[10];
    cout << "ÇëÊäÈë10¸öÊý:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 10; i++)
    {
        bool b = true;
        for (int c = 0; c < i; c++)
        {
            if (a[i] == a[c])
            {
                b = false;
                break;
            }
        }
        if (b)
        {
            cout << a[i]<<" ";
        }
    }
    system("pause");
    return 0;
}