#include<iostream>
using namespace std;
int main()
{
    int n1, n2, hcf;

    cout << "Enter the value of n1 && n2\n";
    cin >> n1 >> n2;

    for( int i = 1; i <= n2; ++i)
    {
        if( n1 % i ==0 && n2 % i == 0)
        {
            hcf =  i;
        }
    }

    cout << " HCF = " << hcf;
}