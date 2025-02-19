#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    long long n;
    long long m;
    long long a;

    cin >> n >> m >> a;

    double x_component = ceil(static_cast<double>(n) / a);
    double y_component = ceil(static_cast<double>(m) / a);

    long long answer = x_component * y_component;
    cout << answer;
}