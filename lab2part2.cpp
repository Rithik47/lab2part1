#include <iostream>
#include <iomanip> // for formatting output

using namespace std;

int main() {
    // Declare variables
    string name;
    float height;
    float expectedBMI;
    float weight;

    // Prompt the user for input
    cout << "Enter your name: ";
    getline(cin, name); // Read the whole line including spaces

    cout << "Enter your height (in inches): ";
    cin >> height;

    cout << "Enter your expected BMI: ";
    cin >> expectedBMI;

    // Calculate weight using the formula
    weight = expectedBMI * (height * height) / 703;

    // Display output with formatting
    cout << fixed << setprecision(2); // Set decimal precision to 2 digits

    cout << "----------------------------------" << endl;
    cout << left << setw(25) << "Name:" << right << setw(15) << name << endl;
    cout << left << setw(25) << "Height (in inches):" << right << setw(15) << height << endl;
    cout << left << setw(25) << "Expected BMI:" << right << setw(15) << expectedBMI << endl;
    cout << left << setw(25) << "Your excepted Weight (in pounds) Should be:" << right << setw(15) << weight << endl;
    cout << "----------------------------------" << endl;

    return 0;
}
