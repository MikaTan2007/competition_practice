#include <iostream>
using namespace std;

int main() {
    string s1;
    string s2;
    cin >> s1 >> s2;

    int oysters[4] = {1,2,3,4};

    if (s1 == "fine") {
        oysters[0] = 0;
        oysters[1] = 0;
    }
    if (s2 == "fine") {
        oysters[0] = 0;
        oysters[2] = 0;
    }

    int i = 0;
    for (i = 0; i < 4; i++) {
        if(oysters[i] != 0) {
            cout << i + 1;
            return 0;
        }
    }
}