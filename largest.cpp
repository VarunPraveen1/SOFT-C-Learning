#include <iostream>
using namespace std;

int main()
{
    int x, y;

    cout << "Enter two numbers: " ;
    cin >> x >> y;

    if (x > y)
        cout << x << " is the largest number.";
    else if (y > x)
        cout << y << " is the largest number.";
    else
        cout << "Both numbers are equal.";

    return 0;
}