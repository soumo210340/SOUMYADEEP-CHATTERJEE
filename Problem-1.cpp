// Problem 1 Solution
#include <iostream>
#include <string>
using namespace std;

class Calculator {
public:
    double a, b;
    string op;

    Calculator(double a, double b, string op) : a(a), b(b), op(op) {}

    double calculate() {
        if (op == "add" || op == "+") return a + b;
        else if (op == "subtract" || op == "-") return a - b;
        else if (op == "multiply" || op == "*") return a * b;
        else if (op == "divide" || op == "/") {
            if (b == 0) {
                cout << "Error: Division by zero!" << endl;
                return 0;
            }
            return a / b;
        }
        else {
            cout << "Invalid operation!" << endl;
            return 0;
        }
    }
};

int main() {
    double a, b;
    string op;
    cout << "Enter first number (a): ";
    cin >> a;
    cout << "Enter second number (b): ";
    cin >> b;
    cout << "Enter operation (add, subtract, multiply, divide or +, -, *, /): ";
    cin >> op;
    Calculator calc(a, b, op);
    double result = calc.calculate();
    cout << "Result: " << result << endl;
    return 0;
}
