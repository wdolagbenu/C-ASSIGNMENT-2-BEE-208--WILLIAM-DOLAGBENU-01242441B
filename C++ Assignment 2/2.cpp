#include <iostream>
using namespace std;

int main() {
    float ratedCurrent, measuredCurrent;

    cout << "Enter rated current: ";
    cin >> ratedCurrent;

    cout << "Enter measured current: ";
    cin >> measuredCurrent;

    if (measuredCurrent > ratedCurrent)
        cout << "Overload detected. Circuit breaker should trip.";
    else
        cout << "Current is within safe limit.";

    return 0;
}