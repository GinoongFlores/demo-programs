#include <iostream>
#include <string>
using namespace std;

void calculator();

int main()
{
    // Call the calculator function.
    calculator();
    return 0;
}

// Calculates the result of a simple arithmetic expression entered by the user.
void calculator()
{
    // Get the first number.
    cout << "Welcome to the calculator program." << endl;
    cout << "Enter your first number: ";
    float number1;
    cin >> number1;

    // Get the second number.
    cout << "Enter your second number: ";
    float number2;
    cin >> number2;

    // Get the operator.
    cout << "Enter your operator: ";
    string op;
    cin >> op;

    // Perform the calculation.
    if (op == "+")
    {
        cout << "The result is: " << (number1 + number2) << endl;
    }
    else if (op == "-")
    {
        cout << "The result is: " << (number1 - number2) << endl;
    }
    else if (op == "*")
    {
        cout << "The result is: " << (number1 * number2) << endl;
    }
    else if (op == "/")
    {
        cout << "The result is: " << (number1 / number2) << endl;
    }
    else
    {
        cout << "Invalid input. Please try again." << endl;
    }
}