// https://atcoder.jp/contests/abc156/tasks/abc156_c
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int coordinates[N];

    int i;
    for (i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        coordinates[i] = x;
    }

    long long min = 1000000000000;
    int l;
    for (l = 1; l < 101; l++)
    {
        long long current_min = 0;
        long long z;
        for (z = 0; z < N; z++)
        {
            current_min += (coordinates[z] - l) * (coordinates[z] - l);
        }

        if (current_min < min)
        {
            min = current_min;
        }
    }
    cout << min;
}