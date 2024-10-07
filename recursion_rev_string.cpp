#include<iostream>
using namespace std;

void reverse(char *str)
{
    if(*str)
    {
        reverse(str +1);
        cout<<("%c", *str);
    }
}

int main()
{
    char a[50];
    cout<<"Enter a string: "<<endl;
    cin>>a;
    reverse(a);
    return 0;
}