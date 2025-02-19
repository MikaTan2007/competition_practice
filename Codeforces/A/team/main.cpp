/*
One day three best friends Petya, Vasya and Tonya decided to form a team and take part in programming contests. Participants are usually offered several problems during programming contests. Long before the start the friends decided that they will implement a problem if at least two of them are sure about the solution. Otherwise, the friends won't write the problem's solution.

This contest offers n problems to the participants. For each problem we know, which friend is sure about the solution. Help the friends find the number of problems for which they will write a solution.
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int pass_problems = 0;

    int i;
    int counter = 0;
    for (i = 0; i < n; i++)
    {
        int x;
        int y;
        int z;

        cin >> x;
        cin >> y;
        cin >> z;

        int arr[3] = {x,
                      y,
                      z};

        int total = arr[0] + arr[1] + arr[2];

        if (total >= 2)
        {
            counter += 1;
        }
    }

    cout << counter;
}