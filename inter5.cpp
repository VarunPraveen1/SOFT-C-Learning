#include <iostream>
using namespace std;

int main()
{
    int num, original, reverse = 0;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    while (num > 0)
    {
        reverse = reverse * 10 + (num % 10);
        num = num / 10;
    }

    if (original == reverse)
    {
        cout << "The number is a palindrome." << endl;
    }
    else
    {
        cout << "The number is not a palindrome." << endl;
    }

    return 0;
}