#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    int t;
    string initial_order;
    cin >> n >> t >> initial_order;

    if (t > 1)
    {
        int i;
        for (i = 0; i < t - 1; i++)
        {
            int j = 0;
            for (j = 0; j < n - 1; j++)
            {
                if (initial_order[j] == 'B' and initial_order[j + 1] == 'G')
                {
                    initial_order[j] = 'G';
                    initial_order[j + 1] = 'B';
                }
            }
        }
    }
    else
    {
        int j = 0;
        for (j = 0; j < n - 1; j++)
        {
            if (initial_order[j] == 'B' and initial_order[j + 1] == 'G')
            {
                initial_order[j] = 'G';
                initial_order[j + 1] = 'B';
                j = j + 1;
            }
        }
    }

    cout << initial_order;
}