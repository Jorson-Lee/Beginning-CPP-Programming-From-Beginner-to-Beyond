#include <cctype>
#include <iostream>
#include <string>
using namespace std;
int main() {
    string input;
    getline(cin, input);
    for (size_t i = 0; i < input.size(); i++) {
        if (input[i] == ' ' || input[i] == ',') {
            input[i + 1] = toupper(input[i + 1]);
        }
    }
    cout << input ;
}
