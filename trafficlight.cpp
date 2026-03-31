#include <iostream>
#include <string>
using namespace std;

void showLight(string light) {
    cout << "\nCurrent Light: " << light << endl;
}

int main() {
    int choice;
    string currentLight = "RED";

    do {
        showLight(currentLight);

        cout << "\n--- Traffic Light Control System ---\n";
        cout << "1. Next Light\n";
        cout << "2. Pedestrian Crossing Request\n";
        cout << "3. Emergency Mode\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            if (currentLight == "RED") {
                currentLight = "GREEN";
            }
            else if (currentLight == "GREEN") {
                currentLight = "YELLOW";
            }
            else if (currentLight == "YELLOW") {
                currentLight = "RED";
            }
            break;

        case 2:
            cout << "\nPedestrian crossing requested." << endl;
            if (currentLight == "GREEN") {
                currentLight = "YELLOW";
                cout << "Preparing to stop traffic..." << endl;
            }
            else {
                cout << "Pedestrians can cross when safe." << endl;
            }
            break;

        case 3:
            cout << "\nEmergency detected! Switching to RED." << endl;
            currentLight = "RED";
            break;

        case 4:
            cout << "Exiting program." << endl;
            break;

        default:
            cout << "Invalid choice." << endl;
        }

    } while (choice != 4);

    return 0;
}