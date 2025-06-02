#include <iostream>
using namespace std;

int main() 
{
    system("color fc");

    int floors;
    int rooms, totalrooms = 0, totalocc = 0, occupied, unoccupied;
    int maxOccupied = 0, maxFloor = 0;

    cout << "Enter the number of floors in the hotel: ";
    cin >> floors;

    if (floors > 1) {
        for (int x = 1; x <= floors; x++) {
            if (x == 13)
                continue;

            cout << "Floor " << x << ":" << endl;
            cout << "Total rooms: ";
            cin >> rooms;

            if (rooms > 10) {
                totalrooms += rooms;
                cout << "Occupied rooms: ";
                cin >> occupied;

                if (occupied > rooms) {
                    cout << "Occupied rooms cannot exceed total rooms. Try again.\n";
                    x--;
                    continue;
                }

                totalocc += occupied;

                if (occupied > maxOccupied) {
                    maxOccupied = occupied;
                    maxFloor = x;
                }

                cout << "\n";
            } else {
                cout << "Rooms on a floor should be more than 10.\n";
                x--;
            }
        }

        unoccupied = totalrooms - totalocc;
        cout << "\nTotal rooms in the Hotel: " << totalrooms << endl;
        cout << "Total Occupied rooms: " << totalocc << endl;
        cout << "Total Unoccupied rooms: " << unoccupied << endl;
        
        float occupancyRate = totalocc/ totalrooms) * 100;
        cout << "Occupancy Rate: " << occupancyRate << "%\n";

        cout << "Floor with highest occupancy: Floor " << maxFloor << " with " << maxOccupied << " occupied rooms.\n";
    } else {
        cout << "Floors should be more than 1.";
    }

    return 0;
}
