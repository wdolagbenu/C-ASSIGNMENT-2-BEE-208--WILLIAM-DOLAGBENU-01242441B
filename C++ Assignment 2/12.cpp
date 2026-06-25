#include <iostream>
using namespace std;

int main() {
    int choice;
    float V, I, P, T, R, E;

    do {
        cout << "\n1. Calculate Power";
        cout << "\n2. Calculate Resistance";
        cout << "\n3. Calculate Energy";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
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

            case 4:
                cout << "Exiting...";
                break;

            default:
                cout << "Invalid Choice";
        }

    } while(choice != 4);

    return 0;
}