#include<iostream>
using namespace std;
int main()
{
    int arr[5], i;

    cout << " Size of the integer in this compiler is " << sizeof(int) << "\n";

    for( i=0; i<=5; i++)
    {
        cout << " Address of arr[" << i << "] is " << &arr[i] << "\n";
    }

    return 0;
}