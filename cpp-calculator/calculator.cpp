#include <iostream>
#include <stdexcept>
using namespace std;

void add(double a, double b) {
    cout << "Result: " << a + b << endl;
}

void subtract(double a, double b) {
    cout << "Result: " << a - b << endl;
}

void multiply(double a, double b) {
    cout << "Result: " << a * b << endl;
}

void divide(double a, double b) {
    if (b == 0) {
        throw invalid_argument("Error! Division by zero is not allowed.");
    }
    cout << "Result: " << a / b << endl;
}

int main() {
    double num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> num2;

    try {
        switch (operation) {
            case '+':
                add(num1, num2);
                break;
            case '-':
                subtract(num1, num2);
                break;
            case '*':
                multiply(num1, num2);
                break;
            case '/':
                divide(num1, num2);
                break;
            default:
                cout << "Invalid operator! Please use +, -, *, or /." << endl;
                break;
        }
    } catch (const invalid_argument& e) {
        cout << e.what() << endl;
    }

    return 0;
}
