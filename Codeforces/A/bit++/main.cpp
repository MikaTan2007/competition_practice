#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int initial_value = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        string input_operations = "";

        cin >> input_operations;

        if (input_operations[0] == '+' or input_operations[2] == '+')
        {
            initial_value += 1;
        }

        else
        {
            initial_value -= 1;
        }
    }

    cout << initial_value;
}