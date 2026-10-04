#include <iostream>
using namespace std;

int main()
{
    int choice;
    cout << "1. Add \n 2. Subtract \n 3. Multiply \n 4. Divide \n 5. Exit \n Enter your choice: ";
    cin >> choice;
    switch (choice)
    {
        case 1:
            cout << "You chose to Add." << endl;
            break;
        case 2:
            cout << "You chose to Subtract." << endl;
            break;
        case 3:
            cout << "You chose to Multiply." << endl;
            break;
        case 4:
            cout << "You chose to Divide." << endl;
            break;
        case 5:
            cout << "Exiting the program." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
    }
    return 0;
}   