#include <iostream>
using namespace std;
int main() {
    double n1, n2;
    char operation;

    cout << "Enter first number: ";
    cin >> n1;

    cout << "Enter second number: ";
    cin >> n2;


    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;


    switch(operation) {
        case '+':
            cout << "Result: " << n1 + n2 << endl;
            break;
        case '-':
            cout << "Result: " << n1 - n2 << endl;
            break;
        case '*':
            cout << "Result: " << n1 * n2 << endl;
            break;
        case '/':
            if (n2 != 0) {
                cout << "Result: " << n1 / n2 << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Error: Invalid operation." << endl;
            break;
    }

    return 0;
}

