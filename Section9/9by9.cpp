#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    for (int i = 1; i < 10; i++) {
        for (int j = 2; j < 6; j++) {
            cout << j << "*" << i << "=" << setw(2) << j*i << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 1; i < 10; i++) {
        for (int j = 6; j < 10; j++) {
            cout << j << "*" << i << "=" << setw(2) << j*i << " ";
        }
        cout << endl;
    }

}
/*
2 * 1 3 * 1~ 5 * 1
|
2 * 9 ~ 5 * 9


*/

