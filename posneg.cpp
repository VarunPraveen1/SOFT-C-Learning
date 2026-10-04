#include <iostream>
using namespace std;

int main()
{
    int x;

    cout << "Enter a number: " ;
    cin >> x;

    if (x > 0)
        cout << "This is a positive number.";
    else if (x < 0)
        cout << "This is a negative number.";
    else
        cout << "This is zero";

    return 0;
}