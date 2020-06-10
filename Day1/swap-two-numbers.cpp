#include<iostream>
using namespace std;
int main()
{
    int n1=5, n2=4, temp;

    cout << "Before swapping \n";
    cout << "n1 = "<< n1 << endl;
    cout << "n2 = " << n2 << endl;

    temp= n1;
    n1 = n2;
    n2 = temp;

    cout << "After swapping\n";
    cout << " n1 =" << n1 << endl;
    cout << " n2 =" << n2 << endl;
}