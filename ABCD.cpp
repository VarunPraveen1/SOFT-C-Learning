#include <iostream>
using namespace std;

int main()
{
    int x;

    cout << "Enter marks out of 100: " ;
    cin >> x;

    if (x > 90)
        cout << "A grade.";
    else if (x > 80)
        cout << "B grade.";
    else if (x > 70)
        cout << "C grade.";
    else if (x > 60)
        cout << "D grade.";
    else
        cout << "You have failed.";

    return 0;
}