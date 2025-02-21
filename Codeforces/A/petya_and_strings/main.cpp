#include <iostream>
#include <string>
using namespace std;

int main()
{
    string x, y;
    cin >> x >> y;

    char order[26] = {
        'a',
        'b',
        'c',
        'd',
        'e',
        'f',
        'g',
        'h',
        'i',
        'j',
        'k',
        'l',
        'm',
        'n',
        'o',
        'p',
        'q',
        'r',
        's',
        't',
        'u',
        'v',
        'w',
        'x',
        'y',
        'z'};

    int i;

    for (i = 0; i < x.length(); i++)
    {
        if (tolower(x[i]) != tolower(y[i]))
        {
            int l = 0;
            int x_value = 0;
            int y_value = 0;
            for (l = 0; l < 26; l++)
            {
                if (order[l] == tolower(x[i]))
                {
                    x_value += (l + 1);
                }
                else if (order[l] == tolower(y[i]))
                {
                    y_value += (l + 1);
                }
            }

            if (x_value > y_value)
            {
                cout << 1;
                return 0;
            }
            else if (x_value < y_value)
            {
                cout << -1;
                return 0;
            }
        }
    }
    cout << 0;
}