#include<iostream>
using namespace std;
int main()
{
    int n1, n2, n3;

    cout<< "Enter the numbers\n";
    cin>> n1 >> n2 >> n3;

    if( n1 > n2 && n1 > n3)
    {
        cout<< n1 <<" is largest among others.\n";
    }
    if( n2 > n1 && n2 > n3 )
    {
        cout<< n2 << "is largest among others.\n";
    }
    else
    cout << n3 << " is Largest among others.\n";
}