#include <iostream>
using namespace std;

int main()
{
    string name;
    int rollNumber;
    float marks;

    cout << "Enter roll number: ";
    cin >> rollNumber;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter marks: ";
    cin >> marks;
    cout << "Student Information:" << endl;
    cout << "Roll Number: " << rollNumber << endl;
    cout << "Name: " << name << endl;
    cout << "Marks: " << marks << endl;
    return 0;
}