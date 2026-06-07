#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class EmployeeWageCalculator {
private:
    int employeeID;
    double hourlyRate = 11.0;
    string days[5] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    int hours[5];
    int minutes[5];

public:
    void inputData() {
        cout << "Enter Employee ID (EID): ";
        cin >> employeeID;
        
        cout << "\nEnter work hours for each day:\n";
        for (int i = 0; i < 5; ++i) {
            cout << days[i] << " Hours: ";
            cin >> hours[i];
            cout << days[i] << " Minutes: ";
            cin >> minutes[i];
        }
    }

    void calculateAndDisplayWage() {
        int totalHours = 0;
        int totalMinutes = 0;

        for (int i = 0; i < 5; ++i) {
            totalHours += hours[i];
            totalMinutes += minutes[i];
        }

        totalHours += totalMinutes / 60;
        totalMinutes = totalMinutes % 60;

        double decimalHours = totalHours + (static_cast<double>(totalMinutes) / 60.0);
        double totalWage = decimalHours * hourlyRate;

        cout << "\n-----------------------------------------\n";
        cout << "            WAGE SUMMARY REPORT          \n";
        cout << "-----------------------------------------\n";
        cout << "Employee ID (EID)   : " << employeeID << endl;
        cout << "Total Work Time     : " << totalHours << " hours and " << totalMinutes << " minutes\n";
        cout << "Hourly Wage Rate    : " << hourlyRate << " EUR/hour\n";
        cout << "-----------------------------------------\n";
        cout << "TOTAL WEEKLY WAGE   : " << fixed << setprecision(2) << totalWage << " EUR\n";
        cout << "-----------------------------------------\n";
    }
};

int main() {
    EmployeeWageCalculator calc;
    calc.inputData();
    calc.calculateAndDisplayWage();
    return 0;
}
