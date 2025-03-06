#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    cin >> a >> b;

    int bigger = 0;
    int counter = 0;
    while (true)
    {
        a = a * 3;
        b = b * 2;
        counter += 1;
        if (a > b)
        {
            cout << counter;
            return 0;
        }
    }
}