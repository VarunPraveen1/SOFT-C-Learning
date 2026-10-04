#include <iostream>
using namespace std;

int main()
{
    int x;

    cout << "Enter marks out of 100: " ;
    cin >> x;

    if (x > 40)
        cout << "You have passed.";
    else if (x < 40)
        cout << "You have failed.";
    else if (x > 100 || x < 0)
        cout << "Invalid marks. Please enter marks between 0 and 100.";

    return 0;
}