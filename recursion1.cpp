#include<iostream>
using namespace std;

int reverse(int n)
{
    int mod = n % 10;
    cout<<mod;
    reverse(n/10);
}

int main()
{
    int n,x;
    cout<<"Enter the number to be reversed: "<<endl;
    cin>>n;
    x = reverse(n);
}