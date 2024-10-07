#include<iostream>
using namespace std;

int add(int n)
{
    if(n <= 1)
    {
        return n;  // Corrected to return `n` (which is 1) when n is 1.
    }
    else
    {
        return (n + add(n-1));  // Sum up `n` and recursive call with `n-1`.
    }
}

int main()
{
    int x, n;
    cout << "Enter a number: " << endl;
    cin >> n;
    x = add(n);
    cout << x;
    return 0;
}
