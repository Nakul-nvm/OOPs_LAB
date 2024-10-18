#include <iostream>
using namespace std;

// Function to swap by value
void swap_value(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "After swapping (by value): a = " << a << ", b = " << b << endl;
}

// Function to swap by reference
void swap_reference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "After swapping (by reference): a = " << a << ", b = " << b << endl;
}

int main()
{
    int a, b, choice;

    // Taking input from the user
    cout << "Enter the first number (a): ";
    cin >> a;
    cout << "Enter the second number (b): ";
    cin >> b;

    // Displaying menu for user's choice
    cout << "\nChoose the swapping method:\n";
    cout << "1. Swap by Value\n";
    cout << "2. Swap by Reference\n";
    cout << "Enter your choice: ";
    cin >> choice;

    // Switch-case to execute the user's choice
    switch (choice)
    {
    case 1:
        swap_value(a, b);
        // Showing the values after call by value (original values remain unchanged)
        cout << "Original values after call by value: a = " << a << ", b = " << b << endl;
        break;
    case 2:
        swap_reference(a, b);
        // Showing the values after call by reference (original values change)
        cout << "Original values after call by reference: a = " << a << ", b = " << b << endl;
        break;
    default:
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
