#include <iostream>
using namespace std;

int main() {
    int power;
    int totalLoad = 0;

    while (totalLoad <= 3000) {
        cout << "Enter appliance power (W): ";
        cin >> power;

        totalLoad += power;

        if (totalLoad > 3000) {
            cout << "Load limit exceeded" << endl;
            break;
        }
    }

    cout << "Final total load = " << totalLoad << " W" << endl;

    return 0;
}