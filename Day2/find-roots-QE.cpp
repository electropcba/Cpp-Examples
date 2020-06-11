#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float x1, x2, a, b, c, d;
    float imaginarypart, realpart;

    cout<< "Enter the value of a, b, c\n";
    cin >> a >> b >> c;

    d = b*b - 4*a*c;

    if ( d > 0)
    {
        cout << "The roots is real and different\n";
        x1 = ( -b + sqrt(b*b -4*a*c))/ (2*a);
        x2 = ( -b - sqrt(b*b -4*a*c))/ (2*a);
        cout << "x1 is = " << x1 << endl;
        cout << "x2 is = " << x2 << endl;
    }
    else if( d == 0)
    {
        cout << "The roots is real and equal\n";
        x1 = ( -b + sqrt( b*b -4*a*c))/(2*a);
        cout << " x1 = x2 = " << x1 << endl; 
    }
    else
    {
        cout << " The roots is imaginary\n";
        realpart = -b/(2*a);
        imaginarypart = sqrt(-d)/(2*a);
        cout << " x1 =" << realpart << " + " << imaginarypart << endl;
        cout << " x2 =" << realpart << " - " << imaginarypart << endl; 
    }

}
