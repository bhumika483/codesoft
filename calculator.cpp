#include <iostream>
using namespace std;

void displayMenu() {
    cout << "\n      SIMPLE CALCULATOR" << endl;
    cout << "Select an operation:" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
}
int main() {
    int operation;
    double num1, num2;

    while (true) {
        displayMenu();
        cout << "\n  Enter your operation: ";
        cin >>operation;

        if (operation == 5) {
            cout << "Exiting the calculator. Goodbye!" << endl;
            break;
        }

        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;

        switch (operation) {
            case 1:
                cout << "Result: " << num1 + num2 << endl;
                break;
            case 2:
                cout << "Result: " << num1 - num2 << endl;
                break;
            case 3:
                cout << "Result: " << num1 * num2 << endl;
                break;
            case 4:
                if (num2 != 0)
                    cout << "Result: " << num1 / num2 << endl;
                else
                    cout << "Error: Division by zero is not allowed." << endl;
                break;
            default:
                cout << "Invalid choice. Please select a valid operation." << endl;
        }

        cout << endl;
    }

    return 0;
}
