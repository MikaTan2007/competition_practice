#include <iostream>
using namespace std;

int main() {
    string string_input;
    cin >> string_input;

    if (string_input.length() == 1) {
        cout << string_input;
        return 0;
    }

    int one_counter = 0;
    int two_counter = 0;
    int three_counter = 0;

    int i;
    for (i = 0; i < string_input.length(); i++) {
        if (string_input[i] == '1') {
            one_counter += 1;
        } else if(string_input[i] == '2' ) {
            two_counter += 1;
        } else if (string_input[i] == '3') {
            three_counter += 1;
        }
    }

    string output;
    i = 0;
    for (i = 0; i < one_counter; i++) {
        output += "1+";
    }
    i = 0;
    for (i = 0; i < two_counter; i++) {
        output += "2+";
    }
    i=0;
    for (i = 0; i < three_counter; i++) {
        output += "3+";
    }
    output.erase(output.begin() + output.length()-1);

    cout << output;
} 