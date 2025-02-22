#include <iostream>
using namespace std;

int main()
{
    string username;
    cin >> username;

    int i;
    int counter = 0;
    for (i = 0; i < username.length(); i++)
    {
        int j = 0;
        int sub_counter = 0;
        for (j = 0; j < username.length(); j++)
        {
            if (username[j] == username[i])
            {
                sub_counter += 1;
            }
        }

        if (sub_counter <= 2)
        {
            counter += 1;
        }
    }
    cout << counter;
}