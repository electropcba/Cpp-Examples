#include<iostream>
using namespace std;
int main()
{
    int divisor, dividend, quotient, reminder;

    cout << "Enter Dividend\n";
    cin>>dividend;

    cout << "Enter Divisor\n";
    cin>> divisor;

    quotient = dividend / divisor;
    reminder = dividend % divisor;

    cout << "Quotient = "<< quotient << endl; //endl means end the line
    cout << "Reminder = "<< reminder << endl;
}