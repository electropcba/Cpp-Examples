#include<iostream>
using namespace std;
int main()
{   
    char c;
    char lowecase, uppercase;

    cout << "Enter char to check vowel or consonant\n";
    cin>> c;

    lowecase = ( c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    uppercase = (c=='A' || c=='E' || c=='I' || c=='O' || c=='U');

    if( lowecase || uppercase)
    {
        cout<< c <<" is vowel" <<endl;
    }
    else
    cout << c << " is consonant" <<endl;
}