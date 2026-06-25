#include <iostream>
using namespace std;

int main() {
    float current;
    int safe = 0, unsafe = 0;

    for(int i = 1; i <= 8; i++) {
        cout << "Enter current reading " << i << ": ";
        cin >> current;

        if(current <= 10)
            safe++;
        else
            unsafe++;
    }

    cout << "Safe Readings = " << safe << endl;
    cout << "Unsafe Readings = " << unsafe << endl;

    return 0;
}