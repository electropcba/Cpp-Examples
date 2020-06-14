#include<iostream>
using namespace std;
int main()
{
    int n, t1=0, t2=1, nt = 0;

    cout << "Enter the number up to print fabonic series\n";
    cin >> n;

    cout << " fabonic series is: " << t1 << "," << t2 << ",";

    nt = t1 + t2;

    while( nt <= n)
    {
        cout << nt << ",";
        t1 = t2;
        t2 = nt;
        nt = t1 + t2;
    }
}
