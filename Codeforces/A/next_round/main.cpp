#include <iostream>
using namespace std;

int main()
{
    int n;
    int k;

    scanf("%d %d", &n, &k);

    int place_array[n];
    int i;
    for (i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        place_array[i] = a;
    }

    int value = place_array[k - 1];

    int counter = 0;

    i = 0;
    for (i = 0; i < n; i++)
    {
        if (place_array[i] >= value and place_array[i] > 0)
        {
            counter += 1;
        }
    }

    cout << counter;
}