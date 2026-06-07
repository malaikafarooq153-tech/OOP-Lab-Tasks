#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    void getData() {
        cout << "Enter distance (feet inches): ";
        cin >> feet >> inches;
    }

    double toMeters() {
        double totalInches = feet * 12 + inches;
        return totalInches * 0.0254; 
    }
};

class Triangle {
private:
    double base;
    double height;

public:
    void getData() {
        cout << "Enter base of triangle (meters): ";
        cin >> base;

        cout << "Enter height of triangle (meters): ";
        cin >> height;
    }

    double area() {
        return 0.5 * base * height;
    }
};

int main() {
    Distance d;
    Triangle t;

    d.getData();
    t.getData();

    cout << "\nDistance in meters = " << d.toMeters() << " m" << endl;
    cout << "Area of triangle = " << t.area() << " sq. meters" << endl;

    return 0;
}