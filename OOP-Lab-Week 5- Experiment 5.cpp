#include <iostream>
using namespace std;

class Room {
    double width;

public:
    void setWidth(double w) {
        width = w;
    }

    friend void printWidth(Room);
};

void printWidth(Room r) {
    cout << "Width of room = " << r.width << endl;
}

int main() {
    Room room;
    double w;

    cout << "Enter width: ";
    cin >> w;

    room.setWidth(w);
    printWidth(room);

    return 0;
}