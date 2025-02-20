#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int matrix[5][5];

    int position_i;
    int position_j;

    int i;
    for (i = 0; i < 5; i++)
    {
        int j = 0;

        for (j = 0; j < 5; j++)
        {
            int x;
            cin >> x;
            if (x == 1)
            {
                position_i = i;
                position_j = j;
            }
            matrix[i][j] = x;
        }
    }

    // cout << to_string(position_i) + "\n" + to_string(position_j);
    int total_moves = abs(2 - position_i) + abs(2 - position_j);
    cout << total_moves;
}