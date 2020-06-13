#include<iostream>
using namespace std;
int main()
{
    unsigned int n;
    unsigned long long fact=1;

    cout << " Enter the positive no to find factorials\n";
    cin >> n;

    for( int i=1; i <= n; ++i)
    {
        fact *= i;
    }

    cout << "factorial of " << n << "! = " << fact << endl;
}