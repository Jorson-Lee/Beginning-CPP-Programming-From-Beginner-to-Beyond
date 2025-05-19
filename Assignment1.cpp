#include <iostream>
#include <string>
using namespace std;
int main() {
    //Get input without space
    //Get input string lengh to determine how to draw pyramid
    //outter for-loop: loop until the length of string.length()-1
    //inner for-loop 1 :print string until level
    //inner for-loop 2 :print string backward until backward <=0
    string input;
    cout << "Enter a string to construct a pyramid!\n:";
    cin >> input;
    for (int level = 0; level < input.length(); level++) {
        //space = input.length()-level-1
        for (int i = level + 1 ; input.length() - i > 0; i++) {
            cout << " ";
        }
        for (int forward = 0; forward < level + 1; forward++) {
            cout << input.at(forward);
        }
        //level = 0,backward = 0;
        //level = 1,backward = 1 input.at(0)
        //level = 2,backward = 2 input.at(1),input.at(0)
        for (int backward = level; backward > 0; backward--) {
            cout << input.at(backward - 1);
        }
        cout << endl;
    }
}
