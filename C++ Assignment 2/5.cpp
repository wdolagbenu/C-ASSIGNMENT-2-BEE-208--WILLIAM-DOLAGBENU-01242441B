#include <iostream>
using namespace std;

int main() {
    int choice;
    float V, I, P, R, T, E;

    cout << "1. Calculate DC Power\n";
    cout << "2. Calculate Resistance\n";
    cout << "3. Calculate Energy Consumption\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Enter Voltage: ";
            cin >> V;
            cout << "Enter Current: ";
            cin >> I;
            P = V * I;
            cout << "Power = " << P << " W";
            break;

        case 2:
            cout << "Enter Voltage: ";
            cin >> V;
            cout << "Enter Current: ";
            cin >> I;
            R = V / I;
            cout << "Resistance = " << R << " Ohms";
            break;

        case 3:
            cout << "Enter Power: ";
            cin >> P;
            cout << "Enter Time: ";
            cin >> T;
            E = P * T;
            cout << "Energy = " << E << " Wh";
            break;

        default:
            cout << "Invalid Choice";
    }

    return 0;
}