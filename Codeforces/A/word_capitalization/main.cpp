#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    cin >> input;
    string array_input[input.length()];

    int i;

    for (i = 0; i < input.length(); i++) {
        if (i == 0) {
            array_input[i] = toupper(input[i]);
        }
        else {
            array_input[i] = input[i];
        }
    }

    string final;

    int j;
    for (j = 0; j < input.length(); j++) {
        final += array_input[j];
    }

    cout << final;
    
}