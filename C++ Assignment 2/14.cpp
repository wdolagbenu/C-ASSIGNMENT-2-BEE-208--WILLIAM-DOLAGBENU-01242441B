#include <iostream>
using namespace std;

int main() {
    float temperature;
    float sum = 0, average;
    int count = 0;

    for(int i = 1; i <= 10; i++) {

        cout << "Enter temperature " << i << ": ";
        cin >> temperature;

        if(temperature < 0) {
            cout << "Invalid Reading" << endl;
            continue;
        }

        sum += temperature;
        count++;
    }

    if(count > 0) {
        average = sum / count;
        cout << "Average Temperature = "
             << average << " °C";
    }
    else {
        cout << "No valid temperature readings entered.";
    }

    return 0;
}