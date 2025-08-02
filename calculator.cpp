#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    while (1) {
        cout << "Enter the first number: ";
        cin >> num1;

        cout << "Enter the operator (+, -, *, /, %): ";
        cin >> op;

        cout << "Enter the second number: ";
        cin >> num2;

        double result;

        if (op == '+') {
            result = num1 + num2;
            cout << "Result: " << result << endl;
        }
        else if (op == '-') {
            result = num1 - num2;
            cout << "Result: " << result << endl;
        }
        else if (op == '*') {
            result = num1 * num2;
            cout << "Result: " << result << endl;
        }
        else if (op == '/') {
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << result << endl;
            } else {
                cout << "Invalid operation. Cannot divide by 0!" << endl;
            }
        }
        else if (op == '%') {
            if ((int)num2 != 0) {
                result = (int)num1 % (int)num2;
                cout << "Result: " << result << endl;
            } else {
                cout << "Invalid operation. Cannot modulo by 0!" << endl;
            }
        }
        else {
            cout << "Invalid operator!" << endl;
        }

        char value;
        cout << "Do you want to continue the calculation (y/n): ";
        cin >> value;
        if (value != 'y' && value != 'Y') {
            break;
        }
    }

    return 0;
}



