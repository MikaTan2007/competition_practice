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

    int x_value = 0;
    int i;
    for (i = 0; i < x.length(); i++)
    {
        int value = 0;
        for (value = 0; value < 26; value++)
        {
            if (tolower(x[i]) == order[value])
            {
                cout << "Character: " + to_string(x[i]) + "\n";
                cout << "Value: " + to_string(value + 1) + "\n";
                x_value += value + 1;
            }
        }
    }

    int y_value = 0;
    i = 0;
    for (i = 0; i < y.length(); i++)
    {
        int value = 0;
        for (value = 0; value < 26; value++)
        {
            if (tolower(y[i]) == order[value])
            {
                cout << "Character: " + to_string(y[i]) + "\n";
                cout << "Value: " + to_string(value + 1) + "\n";
                y_value += value + 1;
            }
        }
    }

    cout << "X_Value" + to_string(x_value) + "\n";

    cout << "Y_Value" + to_string(y_value);

    if (x_value == y_value)
    {
        cout << 0;
    }
    else if (x_value > y_value)
    {
        cout << 1;
    }
    else
    {
        cout << -1;
    }
}