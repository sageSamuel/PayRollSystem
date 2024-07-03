#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double hoursWorked, hourlyRate, grossPay, taxes, netPay;
    const double TAX_RATE = 0.25; // 25% tax rate

    // Get input from the user
    cout << "Enter the number of hours worked: ";
    cin >> hoursWorked;
    cout << "Enter the hourly rate: ";
    cin >> hourlyRate;

    // Calculate the gross pay
    grossPay = hoursWorked * hourlyRate;

    // Calculate the taxes
    taxes = grossPay * TAX_RATE;

    // Calculate the net pay
    netPay = grossPay - taxes;

    // Output the results
    cout << fixed << setprecision(2);
    cout << "Gross Pay: $" << grossPay << endl;
    cout << "Taxes: $" << taxes << endl;
    cout << "Net Pay: $" << netPay << endl;

    return 0;
}
