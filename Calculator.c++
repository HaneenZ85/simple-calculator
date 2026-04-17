#include <iostream>
using namespace std;

class Calculator
{
public:
    double add(double a, double b) { return a + b; }
    double subtract(double a, double b) { return a - b; }
    double multiply(double a, double b) { return a * b; }
    double divide(double a, double b)
    {
        if (b == 0)
        {
            cout << "Error : Division by zero!" << endl;
            return 0;
        }
        return a / b;
    }
};

int main()
{
    Calculator c;
    double a, b;
    int operation;
    char choice;

    do
{
    cout << "\n===== MENU START AGAIN =====\n";

    cout << "1) Add\n";
    cout << "2) Subtract\n";
    cout << "3) Multiply\n";
    cout << "4) Divide\n";
    cout << "5) Exit\n";

    cout << "Enter choice: ";
    cin >> operation;

    if (operation == 5)
    {
        cout << "Goodbye 👋\n";
        break;
    }

    if (!(operation >= 1 && operation <= 5))
    {
        cout << "Invalid choice! Back to menu...\n";
        continue;
    }

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    switch (operation)
    {
    case 1: cout << c.add(a,b) << endl; break;
    case 2: cout << c.subtract(a,b) << endl; break;
    case 3: cout << c.multiply(a,b) << endl; break;
    case 4: cout << c.divide(a,b) << endl; break;
    }

} while (true);

    cout << "--------------------\n";
    return 0;
}