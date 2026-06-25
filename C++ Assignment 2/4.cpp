#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "1. Resistor\n";
    cout << "2. Capacitor\n";
    cout << "3. Diode\n";
    cout << "4. Transistor\n";
    cout << "5. LED\n";

    cout << "Enter choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Resistor: Used to limit current in a circuit.";
            break;

        case 2:
            cout << "Capacitor: Stores electrical charge.";
            break;

        case 3:
            cout << "Diode: Allows current flow in one direction.";
            break;

        case 4:
            cout << "Transistor: Used for switching and amplification.";
            break;

        case 5:
            cout << "LED: Emits light when current flows.";
            break;

        default:
            cout << "Invalid Selection";
    }

    return 0;
}