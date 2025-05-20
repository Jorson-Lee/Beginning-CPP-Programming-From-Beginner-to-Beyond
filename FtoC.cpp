#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    cout << "Celsius " << " Fast Convert " << " Fahrenheit" << endl;
    for (double c = -10; c < 101; c++) {
        cout << left << setw(8) << c << setw(8) << c * 2 + 30 << setw(8) << c * (9.0 / 5) +32 << endl;
    }
}
