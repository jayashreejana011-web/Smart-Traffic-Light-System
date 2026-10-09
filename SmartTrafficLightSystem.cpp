#include <iostream>
using namespace std;

int selectRoad(int road1, int road2, int road3, int road4,
               int amb1, int amb2, int amb3, int amb4) {

    // Ambulance has highest priority
    if (amb1 == 1)
        return 1;

    if (amb2 == 1)
        return 2;

    if (amb3 == 1)
        return 3;      

    if (amb4 == 1)
        return 4;

    // If no ambulance, select road with maximum vehicles
    int maxVehicles = road1;
    int selectedRoad = 1;

    if (road2 > maxVehicles) {
        maxVehicles = road2;
        selectedRoad = 2;
    }

    if (road3 > maxVehicles) {
        maxVehicles = road3;
        selectedRoad = 3;
    }

    if (road4 > maxVehicles) {
        maxVehicles = road4;
        selectedRoad = 4;
    }

    return selectedRoad;
}

int main() {
    int road1, road2, road3, road4;
    int amb1, amb2, amb3, amb4;

    cout << "Enter vehicles on Road 1: ";
    cin >> road1;
    cout << "Ambulance on Road 1? (1=Yes, 0=No): ";
    cin >> amb1;

    cout << "Enter vehicles on Road 2: ";
    cin >> road2;
    cout << "Ambulance on Road 2? (1=Yes, 0=No): ";
    cin >> amb2;

    cout << "Enter vehicles on Road 3: ";
    cin >> road3;
    cout << "Ambulance on Road 3? (1=Yes, 0=No): ";
    cin >> amb3;

    cout << "Enter vehicles on Road 4: ";
    cin >> road4;
    cout << "Ambulance on Road 4? (1=Yes, 0=No): ";
    cin >> amb4;

    int selectedRoad = selectRoad(
        road1, road2, road3, road4,
        amb1, amb2, amb3, amb4
    );

    cout << "\nGreen Light ON for Road "
         << selectedRoad << endl;

    if ((selectedRoad == 1 && amb1 == 1) ||
        (selectedRoad == 2 && amb2 == 1) ||
        (selectedRoad == 3 && amb3 == 1) ||
        (selectedRoad == 4 && amb4 == 1)) {

        cout << "Ambulance detected!" << endl;
        cout << "Ambulance has HIGH PRIORITY." << endl;
    }
    else {
        cout << "No ambulance detected." << endl;
        cout << "Road with highest traffic selected." << endl;
    }

    return 0;
}