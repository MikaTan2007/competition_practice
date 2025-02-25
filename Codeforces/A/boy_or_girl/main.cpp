#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    string username;
    cin >> username;

    unordered_set<char> uniqueChars(username.begin(), username.end());

    if (uniqueChars.size() % 2 == 0) {
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }
}