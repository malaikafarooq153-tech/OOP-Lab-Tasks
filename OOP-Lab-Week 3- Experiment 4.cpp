#include <iostream>
#include <string>

using namespace std;
class Car {
private:
    int yearModel;
    string Company;
    int Speed;

public:
    Car(int year, string comp) {
        yearModel = year;
        Company = comp;
        Speed = 0; 
    }

    void setYearModel(int year) {
        yearModel = year;
    }

    void setCompany(string comp) {
        Company = comp;
    }

    void setSpeed(int s) {
        Speed = s;
    }

    int getYearModel() {
        return yearModel;
    }

    string getCompany() {
        return Company;
    }

    int getSpeed() {
        return Speed;
    }

    void accelerate() {
        Speed += 5;
    }

    void brake() {
        if (Speed >= 5) {
            Speed -= 5;
        } else {
            Speed = 0; 
        }
    }
};

int main() {
    Car myCar(2024, "Toyota");

    cout << "Car Details: " << myCar.getYearModel() << " " << myCar.getCompany() << "\n";
    cout << "Accelerating..." << endl;
    for (int i = 1; i <= 5; i++) {
        myCar.accelerate();
        cout << "Call " << i << ": Current speed = " << myCar.getSpeed() << " mph" << endl;
    }

    cout << "\n-----------------------------\n";
    cout << "Braking..." << endl;
    for (int i = 1; i <= 5; i++) {
        myCar.brake();
        cout << "Call " << i << ": Current speed = " << myCar.getSpeed() << " mph" << endl;
    }

    return 0;
}
