#include <iostream>
#include <iomanip> // for formatting output

using namespace std;

int main() {
    // Declare variables
    string customerName;
    float initialAmount;
    float interestRate;
    float finalAmount;

    // Prompt the user for input
    cout << "Enter customer name: ";
    getline(cin, customerName); // Read the whole line including spaces

    cout << "Enter initial amount: ";
    cin >> initialAmount;

    cout << "Enter interest rate (in percentage, e.g., 0.49 for 0.49%): ";
    cin >> interestRate;

    // Convert interest rate from percentage to decimal
    interestRate /= 100;

    // Calculate final amount
    finalAmount = initialAmount * (1 + interestRate);

    // Display output with formatting
    cout << fixed << setprecision(2); // Set decimal precision to 2 digits

    cout << "----------------------------------" << endl;
    cout << left << setw(20) << "Name of Bank customer:" << right << setw(10) << customerName << endl;
    cout << left << setw(20) << "Amount of money in saving account:" << right << setw(10) << initialAmount << endl;
    cout << left << setw(20) << "Interest Rate:" << right << setw(10) << interestRate * 100 << "%" << endl;
    cout << left << setw(20) << "Total money at the end of year round:" << right << setw(10) << finalAmount << endl;
    cout << "----------------------------------" << endl;

    return 0;
}
