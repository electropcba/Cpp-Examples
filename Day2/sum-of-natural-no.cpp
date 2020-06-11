#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n, sum=0;

    cout << " Enter the value of n\n";
    cin >> n;

   // sum = (n*(n+1))/(2);

   for ( int i=1; i <= n; ++i)
   {
       sum += i;
   }

    cout << "The sum is = " << sum << endl;

}